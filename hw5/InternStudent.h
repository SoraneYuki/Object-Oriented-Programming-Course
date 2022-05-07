#include <iostream>

#include "Student.h"

using namespace std;

#ifndef _INTERNSTUDENT_
#define _INTERNSTUDENT_

    class InternStudent : public Student
    {

        public:

            double internship_score; // 實習成績

            double calculateScore(); // 覆寫calculateScore 計算InternStudent學期成績

    };

#endif