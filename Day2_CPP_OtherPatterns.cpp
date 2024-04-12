#include <iostream>
using namespace std;
int main()
{
  int n;
  cout <<"Diamond Pattern"<<endl;  
  cin >> n;
int i=1;
 bool reverse=false;
 while(i>0)
 {
     for(int j=1;j<=n-i;j++)
     {
         cout<<" ";
         
     }
     for(int j=1;j<=(2*i-1);j++)
     {
         cout<<"*";
         
     }
     cout<< endl;
     (reverse)?i--:i++;
     if(i>n)
     {
         reverse=true;
         i--;
     }
 }
cout <<"Number Pyramid Pattern"<<endl;
 int row;
    cin>> row;
    for(int i =1;i<=row;i++)
    {
        for(int j =1;j<=(row-i);j++)
        {
            cout<<" ";
        }
        for(int j =1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }

    return 0;
}