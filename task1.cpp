#include<iostream>
using namespace std;
int main()
{
    float input, arr[10],sum=0;
    cout<<"Enter array number size :"<<endl;
    cin>>input;

     cout<<"Array values : "<<endl;

    for(int i=0;i<input;i++)
    {

        cin>>arr[i];
        sum= sum+arr[i];
    }
      float avg;
      avg= sum/input;
      cout<<"The Average Value is : "<<avg;

   return 0;
}







