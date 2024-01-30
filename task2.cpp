#include<iostream>
using namespace std;
int main ()
{
    int input,arr[10],min,max;
      cout<<"Enter array number size :"<<endl;
      cin>>input;

      cout<<"Array values : "<<endl;

    for(int i=0;i<input;i++)
    {
        cin>>arr[i];
    }
    for (int i=0;i<input;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
     cout<<"Minimum Number is: "<<min<<endl;
     cout<<"Maximum Number is : "<<max<<endl;



return 0;

}
