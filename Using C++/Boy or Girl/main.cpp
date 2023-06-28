#include <iostream>
#include <string>

using namespace std;
string RemoveUnNeededChar(string Name)
{
    string NewName = "" ;
    for(int i = 0 ; i < Name.size() ; i++)
    {
        if(NewName.find(Name[i]) == string::npos)
        {
            NewName += Name[i];

        }
    }
    return NewName;
}
int GetCounter(string NewName)
{
    return NewName.size();

}
bool isGirl(int Counter)
{
    if(Counter %2 == 0 )
        return true;
    else
        return false;
}
int main()
{
    string Name;
    cin >> Name;
    string NewName = RemoveUnNeededChar( Name) ;
    if(isGirl( GetCounter( NewName)))
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
    return 0;
}
