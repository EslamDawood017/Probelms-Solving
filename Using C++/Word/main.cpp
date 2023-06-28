#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Text ;
    cin >> Text;
    int LowerCounter = 0 ;
    int UpperCounter = 0 ;
    for(int i = 0 ; i < Text.size() ; i++)
    {
        if(Text[i] == tolower(Text[i]))
            LowerCounter++;
        else if(Text[i] == toupper(Text[i]))
            UpperCounter++;
    }
    string Result = "" ;
    if(LowerCounter > UpperCounter)
    {
        for(int i = 0 ; i < Text.size() ; i++)
        {
            Result += tolower(Text[i]);
        }

        cout << Result;
    }
    else if(LowerCounter < UpperCounter)
    {
        for(int i = 0 ; i < Text.size() ; i++)
        {
            Result += toupper(Text[i]);
        }

        cout << Result;
    }
    else
   {
        for(int i = 0 ; i < Text.size() ; i++)
        {
            Result += tolower(Text[i]);
        }

        cout << Result;
    }
    return 0;
}
