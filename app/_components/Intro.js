import React from "react";
import Image from "next/image";
import myImage from "@/public/myImage.jpg";

export default function Intro() {
  return (
    <div className="flex flex-col  items-center w-4/5 mx-auto gap-8 max-w-[512px]">
      <div className="rounded-full relative overflow-hidden w-40 h-40">
        <Image
          alt="Ahmed Gargouri Image"
          src={myImage}
          fill
          className="object-cover"
        />
      </div>
      <div className="flex flex-col items-center gap-2">
        <h1 className="text-2xl font-bold">Ahmed Gargouri</h1>
        <h3 className="text-2xl text-gray-500 text-center italic tracking-[-0.025em]">
          Writer at The Daily Times spending all my free time writing stories
        </h3>
      </div>
    </div>
  );
}
