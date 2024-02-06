#include<iostream>
using namespace std;
void code(string st)
{
    cout<<"OPERATORS : ";
    for (int i=0;i<st.size ();i++)
    {
        if (st[i]=='+' || st [i]=='-'|| st [i]=='*'|| st [i]=='/'|| st [i]=='%'|| st [i]=='=')
        {
            cout<< st[i];
        }
        //else if ()
    }


}
    int main ()
    {
        string st;
        cout<<"TYPE INPUTS :" ;
        cin>>st;
        code(st);
    }






