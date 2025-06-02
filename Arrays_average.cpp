//Write a program that reads grades of students in a class, prints the average and the grades that are above the average. 

//Example: Please enter the number of students in the class

#include <iostream>
using namespace std;

const int MAX_CLASS_SIZE = 60;


int main() {

    int numOfStudents;
    int gradesList[MAX_CLASS_SIZE];
    int currGrade;
    int ind = 0;
    int sum = 0;
    double average;
   
    cout << "Please enter the number of students in the class (Less or equal to " << MAX_CLASS_SIZE << "): " << endl;
    cin >> numOfStudents;

    //reading the grades
    cout << "Enter the students' grades (separated by a space): " << endl;
    for(ind = 0; ind < numOfStudents; ind++) {
        cin >> currGrade;
        gradesList[ind] = currGrade;
    }

    //calculating the average
    for (ind = 0; ind < numOfStudents; ind++) {
        sum += gradesList[ind];

        average = (double)sum / (double)numOfStudents;
        
    }
    cout << "The class average is " << average << endl; 

    //print grades above the average
    cout << "The grades above the average are ";

    for(ind = 0; ind < numOfStudents; ind++) {
        if(gradesList[ind] > average) {
            cout << gradesList[ind] << " ";
        }

    }
    cout << endl;
    return 0;

}