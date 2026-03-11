#include<stdio.h>
int main(){
	int arr[100],i,n,key;
	int low,high,mid;
	int found=0;
	
	printf("Enter no. of elements:");
	scanf("%d",&n);
	
	printf("Enter sorted array elements:\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("Enter element to search:");
	scanf("%d",&key);
	
	low=0;
	high=n-1;
	
	while(low<=high){
		mid=(low+high)/2;
		
		if(arr[mid] == key)
		{
			printf("Element found on position %d",mid+1);
			found=1;
			break;
		}
		else if(key < arr[mid])
		{
			high=mid-1;
		}
		else
		{
			low=mid+1;
		}
	}
	
	if(found == 0)
	{
		printf("element not found");
	}
return 0;	
}
