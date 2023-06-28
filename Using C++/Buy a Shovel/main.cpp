#include <iostream>

using namespace std;

int main()
{
    int ShovelPrice ;
    cin >> ShovelPrice;
    int Remain ;
    cin >> Remain;
    bool flage = true;
    int i = 1 ;
    float r ;
    while(flage == true)
    {
        r = ShovelPrice*i % 10 ;
        if( r == Remain || r == 0)
        {
            break;
        }
        i++;
    }
    cout << i ;
    return 0;
}
