#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cout<<"  ";
    for(int j=1; j<=(n+1)/4;j++)
    {
        cout<<"*   ";
    }
    cout<<endl<<" ";
    for(int j=1; j<=n/2;j++)
    {
        cout<<"* ";
    }
    cout<<endl;
    for(int j=1; j<=(n+3)/4;j++)
    {
        cout<<"*   ";
    }

    return 0;
}