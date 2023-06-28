#include <iostream>

using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int counter = 0 ;
        for(int i  = 0 ; i <haystack.length() ; i++  )
        {
            int k = i ;

            for(int j = 0 ; j < needle.length() ; j++)
            {
                if(needle[j] == haystack[k] )
                {
                    k++;
                    counter++;
                }
                else
                {
                    counter = 0 ;
                    break;
                }
                if(counter == 3)
                {
                    return i ;
                }
            }
        }
        return 0 ;


    }
};
int main()
{
    Solution s1 ;
    cout << s1.strStr("sadbutsad" , "sad") << endl ;
    cout << "Hello world!" << endl;
    return 0;
}
