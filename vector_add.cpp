#include <iostream>
#include <vector>
#include <omp.h>

void vectorAdd(const std::vector<int>& A, const std::vector<int>& B, std::vector<int>& C) {
    #pragma omp parallel for
    for (size_t i = 0; i < A.size(); ++i) {
        C[i] = A[i] + B[i];
    }
}

int main() {
    const size_t N = 1000000;
    std::vector<int> A(N, 1); // Initialize A with 1s
    std::vector<int> B(N, 2); // Initialize B with 2s
    std::vector<int> C(N); // Result vector

    vectorAdd(A, B, C);

    // Optional: Print the first 10 results
    for (size_t i = 0; i < 10; ++i) {
        std::cout << "C[" << i << "] = " << C[i] << std::endl;
    }

    return 0;
}
