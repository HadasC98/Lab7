//exercise 5
#include <iostream>
#include <string>

// Define the Employee structure
struct Employee {
    std::string firstName;
    std::string lastName;
    int ID;
};

int main() {
    int numberOfStaff;

    // Ask the user for the number of staff members
    std::cout << "Enter the number of staff members: ";
    std::cin >> numberOfStaff;

    // Dynamically allocate an array of Employee structures
    Employee* staffArray = new Employee[numberOfStaff];

    // Input details for each staff member
    for (int i = 0; i < numberOfStaff; ++i) {
        std::cout << "\nEnter details for Staff Member " << i + 1 << ":\n";
        std::cout << "Enter first name: ";
        std::cin >> staffArray[i].firstName;
        std::cout << "Enter last name: ";
        std::cin >> staffArray[i].lastName;
        std::cout << "Enter ID: ";
        std::cin >> staffArray[i].ID;
    }

    // Output the ID and name of each staff member
    std::cout << "\nList of Staff Members:\n";
    std::cout << "ID\tName\n";
    for (int i = 0; i < numberOfStaff; ++i) {
        std::cout << staffArray[i].ID << "\t" << staffArray[i].firstName << " " << staffArray[i].lastName << "\n";
    }

    // Deallocate the dynamically allocated array
    delete[] staffArray;

    return 0;
}
