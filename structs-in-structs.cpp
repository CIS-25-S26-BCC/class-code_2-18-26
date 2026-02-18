#include <iostream>
#include <string>

// Declaration of a new data type called "Student"
struct Student {
    long studentID;
    std::string name;
    int year;
    double gpa;
};

struct School {
    int schoolSystemId;
    std::string name;
    Student[] students;
    Student valedictorian;
}

struct SchoolSystem {
    int schoolSystemId;
}

int main() {
    // We can now define variables of our new "Student" type
    
    return 0;
}
