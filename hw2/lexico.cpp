#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    int n;

    cout << "How many strings do you want to input? ";
    cin >> n;
    cin.get();

    char **str = new char * [n];

    for(int i = 0; i < n; i++)
    {

        cout << "Input " << i + 1 << ": ";

        str[i] = new char[21];
        cin.getline(str[i], 21);

        for(int j = 0; j < strlen(str[i]); j++)
        {

            if((str[i][j] >= 'A') && (str[i][j] <= 'Z'))
            {

                str[i][j] += 32;

            }

        }

    }

    cout << endl << "Lexicographical Ordering..." << endl << endl;

    char temp[21] = "";

    for(int i = 0; i < n - 1; i++)
    {

        for(int j = 0; j < (n - i - 1); j++)
        {

            if(strcmp(str[j], str[j + 1]) > 0)
            {

                strncpy(temp, str[j], 21);
                strncpy(str[j], str[j + 1], 21);
                strncpy(str[j + 1], temp, 21);

            }

        }

    }

    for(int i = 0; i < n; i++)
    {

        cout << str[i] << endl;

    }

}