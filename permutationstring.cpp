#include <iostream>
#include<climits>
#include<string>
using namespace std;
 void permutation(string str,string a)
    {
       if(str.length()==0)
       {
          cout<<a<<endl;
          return ;
       }
       for(int i=0;i<str.length();i++)
       {
          char ch=str[i];
          string s2=str.substr(0,i)+str.substr(i+1);
          permutation(s2,a+ch);
       }
    }
 int main()
 {
    string str;
    cin>>str;
    permutation(str," ");
    return 0;
 }