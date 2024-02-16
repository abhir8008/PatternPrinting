#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<< " enter number of rows: ";
    cin>> m;
    // cout<< " enter number of columns: ";
    // cin>> n;

    for( int i =1; i<=m; i++) // for upsidw down triangle for( int i =m; i>=0; i--)
    {
        for(int j=1; j<=i; j++)
        {
            cout<< "*";
        }
        cout<<endl;
    }
}