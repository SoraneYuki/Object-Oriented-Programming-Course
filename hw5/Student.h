using namespace std;
#include <iostream>

#ifndef _STUDENT_
#define _STUDENT_

class Student
{

    public:

        string name; // 姓名
        string student_ID; // 學號

        double homework_score[5]; // 作業成績
        double midterm_score; // 期中考成績
        double finalexam_score; // 期末考成績
        double semester_score; // 學期成績

        double calculateScore(); // 計算Student學期成績

};

#endif