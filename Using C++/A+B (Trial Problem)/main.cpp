#include <iostream>

using namespace std;

int main()
{
    int trial ;
    cin >> trial ;
    int num1 , num2 ;
    int Result[trial];
    for(int i = 0 ; i < trial ; i++)
    {
        cin >> num1;
        cin >> num2;
        Result[i] = num1+num2;
    }
    for(int i = 0 ; i < trial ; i++)
    {

        cout << Result[i] << endl;
    }
    return 0;
}
