# Off-by-one Error in C++ Vector Iteration
This repository demonstrates a common off-by-one error in C++ when iterating through a `std::vector`. The error occurs because the loop condition `i <= vec.size()` attempts to access an element beyond the vector's valid index range.  This can lead to crashes, unexpected behavior, or security vulnerabilities.

**The bug:** The code iterates from index 0 up to and *including* `vec.size()`.  The valid indices of a vector of size N are 0 to N-1.  Therefore accessing `vec[vec.size()]` is always out of bounds.

**The solution:** Correct the loop condition to `i < vec.size()` to iterate only up to the last valid index.