//ex 2, lab 7
#include <iostream>

// Function to reverse an array of characters
void reverse(char s[], int size) {
    for (int i = 0, j = size - 1; i < j; ++i, --j) {
        // Swap characters at positions i and j
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}

int main() {
    const int maxSize = 100;  // Assuming a maximum size for the character array
    char charArray[maxSize];

    // Get input from the user
    std::cout << "Enter a string: ";
    std::cin.getline(charArray, maxSize);

    // Calculate the size of the entered string
    int size = 0;
    while (charArray[size] != '\0') {
        ++size;
    }

    // Reverse the array of characters
    reverse(charArray, size);

    // Output the reversed string
    std::cout << "Reversed string: " << charArray << std::endl;

    return 0;
}
