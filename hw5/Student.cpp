#include <iostream>

#include "Student.h"

using namespace std;

double Student::calculateScore()
{

    double homework_temp = 0;

    int absent = 0;
    int plagiarism = 0;

    for(int i = 0; i < 5; i++)
    {

        if(homework_score[i] == -1)
        {

            homework_score[i] = 0;
            absent++;

        }
        else if(homework_score[i] == -2)
        {
            
            homework_score[i] = 0;
            plagiarism++;

        }

        homework_temp += homework_score[i];
        
    }

    homework_temp = (homework_temp / 5) - (5 * absent);

    if(homework_temp < 0)
    {

        homework_temp = 0;

    }

    if(midterm_score == -1)
    {

        midterm_score = 0;

    }

    if(finalexam_score == -1)
    {

        finalexam_score = 0;

    }

    semester_score = (homework_temp * 0.4 + midterm_score * 0.3 + finalexam_score * 0.3) - (5 * plagiarism);

    if(semester_score < 0)
    {

        return 0;

    }
    else
    {

        return semester_score;

    }

}