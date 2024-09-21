import Header from "./_components/Header";
import Main from "./_components/Main";
import AddNewPost from "./_components/AddNewPost";

export const revalidate = 1;

export default async function page() {
  return (
    <div>
      <Header />
      <Main />
      <AddNewPost />
    </div>
  );
}
