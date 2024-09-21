"use client";
import React, { useState } from "react";
import { AddNewPost } from "@/app/actions/actions";

export default function AddNewPostPopup({ user }) {
  const [isOpen, setIsOpen] = useState(0);
  return (
    <div className="flex justify-center items-center">
      {user ? (
        <button
          className="bg-blue-500 text-white px-4 py-2 rounded-md mx-auto"
          onClick={() => setIsOpen(1)}
        >
          Create New Post
        </button>
      ) : null}
      {isOpen ? (
        <form
          className="flex flex-col gap-4 fixed top-0 h-5/6 w-5/6   bg-black   pt-14 p-8"
          action={(formData) => {
            AddNewPost(formData);
            setIsOpen(0);
          }}
        >
          <button
            onClick={(e) => {
              e.preventDefault();
              setIsOpen(0);
            }}
            className="text-white absolute top-3 right-3"
          >
            close
          </button>
          <input type="hidden" name="email" value={user.email} required />
          <input
            required
            type="text"
            placeholder="username"
            defaultValue={user.email.slice(0, user.email.indexOf("@"))}
            className="p-2 rounded-md  opacity-100"
            name="username"
          />
          <input
            type="text"
            placeholder="Title"
            className="p-2 rounded-md  opacity-100"
            name="title"
            required
          />
          <input
            type="text"
            placeholder="Content"
            className="p-2 rounded-md  opacity-100"
            name="content"
            required
          />
          <input type="file" name="file" required />
          <button
            type="submit"
            className="bg-blue-500 text-white px-4 py-2 rounded-md opacity-100"
          >
            Create
          </button>
        </form>
      ) : null}
    </div>
  );
}
