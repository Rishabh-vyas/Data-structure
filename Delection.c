#include<stdio.h>


void display(int arr[], int size)
{
		int x=0;
		for(x;x<size;x++)
		{
			printf("%d ",arr[x]);
		}
		printf("\n");
}

int delection(int arr[],int size,int index,int capacity)
{	
	if(index>=capacity){
		return -1;
	}else{
		int x=index;
		for(x;x<size-1;x++){
			arr[x]=arr[x+1];
		}
		
		return 1;
	}
}

int main()
{
	int arr[100]={1,2,44,5,6,7,8,9};
	int size=8;
	int index=2;
	int capacity=100;
	
	display(arr,size);
	
	int checkVal=delection(arr,size,index,capacity);
	if(checkVal==-1)
	{
		printf("Sorry can't added value");
		
	}else{
		
		display(arr,size);
		size--;	
	}
	
	return 1;
}
