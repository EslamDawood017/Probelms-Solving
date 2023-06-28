#include <iostream>

using namespace std;

int main()
{
    string color1 , color2;
    cin >> color1 ;
    cin >> color2;
    int Pos = 1 ;
    int j = 0 ;
    for(int i = 0 ; i < color2.length() ; i++)
    {
        if(color1[j] == color2[i])
        {
            Pos++;
            j++ ;

        }
    }
    cout << Pos ;
    return 0;
}
