#include <iostream>

using namespace std;

int main()
{
    int NumberOfOrange ;
    int MaxSize ;
    int MaxOragetoEmpty ;
    cin >> NumberOfOrange >> MaxSize >> MaxOragetoEmpty ;
    int orangesize ;
    int Counter  = 0  ;
    for(int i = 1 ; i <= NumberOfOrange ; i++)
    {

        cin >> orangesize ;
        if(i == MaxOragetoEmpty)
            Counter++;
        else if(orangesize >= MaxSize && i != 0)
            Counter++ ;


    }
    cout << Counter ;
    return 0;
}
