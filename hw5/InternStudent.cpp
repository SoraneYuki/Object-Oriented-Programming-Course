#include <iostream>

#include "InternStudent.h"

using namespace std;

double InternStudent :: calculateScore()
{

    double semester_score_temp = 0; // 學期成績暫存

    semester_score_temp += internship_score * 0.4;

    if(midterm_score != -1)
    {

        semester_score_temp += midterm_score * 0.3;

    }

    if(finalexam_score != -1)
    {

        semester_score_temp += finalexam_score * 0.3;

    }

    if(semester_score_temp < 0)
    {

        return 0;

    }
    else
    {

        return semester_score_temp;

    }

}