#include <iostream>

using namespace std;

int main()
{
    int test;
    cin>>test;
    while(test>0)
    {
    int n,A[1000],s,S[1000],flag=1,chef[1000],assistant[1000],l=0,m=0;  
    cin>>n>>s;
    for(int i=1;i<=n;i++)
    A[i-1] =i;
    for(int j=0;j<s;j++)
    cin>>S[j];
    for(int j=0;j<s;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(S[j]==A[i])
            A[i] = 0;
        }
    }
    for(int i=0;i<n;i++)
    {
        
        
        if(A[i]==0)
        {}
        else
        {
            if(flag==1) // If flag ==1 then copy the content of array A at ith position to array chef at ith position 
            {
                chef[l] = A[i];
                flag =0;
                l+=1;
            }
            else if(flag==0)  
            {
                flag =1;
                assistant[m] = A[i];
                 m+=1;
            }
        
            
        }
        
    }
    for(int i=0;i<l;i++)
    cout<<chef[i]<<" ";
    cout<<endl;
    for(int i=0;i<m;i++)
    cout<<assistant[i]<<" ";
    test--;
    cout<<endl;
    }
    return 0;
}

Explanation
Copy the content of the given array according to the restrictions provided in the question.

