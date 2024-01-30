#include<iostream>
using namespace std;
int main()
{
    char a[50],b[50];
    int x,y;

    cout<<"Type first char size :"<<endl;
    cin>>x;
    cout<<"Type first name : "<<endl;

    for (int i=0;i<x;i++)
    {
        cin>> a[i];
    }

    cout<<"Type last char size :"<<endl;
    cin>>y;
    cout<<"Type last name : "<<endl;

      for(int i=0;i<y;i++)
    {
        cin>> b[i];
    }
    cout<<"Full name : "<<endl;
    for (int i=0;i<x;i++)
    {
        cout<<a[i];

    }
    for(int i=0;i<y;i++)
    {
        cout<<b[i];
    }

return 0;
}

