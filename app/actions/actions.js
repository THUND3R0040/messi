"use server";
import { addPost, deletePostApi } from "@/app/_lib/data-service";
import { revalidatePath } from "next/cache";
import { redirect } from "next/navigation";

export async function AddNewPost(formData) {
  const newData = {
    p_username: formData.get("username"),
    p_user_email: formData.get("email"),
    p_text: formData.get("content"),
    p_title: formData.get("title"),
  };

  await addPost({ ...newData, p_image: formData.get("file") });
  revalidatePath("/");
}

export async function deletePost(id) {
  await deletePostApi(id);
  redirect("/");
}
