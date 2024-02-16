#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<< " enter number of rows: ";
    cin>> m;
    // cout<< " enter number of columns: ";
    // cin>> n;

    for(int i =1; i<=m; i++)
    {
        if(i%2!=0)
        {
             for(int j =1; j<=i; j++)
            {
                cout<< j<<" ";
            
            }
                cout<<endl;
        }
        else
        {
            for( int k=1; k<=i; k++)
            {
                cout << (char)(k+64)<<" ";
            
            }
                cout<< endl;
        }
        
        
    }
}