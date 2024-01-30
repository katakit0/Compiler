#include<iostream>
using namespace std;
int main ()
{
    double y,x=1;
    cout<<"Type Number : "<<endl;
    cin>>y;

    for(int i=1;i<=y;i++)
    {
        x*=i;
    }
    cout<<"factorial Value : "<<x;
    return 0;


}



