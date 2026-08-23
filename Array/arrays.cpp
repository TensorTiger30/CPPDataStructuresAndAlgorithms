#include <iostream>

int main() {

    // By default undefined array elements are assigned value as 0
    int A[10] = {1};

    std::cout << "Classic For Loop" << std::endl;
    for(int i = 0; i < sizeof(A)/sizeof(A[0]); i++) {
        std::cout << A[i] << std::endl;
    }

    std::cout << "Modern For Loop" << std::endl;

    for(int x:A) {
        std::cout << x << std::endl;
    }
}