using namespace std;
#include <iostream>

#ifndef _STUDENT_
#define _STUDENT_

class Student
{

    public:

        string name;
        string student_ID;

        double homework_score[5];
        double midterm_score;
        double finalexam_score;
        double semester_score;

        double calculateScore();

};

#endif