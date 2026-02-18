#include <iostream>
#include <string>

// Declaration of a new data type called "Student"
struct Student {
    long studentID;
    std::string name;
    int year;
    double gpa;
};

int main() {
    // We can now define variables of our new "Student" type
    Student firstStudent;

    firstStudent.studentID = 1234;
    firstStudent.name = "Nick";
    firstStudent.year = 3;
    firstStudent.gpa = 3.67;

    std::cout << "Hi my name is " << firstStudent.name << " and my Student ID is " << firstStudent.studentID << std::endl;


    Student secondStudent;

    secondStudent.studentID = 1235;
    secondStudent.name = "Joe";
    secondStudent.year = 1;
    secondStudent.gpa = 1.23;

    int size = 2;
    Student studentArray[size] = {firstStudent, secondStudent};

    for(int i=0; i < size; i++) {
        std::cout << "The student at index " << i << " has the name " << studentArray[i].name << " and ID " << studentArray[i].studentID << std::endl;
    }
    return 0;
}
