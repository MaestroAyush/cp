#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void substring(string str,string a)
{
  if(str.length()==0)
  {
      cout<<a;
      return;
  }
  char ch=str[0];
  int b=ch;
  str=str.substr(1);
  substring(str,a);
  substring(str,a+ch);
  substring(str,a+ to_string(b));
}


   
     
int main()
{
    string str;
    cin>>str;
    substring(str," ");
    return 0;

}