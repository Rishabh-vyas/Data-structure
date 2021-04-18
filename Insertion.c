#include<stdio.h>


void display(int arr[],int size)
{
//	display data 
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);	
	}
	
	printf("\n");
}

int insertElement(int arr[],int size,int index,int capacity,int value)
{
	if(size>=capacity){
		return -1;
	}else{
		int x;
		
		for(x=index;x>size-1;x){
			arr[x+1]=arr[x];
		}					
		arr[index]=value;
	}
}

int main()
{
	int arr[50]={2,3,4,5,6,7,8};
	int size=7;
	int index=3;
	int capacity=50;
	
	int value=100;
	
	display(arr,size);
	
	insertElement(arr,size,index,capacity,value);
	
	int chechValue=insertElement(arr,size,index,capacity,value);
	if(chechValue==-1){
	
		printf("Failed to add value");
	}
	else{
	
		
		display(arr,size);
		printf("Value added !");		
	}
	
	
	return 1;	
	
}
