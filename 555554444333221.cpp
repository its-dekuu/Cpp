#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int no=n;
    for(int row=0;row<n;row++)
    {
        for(int col=0;col<n-row;col++)
        {
            cout<<no<<" ";
            
        }
        no=no-1;
        cout<<endl;
    }
}