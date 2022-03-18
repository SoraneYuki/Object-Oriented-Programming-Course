#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char str[256], comstr[256] = "", comcomstr[256] = "";

    int j = 0, ans;

    cout << "Please input a string (up to 255 characters): ";

    cin.getline(str, 256);

    for(int i = 0; i < strlen(str); i++)
    {

        if(str[i] != 32)
        {

            if((str[i] >= 'A') && (str[i] <= 'Z'))
            {

                comstr[j] = str[i] + 32;
                j++;

            }
            else
            {

                comstr[j] = str[i];
                j++;

            }

        }

    }

    j = 0;

    for(int i = strlen(comstr) - 1; i >= 0; i--)
    {

        comcomstr[j] = comstr[i];
        j++;

    }

    ans = strcmp(comcomstr, comstr);

    if(ans == 0)
    {

        cout << "Yes, this is a palindrome." << endl;

    }
    else
    {

        cout << "No, this is not a palindrome." << endl;

    }

}