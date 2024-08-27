## Write a short parallel program, in your language choice, using either MPI, OpenMP, OpenACC, OpenMP offload, or CUDA.

Here's a simple example of a parallel program using OpenMP in C++17. This program performs a parallelized vector addition operation.

### Explanation:
1. **Include headers**: We include the necessary headers for input/output, vector handling, and OpenMP.
2. **Vector addition function**: The `vectorAdd` function performs element-wise addition of two vectors. The `#pragma omp parallel for` directive tells the compiler to parallelize the for-loop using OpenMP.
3. **Main function**: In `main`, we define the size of the vectors, initialize them, and call the `vectorAdd` function. Finally, we print the first ten elements of the resulting vector.

### Compilation:
To compile the code with OpenMP support, you can use a compiler like `g++` with the `-fopenmp` flag. For example:

g++ -fopenmp -std=c++17 -o vector_add vector_add.cpp

Ensure you have OpenMP support enabled in your compiler, which is typically included in most modern C++ compilers.

