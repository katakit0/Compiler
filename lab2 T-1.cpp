#include<iostream>
using namespace std;

int main ()
{
    string st;
    cout<<"Type Inputs : "<<endl;
    cin>>st;
    //print (st);

bool flag=true;
for(int i=0;i<st.length();i++)
{
    if(i==0 && st[i]=='-')continue;
    else if (st[i]=='.')continue;
    else if (st[i]>=48 &&st[i]<=57)
    {continue;}
    else {
            flag=false;
            break;
            }
}
if (flag)
{
 cout<<"NUMERIC CONSTANT "<<endl;
}
else {
    cout<<" NON NUMERIC"<<endl;
}
return 0;
}









