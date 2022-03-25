#include <iostream>
#include <cstring>
#include <string>

#include "initial.h"

char *initial(Name *n)
{

    char tempFN[LenFN + 1];
    char tempLN[LenLN + 1];
    char tempFN1[LenFN / 2];
    char tempFN2[LenFN / 2];
    char tempFN1f[2] = {0};
    char tempFN2f[2] = {0};
    char outname[LenFN + LenLN + 1] = {0};
    char *returnname = new char[LenFN + LenLN + 1];

    int count = 0;

    strcpy(tempFN, n->firstname);
    strcpy(tempLN, n->lastname);

    if(strstr(tempFN, "-") != NULL)
    {

        for(int i = 0; i < (strchr(tempFN, '-') - tempFN); i++)
        {

            tempFN1[count] = tempFN[i];
            count++;

        }

        tempFN1[count] = '\0';

        count = 0;

        for(int i = (strchr(tempFN, '-') - tempFN + 1); i < strlen(tempFN); i++)
        {

            tempFN2[count] = tempFN[i];
            count++;

        }

        tempFN2[count] = '\0';

        tempFN1f[0] = tempFN1[0];
        tempFN1f[1] = '\0';
        tempFN2f[0] = tempFN2[0];
        tempFN2f[1] = '\0';

        strcat(outname, tempLN);
        strcat(outname, ", ");
        strcat(outname, tempFN1f);
        strcat(outname, ".-");
        strcat(outname, tempFN2f);
        strcat(outname, ".");

    }
    else
    {

        char tempFNf[2] = {0};

        tempFNf[0] = tempFN[0];
        tempFNf[1] = '\0';

        strcat(outname, tempLN);
        strcat(outname, ", ");
        strcat(outname, tempFNf);
        strcat(outname, ".");

    }

    for(int i = 0; i < strlen(outname) + 1; i++)
    {

        returnname[i] = outname[i];

    }

    return returnname;

}