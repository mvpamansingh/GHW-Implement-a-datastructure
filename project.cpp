// In this project I use two datastructures from c++ , "Vector" and "Structure" to design project for storing student data and returning  the Student data in sorted order a/c to avgmarks.
//                          Brief review
//structure stores the name, student ID, grades,and average grade of a student. The compareStudents function is used to sort the vector of students based on their average grades,
//in descending order. The program calculates the average grade of each student by summing up their grades and dividing by the number of grades.
// The sorted student information is then printed to the console.


#include<bits/stdc++.h>
using namespace std;

struct Students   // structure datastructure
{
    string name;
    string studentId;
    vector<double> grade;
    double avgGrades;
};


bool cmpareStudent(Students &s1, Students &s2)
{
    return s1.avgGrades> s2.avgGrades;
}


int main()
{
    vector<Students> students;     // using Vector datastructure
    Students s1;
    s1.name=" Aman Singh";
    s1.studentId ="9";
    s1.grade= {100,99.9,99,100,100};
    float sum1= accumulate(s1.grade.begin(),s1.grade.end(),0);
    s1.avgGrades= (sum1)/4;


    Students s2;
    s2.name= " Priyanshu Singh";
    s2.studentId= "6";
    s2.grade= {100,100,100,100};
    float sum2= accumulate(s2.grade.begin(),s2.grade.end(),0);
    
    
    
    s2.avgGrades= (sum2)/4;
    
    students.push_back(s1);
    students.push_back(s2);
    
    // Sort the vector of students based on average grade
    sort(students.begin(),students.end(),cmpareStudent);
    
    
    // Printing the Students Information from student vector array
    for(int i= 0; i<students.size();i++)
    {
        cout<<students[i].name<<"\t"<<students[i].studentId<<"\t"<< students[i].avgGrades<<"\n";
    }
}






















