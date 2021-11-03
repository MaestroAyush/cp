#include<iostream>
#include<climits>
#include<string>
using namespace std;
int paths(int n ,int i,int j )
{
  if(i==n-1 && j==n-1)
  return 1;
  if(i>=n || j>=n)
  return 0;
  return paths(n,i+1,j) + paths(n,i,j+1);
}
 
 int main()
 {
    int n;int i;int j;
    cin>>n>>i>>j;
    cout<< paths(n,i,j);
    return 0;
 }