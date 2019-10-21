# IIFE - Immediately Invoked Function Expression

```
const auto var = init_value;

But if we need to do some more steps to compute the value?

Usually, I'd recommend wrapping the code into a separate function and giving it a proper name. However, since C++11, we have a useful way of creating a local, unnamed lambda, and calling it.

It looks something like that:

const auto var = [&] {
    return /* some complex code here */;
}(); // call it!

It's called IIFE - Immediately Invoked Function Expression

```
