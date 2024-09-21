"use client";
import React, { useEffect, useState } from "react";
import { getPost } from "@/app/_lib/data-service";
import { format } from "date-fns";
import { deletePost } from "@/app/actions/actions";

export default function Page({ params }) {
  const [post, setPost] = useState(null);
  useEffect(() => {
    async function fetchData() {
      const post = await getPost(params.p_id);
      console.log(post);
      setPost(post);
    }
    fetchData();
  }, [params.p_id]);

  return (
    <div className="flex flex-col items-center justify-center h-screen gap-4">
      <h1 className="text-4xl font-bold">{post?.p_title}</h1>
      <p className="text-2xl">{post?.p_text}</p>
      <p className="text-sm">{post?.created_at}</p>

      <p className="text-sm">{post?.p_username}</p>
      <button
        className="bg-blue-500 text-white px-4 py-2 rounded-md"
        onClick={() => {
          deletePost(params.p_id);
        }}
      >
        Delete Post
      </button>
    </div>
  );
}
