#include <iostream>

using namespace std;

//main.h

class Student
{

    int studentID;
    int grades[10];

  public:
    void setStudentID(int studentNumber)
    {
        studentID = studentNumber;
    }

    int getStudentID()
    {
        return studentID;
    }

    int *getGrades()
    {
        return grades;
    }

    void setGrade(int course_id, int grade)
    {
        grades[course_id] = grade;
    }
    
    void printGrades()
    {
        std::cout << "StudentID = " << studentID << "\n";
        for (int i; i < 10; i++)
        {
            cout << grades[i] << "\t";
        }
    }
    int getMin()
    {
        int minimum = grades[0];
        for (int i = 1; i < 10; i++)
        {
            if (grades[i] < minimum)
            {
                minimum = grades[i];
            }
        }
        return minimum;
    }
    int getMax()
    {
        int maximum = grades[0];
        for (int i = 1; i < 10; i++)
        {
            if (grades[i] > maximum)
            {
                maximum = grades[i];
            }
        }
        return maximum;
    }
    float getAverageGrade()
    {
        int sum = 0;
        float avg = 0.0;
        for (int i = 1; i < 10; i++)
        {
            sum = sum + grades[i];
        }
        avg = sum / 10;
        return avg;
    }
};

//********************
class CourseEnrollment
{
  public:
    Student students[6];
    int courseMinGrade;
    int courseMaxGrade;
    float courseAvgGrade;
    int grades[60];

    void addStudents(Student *studentsIn)
    {
        for (int i = 0; i < 6; i++)
        {
            students[i] = studentsIn[i];
        }
    }
    int *getAllGrades()
    {
        //int grades[60];
        int k = 0;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                grades[k] = students[i].getGrade(j);
                k = k + 1;
            }
        }
        return grades;
    };
