#include <iostream>
#include <string>

enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

Day getDOWFromDate(int year, int month, int day) {
    // calculate day of week
    if( (year == 2026) && (month == 2) && (day == 18) ) {
        return WEDNESDAY;
    }
    return SUNDAY;
}


int main() {

    //std::string daysOfTheWeek[] = "Sunday", "Monday", "Tuesday";



    // Student *studentPtr = &newStudent;

    // // Access members using the dereference/dot operator method
    // std::cout << "Accessing via (*studentPtr).name: " << (*studentPtr).name << std::endl;

    // // Access members using the arrow operator
    // std::cout << "Accessing via studentPtr->name: " << studentPtr->name << std::endl;

    // displayStudent(studentPtr);

    return 0;
}
