"use client";
import { logout } from "../login/actions";

export default function Logout() {
  return <p onClick={() => logout()}>Logout</p>;
}
