#include<iostream>
using namespace std;

int main()
{
    cout << "enter number; ";
    int n;
    cin >> n;

    for ( int i =1; i<=n;i++)
    {
        for( int j=1;j<=n;j++)
        {
            if(i==j || i+j==(n+1))
            {
                cout<<"x";
            }
            else{
                cout<<" ";
            }
        }
        cout<< endl;
    }
}