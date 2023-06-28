#include <iostream>

using namespace std;

int main()
{
    string Operation ;
    cin >> Operation;
    string NewOperation = "";
    int Num1 = 0 ,Num2 = 0 , Num3  = 0;
    for(int i = 0 ;  i < Operation.size();i++)
    {
        if(Operation[i] == '1')
            Num1++;
        else if(Operation[i] == '2')
            Num2++;
        else if(Operation[i] == '3')
        Num3++;

    }
    for(int i = 0 ; i < Num1; i++)
    {
        NewOperation += "1+";
    }
    for(int i = 0 ; i < Num2; i++)
    {
        NewOperation += "2+";
    }
    for(int i = 0 ; i < Num3; i++)
    {
        NewOperation += "3+";
    }
    NewOperation.pop_back();

    cout << NewOperation ;
    return 0;
}
