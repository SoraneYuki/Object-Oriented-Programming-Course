#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str;
    bool con = false;

    cout << "Please input a string: ";
    getline(cin, str);

    cout << "Capitalizing..." << endl;

    if(('a' <= str[0]) && (str[0] <= 'z'))
    {

        str[0] -= 32;

    }

    for(int i = 1; i < str.size(); i++)
    {

        if(str[i] == 32)
        {

            if(('a' <= str[i + 1]) && (str[i + 1] <= 'z'))
            {

                str[i + 1] -= 32;

            }

        }
        
    }

    cout << str << endl;

}