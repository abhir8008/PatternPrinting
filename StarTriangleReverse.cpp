#include<iostream>
using namespace std;

int main()
{
    int n ;
    cout<< "enter the number: ";
    cin >>n;

    for(int i=1; i<=n;i++)
    {
        for(int j=1; j<=n-i+1;j++)
        {
            //cout<<"#";
             cout<<" ";  
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"x";
        }
        cout<< endl;
    }
}