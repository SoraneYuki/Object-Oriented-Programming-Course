#include "maxScore.h"

int &max(int *score, int n) {

    int &maxnum = score[0];

    for(int i = 0; i < n; i++)
    {

        if(score[i] > maxnum)
            
            maxnum = score[i];

    }

    return maxnum;

}