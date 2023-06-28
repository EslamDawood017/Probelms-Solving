#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int , int > Colors ;
    int value ;
    for(int i = 0 ; i < 4 ; i++)
    {
        cin >> value ;
        Colors[value] = value;
    }
    cout << 4 - Colors.size();
    return 0;
}
