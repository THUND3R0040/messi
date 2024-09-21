import React from "react";
import { createClient } from "../utils/supabase/server";
import AddNewPostPopup from "./AddNewPostPopup";

export default async function AddNewPost() {
  const supabase = createClient();
  const {
    data: { user },
    error,
  } = await supabase.auth.getUser();

  if (user) {
    return <AddNewPostPopup user={user} />;
  }
  return null;
}
