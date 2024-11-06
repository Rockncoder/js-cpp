# js-cpp
Modern versions of C++ and JavaScript are very different languages, but they can be programmed in similar styles.

1. functions without classes
1. class member functions
1. The **this** pointer
1. lambdas/arrow functions
1. closures
  1. JS
    1. https://developer.mozilla.org/en-US/docs/Web/JavaScript/A_re-introduction_to_JavaScript#closures
  1. C++ 
    1. https://leimao.github.io/blog/CPP-Closure/#:~:text=In%20C%2B%2B%2C%20lambda%20expression,that%20originated%20from%20functional%20programming.
1. scope anywhere with {} blocks
1. nested classes/structs
1. destructuring ES6 & C++17 (but they call it different things)
  1. JS - destructuring assignment
    1. https://developer.mozilla.org/en-US/docs/Web/JavaScript/Reference/Operators/Destructuring_assignment
  1. C++ - structure binding declaration
    1. https://en.cppreference.com/w/cpp/language/structured_binding
1. range for loops
1. initializing arrays with generated data
1. IIFE - immediately invoke function expression
1. web server code, express vs. Drogon (focus on the routes)
1.	Async Programming: Promises vs. Futures/Async
Both languages support async programming, though their approaches differ. JavaScript uses Promises and async/await, while C++ offers std::future and std::async.
2.	Modules vs. Imports
JavaScript’s ES6 modules and C++20’s modules both provide a way to encapsulate code and manage dependencies, though implementation details differ.
3.	Error Handling with try/catch
JavaScript and C++ use try/catch blocks for error handling, making this a good comparison for different exception-handling philosophies.
4.	Iterators and Iterable Protocols
JavaScript has iterables with protocols like Symbol.iterator, while C++ has iterators within the STL, providing similar functionality.
5.	Generators and Coroutines
JavaScript’s generators (using yield) have a counterpart in C++’s coroutines introduced in C++20, allowing both to support lazy evaluation.
6.	Equality Operators
JavaScript’s == vs. === and C++’s == offer a direct comparison point, particularly around strict and loose equality concepts.
7.	Template Literals vs. String Formatting
JavaScript’s template literals (with backticks) and C++’s std::format or std::stringstream provide ways to format strings dynamically.
8.	Collections and Iteration Methods
JavaScript’s array functions (map, filter, reduce) have counterparts in C++ with <algorithm> functions like std::transform, std::copy_if, and std::accumulate.
9.	Type Aliases (TypeScript vs. C++ Typedefs/using)
JavaScript with TypeScript has type aliases similar to C++’s typedef and using, allowing for custom, shorthand type definitions.
10.	Class Fields and Access Modifiers
JavaScript (with private fields) and C++ use access modifiers, though they handle encapsulation differently.
11.	Prototype/Prototype-like Patterns
JavaScript’s prototype-based inheritance and C++’s class-based inheritance differ but can be compared around object-oriented design principles.
12.	Weak References and Smart Pointers
JavaScript has WeakMap and WeakSet, somewhat akin to C++’s std::weak_ptr, focusing on memory management for shared resources.
