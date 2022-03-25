#include <iostream>
#include <cstring>

using namespace std;

struct Name
{

    char firstneme[20];
    char lastname[11];

};

enum Type {Gold, Silver};

union Benefit
{

    double discount;
    int freeminutes;

};


struct Member
{
    
    Name name;
    char phone[10];
    Type type;
    Benefit benefit;

};

int main()
{

    Member **members = new Member * [5];

    bool quit = false;

    char tempN[31], tempP[11], tempT;

    double tempD = 0.0;
    int tempM = 0;

    while(!quit)
    {

        cout << "Name:";
        cin.getline(tempN, 30);

        cout << "Phone:";
        cin.getline(tempP, 11);
        
        cout << "Type(g/s):";
        scanf(" %c", tempT);

        if(tempT == 'g')
        {

            cout << "Discount:";
            cin >> tempD;

        }
        else
        {

            cout << "Free Minutes:";
            cin >> tempM;

        }

        *members = new Member;

        strcpy(members[0] -> name, tempN);
        strcpy(members[0] -> phone, tempP);

        if(tempT == 'g')
        {

            members[0] -> type = Gold;
            members[0] -> benefit.discount = tempD;

        }
        else
        {

            members[0] -> type = Silver;
            members[0] -> benefit.freeminutes = tempM;

        }

        members[0] -> type;

        quit = true;

    }

    cout << members[0] -> name << endl;
    
}