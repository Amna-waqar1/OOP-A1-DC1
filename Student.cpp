#include"Student.h"

//function definition using scope resolution 
void Student::setDetails(string n,int a,int r,float g) {
    name = n;
    age = a;
    rollNo = r;
    gpa = g;
}

//function taking input from user for s1
void Student:: getDetails() {
    cout << "Name : ";
        cin>>name;
        cout << "Age : ";
        cin >> age;
        cout << "Roll No : ";
        cin >> rollNo;
        cout << "Gpa : ";
        cin >> gpa;

}

//display function 
void Student::showDetails() {
   
    cout << "Name : " << name;
    cout << "| Age : " << age;
    cout << "| Roll No : " << rollNo;
    cout << "| Gpa : " << gpa;
    cout << "| Grade : " << calculateGrade(gpa) << endl;
}  
 
//Grades calculation 
char Student:: calculateGrade(float gpa) {
    if (gpa >= 3.5) return'A';
    else if (gpa >= 3.0) return'B';
    else if (gpa >= 2.0) return 'C';
    else return 'F';
   
}