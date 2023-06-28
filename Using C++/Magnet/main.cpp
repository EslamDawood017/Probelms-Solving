#include <iostream>

using namespace std;

int main()
{
    int Size ;
    cin >> Size;
    string magnet[Size];
    for(int i = 0 ; i < Size ; i++)
    {
        cin >> magnet[i];
    }
    int counter = 1 ;
    for(int i = 0 ; i < Size ; i++)
    {
        if(i == Size-1)
            break;
        if(magnet[i]!= magnet[i+1])
            counter++;

    }
    cout << counter << endl ;
    return 0;
}
