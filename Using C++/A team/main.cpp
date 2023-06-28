#include <iostream>

using namespace std;

int main()
{
    int NumberOfProplem;
    cin >> NumberOfProplem;
    int RightAnswer = 0;
    int Answer[3];
    for(int i = 0 ; i <NumberOfProplem ; i++)
    {
        cin >> Answer[0];
        cin >> Answer[1];
        cin >> Answer[2];
        if(Answer[0] == 1 && Answer[1] == 1)
            RightAnswer++;
        else if(Answer[0] == 1 && Answer[2] == 1)
            RightAnswer++;
        else if(Answer[1] == 1 && Answer[2] == 1)
            RightAnswer++;
    }
    cout << RightAnswer;
}
