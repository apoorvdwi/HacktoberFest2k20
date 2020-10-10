#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    cout<<"enter elements in array";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<-1<<" ";
    for( int i=1;i<n;i++)
    {  int s=1;
       for(int j=i-1;j>=0;j--)
       {
         if(arr[i]>arr[j])
         {
             s=-1;
             cout<<arr[j]<<" ";
             break;
         }
       }
       if(s==1)
       {
           cout<<-1<<" ";
       }
    }
    
}
