#include <iostream>
#include <cstring>

#include "name.h"

using namespace std;

Name *setName(const char *name)
{

    Name *somebody = new Name;
    char tempFN[LenFN + 1];
    char tempLN[LenLN + 1];
    char tempname[LenFN + LenLN + 1];

    int count = 0;

    strcpy(tempname, name);

    if(strstr(tempname, ", ") != NULL)
    {

        for(int i = (strchr(tempname, ' ') - tempname + 1); i < strlen(tempname); i++)
        {

            tempFN[count] = tempname[i];
            count++;

        }

        tempFN[count] = '\0';

        count = 0;

        for(int i = 0; i < (strchr(tempname, ',') - tempname); i++)
        {

            tempLN[count] = tempname[i];
            count++;

        }

        tempLN[count] = '\0';

    }
    else
    {

        for(int i = 0; i < (strchr(tempname, ' ') - tempname); i++)
        {

            tempFN[count] = tempname[i];
            count++;

        }

        tempFN[count] = '\0';

        count = 0;

        for(int i = (strchr(tempname, ' ') - tempname + 1); i < strlen(tempname); i++)
        {

            tempLN[count] = tempname[i];
            count++;

        }

        tempLN[count] = '\0';

    }

    strcpy(somebody->firstname, tempFN);
    strcpy(somebody->lastname, tempLN);

    return somebody;

}