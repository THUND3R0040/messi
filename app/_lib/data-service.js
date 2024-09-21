import { notFound } from "next/navigation";
import supabase from "./supabase";

async function getPosts() {
  let { data: posts, error } = await supabase.from("post").select("*");
  if (error) {
    console.log(error);
    notFound();
  }
  return posts;
}

async function getPost(p_id) {
  let { data: post, error } = await supabase
    .from("post")
    .select("*")
    .eq("p_id", p_id)
    .single();

  if (error) {
    console.log(error);
    notFound();
  }
  return post;
}

async function addPost(newPost) {
  const imageName = `${Math.random()}-${newPost.p_image.name}`.replaceAll(
    "/",
    ""
  );

  const imagePath = `${process.env.NEXT_PUBLIC_SUPABASE_URL}/storage/v1/object/public/post_image/${imageName}`;

  const { data, error } = await supabase
    .from("post")
    .insert([{ ...newPost, p_image: imagePath }])
    .select();
  if (error) {
    console.log(error);
  }

  //adding image to the bucket

  const { error: storageError } = await supabase.storage
    .from("post_image")
    .upload(imageName, newPost.p_image, {
      cacheControl: "3600",
      upsert: false,
    });
  // file provided not image or error in uploading file ===> delete the added row
  if (
    (!newPost.p_image.type.startsWith("image/jpeg") &&
      !newPost.p_image.type.startsWith("image/png")) ||
    storageError
  ) {
    const { error } = await supabase
      .from("post")
      .delete()
      .eq("p_id", data[0].p_id);
  }
}

async function deletePostApi(id) {
  const { error } = await supabase.from("post").delete().eq("p_id", id);
  if (error) {
    console.log(error);
  }
}

export { getPosts, getPost, addPost, deletePostApi };
