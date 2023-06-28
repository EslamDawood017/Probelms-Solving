#include <iostream>
#include <string>

using namespace std;

int main()
{
    string Name1;
    cin >> Name1;
    string Name2;
    cin >> Name2;
    int Counter1 = 0 ,Counter2 = 0;

    for(int i = 0 ; i < Name1.length() ; i++)
    {
        Counter1 = int(tolower(Name1[i]));
        Counter2 = int(tolower(Name2[i]));
        if(Counter1 < Counter2 )
        {
            cout << -1 ;
            break;
        }
        else if(Counter1 > Counter2)
        {
            cout << 1 ;
            break;
        }

    }
    if(Counter1 == Counter2)
        cout << 0 ;

    return 0;
}
