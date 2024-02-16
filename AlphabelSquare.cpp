#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cout<< "enter number of rows: ";
    cin>> n;
    cout<< "enter number of columns: ";
    cin>> m;

    for (int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            {
                cout<< char(j+64) <<" ";
                // cout<< (char)(j+97) <<" ";
            }
      cout<<endl;
        for(int j=1;j<=m;j++)
            {
                //cout<< char(j+64) <<" ";
                 cout<< (char)(j+96) <<" ";//(char) is called type cast
            }
            cout<<endl;
      
    }      
}