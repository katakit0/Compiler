#include<iostream>
using namespace std;

bool SingleLine(string st)
{
    if(st[0]=='/'&& st[1]=='/')
        return true;
    return false;
     }

bool MultiLine(string  st)
{
    if(st[0]=='/'&& st[1]=='*'&&st[st.length()-2]=='*'&&st[st.length()-1]=='/')
    {
        return true;

    }
    return false;
}

int main()
{
    cout<< "Type Comments : "<<endl;
    string st;
    cin>>st ;
    if (SingleLine(st))
        cout<<"Single Line Comment Found  ";
    else if(MultiLine(st))
    cout<<"Multi Line Comment Found ";
    //else
    //cout<<"NO comments found!!";



}
