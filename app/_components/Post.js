import Link from "next/link";
import React from "react";
import Image from "next/image";
import { format } from "date-fns";

export default function Post({ post }) {
  return (
    <Link
      href={`/post/${post.p_id}`}
      className="flex flex-col gap-[25px] items-center  sm:flex-row sm:items-start"
    >
      <div className="relative h-[300px] w-[100%] max-w-[400px] sm:h-[300px] sm:w-[300px]">
        <Image
          className="object-cover"
          alt="post_image"
          src={`${post.p_image}`}
          fill
        />
      </div>
      <div className=" sm:w-2/3 flex flex-col gap-2">
        <p className="text-xl font-bold">{post.p_title}</p>
        <p className="text-sm text-gray-500 italic">
          {format(new Date(post.created_at), "MMM d, yyyy")}
        </p>
        <h1 className="text-lg font-bold">{post.p_username}</h1>
        <p className="text-sm text-gray-500">{post.p_text}</p>
      </div>
    </Link>
  );
}
