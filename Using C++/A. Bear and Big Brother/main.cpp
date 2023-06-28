#include <iostream>

using namespace std;

int main()
{
    int LimkWeight;
    int BobWeight;
    cin >> LimkWeight;
    cin >> BobWeight;
    int year = 0 ;
    bool IsEnd = false;
    while(IsEnd == false)
    {
        year++;
        LimkWeight = LimkWeight * year * 3;
        BobWeight = BobWeight * year * 2;
        if(LimkWeight>BobWeight)
        {
            IsEnd = true;
        }

    }
    cout << year
    return 0;
}
