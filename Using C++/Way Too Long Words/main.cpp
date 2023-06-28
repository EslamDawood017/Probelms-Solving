#include <iostream>

using namespace std;

int main()
{
    int num ;
    cin >> num ;
    string Words[num];
    string NewWord[num];


    for(int i = 0 ; i < num ; i++)
    {
        cin >> Words[i];
    }


    for(int i = 0 ; i < num ; i++)
    {
        if(Words[i].length() > 10)
        {
            NewWord[i] = Words[i][0]+ to_string(Words[i].size()-2) + Words[i][Words[i].size()-1] ;
        }
        else
        {
            NewWord[i] = Words[i];
        }
    }

    for(int i = 0 ; i < num ; i++)
    {
        cout <<  NewWord[i] << endl ;
    }

    return 0;
}
