#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()

{
    string str ="vbghtydfetr";

    // convert to uppercase

    for(int i =0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
                str[i] = str[i]-32;
        }
    }
    cout<<str<<endl;

    string str1 ="ABHDYBFBTHT";
    for(int i =0;i<str1.size();i++)
    {
        if(str1[i]>='A' && str1[i]<='Z')
        {
                str1[i] = str1[i]+32;
        }
    }
    cout<<str1<<endl;

    // OR

    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    cout<<str1<<endl;
}