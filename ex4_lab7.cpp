//exercise 4
#include <iostream>
#include <string>

// Define the Employee structure
struct Employee {
    std::string firstName;
    std::string lastName;
    std::string email;
    std::string phoneNumber;
    int ID;
    double salary;
    Employee* manager;  // Pointer to another Employee (manager)
};

int main() {
    // Initialize the manager
    Employee manager;
    manager.firstName = "John";
    manager.lastName = "Doe";
    manager.email = "john.doe@example.com";
    manager.phoneNumber = "123-456-7890";
    manager.ID = 1;
    manager.salary = 80000.0;
    manager.manager = nullptr;  // The manager is the top-level, so set manager pointer to nullptr

    // Initialize two staff members reporting to the manager
    Employee staff1;
    staff1.firstName = "Alice";
    staff1.lastName = "Smith";
    staff1.email = "alice.smith@example.com";
    staff1.phoneNumber = "987-654-3210";
    staff1.ID = 2;
    staff1.salary = 50000.0;
    staff1.manager = &manager;  // Set the manager pointer to point to the manager

    Employee staff2;
    staff2.firstName = "Bob";
    staff2.lastName = "Johnson";
    staff2.email = "bob.johnson@example.com";
    staff2.phoneNumber = "567-890-1234";
    staff2.ID = 3;
    staff2.salary = 55000.0;
    staff2.manager = &manager;  // Set the manager pointer to point to the manager

    // Output details of the employees
    std::cout << "Manager: " << manager.firstName << " " << manager.lastName << std::endl;
    std::cout << "Email: " << manager.email << std::endl;
    std::cout << "Phone Number: " << manager.phoneNumber << std::endl;
    std::cout << "ID: " << manager.ID << std::endl;
    std::cout << "Salary: $" << manager.salary << std::endl;

    std::cout << "\nStaff 1: " << staff1.firstName << " " << staff1.lastName << std::endl;
    std::cout << "Email: " << staff1.email << std::endl;
    std::cout << "Phone Number: " << staff1.phoneNumber << std::endl;
    std::cout << "ID: " << staff1.ID << std::endl;
    std::cout << "Salary: $" << staff1.salary << std::endl;
    std::cout << "Manager: " << staff1.manager->firstName << " " << staff1.manager->lastName << std::endl;

    std::cout << "\nStaff 2: " << staff2.firstName << " " << staff2.lastName << std::endl;
    std::cout << "Email: " << staff2.email << std::endl;
    std::cout << "Phone Number: " << staff2.phoneNumber << std::endl;
    std::cout << "ID: " << staff2.ID << std::endl;
    std::cout << "Salary: $" << staff2.salary << std::endl;
    std::cout << "Manager: " << staff2.manager->firstName << " " << staff2.manager->lastName << std::endl;

    return 0;
}
