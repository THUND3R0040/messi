import Link from "next/link";
import React from "react";
import { createClient } from "../utils/supabase/server";
import Logout from "./Logout";

export default async function Navbar() {
  const supabase = createClient();
  const { data, error } = await supabase.auth.getUser();

  return (
    <nav className="flex gap-10 text-slate-800 justify-center pr-6 pl-6 max-w-[30em] mx-auto py-9 font-semibold text-base">
      <Link className="" href="/Articles">
        Articles
      </Link>
      <Link href="/About">About</Link>
      {data?.user?.email ? <Logout /> : <Link href="/login">Login</Link>}
    </nav>
  );
}
