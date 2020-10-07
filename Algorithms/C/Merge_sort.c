#include<stdio.h>
 
void mergesort(int a[],int i,int j);
void merge(int a[],int i1,int j1,int i2,int j2);
 
int main()
{
	int arr[30],n,i;
	printf("Enter the no of elements:");
	scanf("%d",&n);
	printf("Enter array elements:");
	
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		
	mergesort(arr,0,n-1);
	
	printf("\nSorted array is :");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
		
	return 0;
}
 
void mergesort(int arr[],int i,int j)
{
	int mid;
		
	if(i<j)
	{
		mid=(i+j)/2;
		mergesort(arr,i,mid);		//left recursion
		mergesort(arr,mid+1,j);	//right recursion
		merge(arr,i,mid,mid+1,j);	//merging of two sorted sub-arrays
	}
}
 
void merge(int arr[],int i1,int j1,int i2,int j2)
{
	int temp[50];	//array used for merging
	int i,j,k;
	i=i1;	//beginning of the first list
	j=i2;	//beginning of the second list
	k=0;
	
	while(i<=j1 && j<=j2)	//while elements in both lists
	{
		if(arr[i]<arr[j])
			temp[k++]=arr[i++];
		else
			temp[k++]=arr[j++];
	}
	
	while(i<=j1)	//copy remaining elements of the first list
		temp[k++]=arr[i++];
		
	while(j<=j2)	//copy remaining elements of the second list
		temp[k++]=arr[j++];
		
	//Transfer elements from temp[] back to arr[]
	for(i=i1,j=0;i<=j2;i++,j++)
		arr[i]=temp[j];
}
