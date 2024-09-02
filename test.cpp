#include <iostream> // preprocessor directive (includes the iostream library)

using namespace std; // standard namespace (region of code) prevents name conflicts between different libraries/files
using std::cout;     // using declarations
using std::endl;     // using declarations

namespace CustomNamespace
{
  void display()
  {
    cout << "IMxSuhasTheBoy custom function" << endl;
    return;
    // "IMxSuhasTheBoy"
  }
}

int main() // main function (entry point of the program)
{
  CustomNamespace::display();                 // calls the display function from the CustomNamespace namespace
  std::cout << "IMxSuhasTheBoy main function" << std::endl; // output stream (prints to the console)
  return 0;
}

int customFunction()
{
  return 67;
}

// Sure! Let's start with a simple "Hello, World!" program in C++ and then break it down.

// ### Hello, World! Program

// ```cpp
// #include <iostream> // Include the input-output stream library

// using namespace std; // Use the standard namespace

// int main() // Main function where execution begins
// {
//     cout << "Hello, World!"; // Print "Hello, World!" to the console
//     return 0; // Return 0 to indicate successful execution
// }
// ```

// ### Explanation

// 1. **`#include <iostream>`**: This line includes the standard input-output stream library, which is necessary for using `cout`.

// 2. **`using namespace std;`**: This line tells the compiler to use the standard namespace. This allows you to use `cout` without needing to prefix it with `std::`.

// 3. **`int main()`**: This is the main function where the execution of the program begins. Every C++ program must have a `main` function.

// 4. **`cout << "Hello, World!";`**: This line prints the string "Hello, World!" to the console. `cout` is the standard output stream in C++.

// 5. **`return 0;`**: This line returns 0 to the operating system, indicating that the program executed successfully.

// ### Running the Program

// 1. **Save the file** with a `.cpp` extension, for example, `hello.cpp`.
// 2. **Compile the program** using a C++ compiler like `g++`:
//    ```sh
//    g++ hello.cpp -o hello
//    ```
// 3. **Run the compiled program**:
//    ```sh
//    ./hello
//    ```

// This will output:
// ```
// Hello, World!
// ```

// Feel free to ask more specific questions or for more advanced topics!