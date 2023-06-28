#include <iostream>

using namespace std;

int main()
{
    int FristRoll , SecoundRoll ;
    cin >> FristRoll ;
    cin >> SecoundRoll;
    int counter  ;
    int Max ;
    if(FristRoll > SecoundRoll)
        Max = FristRoll;
    else
        Max = SecoundRoll;
    counter = 6-Max+1;
    switch(counter)
    {
    case 1:
        {
            cout << "1/6";
            break;
        }
        case 2:
        {
            cout << "1/3";
            break;
        }
        case 3:
        {
            cout << "1/2";
            break;
        }
        case 4:
        {
            cout << "2/3";
            break;
        }
        case 5:
        {
            cout << "5/6";
            break;
        }
        case 6:
        {
            cout << "1/1";
            break;
        }

    }
    return 0;
}
