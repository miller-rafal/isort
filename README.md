# isort
Single-header implementation of a generic insertion sort function.

This is an alternative to C standard library's qsort() function and it is called in a very similar way.

You might want to use this if:
  - You want to sort relatively small sets of data and time complexity is not an issue
  - You need an algorithm with a constant memory complexity
  - You need a STABLE sorting algorithm, as in: https://en.wikipedia.org/wiki/Sorting_algorithm#Stability
