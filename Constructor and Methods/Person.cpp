//
// Created by pshad on 07/10/2025.
//



#include <iostream>
#include <string>
#include <list>
#include <ostream>
using namespace std;

class Person {
    public:
    string FirstName;
    string LastName;
    int Age;
    list<string> Skills;

    Person(string firstName, string lastName, int age) {
        FirstName = firstName;
        LastName = lastName;
        Age = age;
    }

    void PrintInfo() {
        cout << "First Name: " << FirstName << endl;
        cout << "Last Name: " << LastName << endl;
        cout << "Age: " << Age << endl;
        cout << "Skills:" << endl;
        for (string skill: Skills) {
            cout << skill << endl;
        }
    }

};

int main() {
    Person person1("Parya","Shadbakhsh", 28);
    Person person2("John", "Doe", 45);

    person1.Skills.push_back("C++ Programming");
    person1.Skills.push_back("Computer Vision");
    person1.PrintInfo();

    person2.Skills.push_back("C# Programming");
    person2.Skills.push_back("Web Development");
    person2.PrintInfo();



}