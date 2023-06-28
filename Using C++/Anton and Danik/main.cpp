#include <iostream>

using namespace std;

int main()
{
    int GameNamber;
    cin >> GameNamber;
    char result[GameNamber];
    int counterA;
    int counterD;
    for(int i = 0 ; i < GameNamber ; i++)
    {
        cin >> result[i];
        if(result[i] == 'A')
            counterA++;
        else
            counterD++;
    }
    if(counterA>counterD)
        cout << "Anton";
    else if(counterA<counterD)
        cout << "Danik";
    else
        cout << "Friendship";
    return 0;
}
