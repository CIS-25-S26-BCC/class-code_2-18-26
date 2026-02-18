#include <iostream>
#include <string>

struct Student {
    long studentID;
    std::string name;
};

void displayStudent(const Student *s) {
    std::cout << "--- Displaying Student Data ---" << std::endl;
    // Use the arrow operator to access members via the pointer
    std::cout << "ID: " << s->studentID << std::endl;
    std::cout << "Name: " << s->name << std::endl;
}

int main() {

    int x = 0;
    Student * newStudent = new Student;
    (*newStudent).studentID = 55123; // THESE TWO THINGS ARE EQUIVALENT
    newStudent->studentID = 55123;
    (*newStudent).name = "Frank Miller";

    // Student *studentPtr = &newStudent;

    // // Access members using the dereference/dot operator method
    // std::cout << "Accessing via (*studentPtr).name: " << (*studentPtr).name << std::endl;

    // // Access members using the arrow operator
    // std::cout << "Accessing via studentPtr->name: " << studentPtr->name << std::endl;

    // displayStudent(studentPtr);

    return 0;
}
