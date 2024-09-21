import React from "react";
import { getPosts } from "@/app/_lib/data-service";
import Post from "./Post";
import { createClient } from "../utils/supabase/server";

export const revalidate = 1;

export default async function Main() {
  const supabase = createClient();
  const {
    data: { user },
    error,
  } = await supabase.auth.getUser();
  console.log(user);
  const posts = await getPosts();
  return (
    <div className=" py-12">
      <div className="flex flex-col gap-24 mx-auto w-full px-8 max-w-[1200px]">
        {posts.map((post) => {
          return <Post key={post.p_id} post={post} />;
        })}
      </div>
    </div>
  );
}
