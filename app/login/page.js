import { login, signup } from "./actions";

export default function Page() {
  return (
    <form
      action={login}
      className="flex flex-col gap-2 p-4 w-1/2 mx-auto mt-10 bg-white rounded-md shadow-md "
    >
      <label htmlFor="email" className="text-gray-700 text-lg mt-4">
        Email:
      </label>
      <input
        id="email"
        name="email"
        type="email"
        required
        className="p-2 rounded-md border border-gray-300 focus:outline-none focus:border-blue-500"
      />
      <label htmlFor="password" className="text-gray-700 text-lg mt-4">
        Password:
      </label>

      <input
        id="password"
        name="password"
        type="password"
        required
        className="p-2 rounded-md border border-gray-300 focus:outline-none focus:border-blue-500"
      />
      <button type="submit" className="bg-blue-500 text-white p-2 rounded-md">
        Login
      </button>
    </form>
  );
}
