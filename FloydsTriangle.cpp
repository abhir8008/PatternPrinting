#include <iostream>
using namespace std;

int main()
{
    int m;
    int a=1;
    cout<< "enter the number of row: ";
    cin>> m;

    for(int i=1; i<=m; i++)
    {
        for(int j=1;j<=i; j++)
        {
            cout <<a++<<" ";// cout<< a <<" ";
                             // a = a + 1;
        }
        cout<< endl;
    }
        
}