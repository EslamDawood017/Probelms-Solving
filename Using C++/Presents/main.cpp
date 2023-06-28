#include <iostream>

using namespace std;

int main()
{
    int  num ;
    cin >> num ;
    int Present[num];
    int Friend[num];
    int outPut[num];
    for(int i = 0 ; i < num ; i++)
    {
        Friend[i] = i+1;
        cin >> Present[i];
    }
    for(int i = 0 ; i < num ; i++)
    {
        for(int j = 0 ; j < num ; j++)
        {
            if(Friend[i] == Present[j])
            {
                outPut[i] = j+1;
                break;
            }
        }
    }
    for(int i = 0 ; i < num ; i++)
    {
        cout << outPut[i] << endl  ;
    }
    return 0;
}
