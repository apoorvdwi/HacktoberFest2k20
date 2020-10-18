#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int k,test,j,n,match;
    
    cin>>test;
    while(test>0)
    {
        cin>>n;
        long int S[n];
        for(j=0;j<n;j++)
        cin>>S[j];
        cin>>k;
    
    match = S[k-1];    
    sort(S , S+n);   //sort the given array in ascending order
    for(j=0;j<n;j++)
    if(match == S[j]) //If match is found then break the loop
    break;
    cout<<j+1<<endl;
    test--;
}
    return 0;
}

Explanation
Traverse the sorted array if the match is found then break the loop