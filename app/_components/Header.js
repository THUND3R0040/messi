import React from "react";
import Intro from "./Intro";
import Navbar from "./Navbar";
export default function Header() {
  return (
    <header className="flex flex-col gap-12">
      <Navbar />
      <Intro />
    </header>
  );
}
