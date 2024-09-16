#include <iostream>

int main() {
    // Declare the array and assign values
    int marks[] = {70, 65, 55, 45, 75};
    int total = 0;
    int size = sizeof(marks) / sizeof(marks[0]); // Calculate the number of elements in the array

    // Use a loop to sum the marks
    for (int i = 0; i < size; ++i) {
        total += marks[i];
    }

    // Calculate the average score
    double average = static_cast<double>(total) / size;

    // Output the total and average scores
    std::cout << "Total Score: " << total << std::endl;
    std::cout << "Average Score: " << average << std::endl;

    return 0;
}
