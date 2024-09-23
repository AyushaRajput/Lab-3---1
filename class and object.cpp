#include <iostream>
#include <string>
using namespace std;
class Student {
public:
// Properties (data members)
string name;
int rollNumber;
int age;
// Function to display student information
void displayInfo() {
cout << "Name: " << name << endl;
cout << "Roll Number: " << rollNumber << endl;
cout << "Age: " << age << endl;
}
};
int main() {
// Create objects (instances) of the Student class
Student s1;
Student s2;
// Set properties for student1
s1.name = "Ayusha";
s1.rollNumber = 1082;
s1.age = 18;
// Set properties for student2
s2.name = "Riya";
s2.rollNumber = 1083;
s2.age = 19;
// Display information for each student
cout << "S1 Information:" << endl;
s1.displayInfo();
cout << endl; // For better readability
cout << "S2 Information:" << endl;
s2.displayInfo();
return 0;
}