#include <iostream>

// Function to add two integers
int add(int a, int b) {
    return a + b; // Return the sum of a and b
}

int main() {
    int num1 = 5; // First number to add
    int num2 = 10; // Second number to add
    int result = add(num1, num2); // Call add function and store the result
    std::cout << "The sum is: " << result << std::endl; // Output the result
    return 0; // Indicate that the program ended successfully
}
