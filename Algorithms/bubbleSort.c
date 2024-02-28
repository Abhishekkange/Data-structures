// Online C compiler to run C program online
#include <stdio.h>

#include <stdlib.h>

// Design and implement a program to sort a given array of elements using the Bubble Sort algorithm.

void bubbleSort(int myArr[],int size)
{
    
    
    int n=0;
    while(n<size-1)
    {
        for(int i=0;i<(size-n-1);i++)
        {
            if(myArr[i+1]<myArr[i])
            {
                //swapping
                int temp = myArr[i];
                myArr[i]=myArr[i+1];
                myArr[i+1]=temp;
                
            }
        }
        n++;
    }
    
    
    
    
}



int main() {
    
    int size;
    
    printf("Enter the size of Array \n");
    scanf("%d",&size);
    
    //initialzing an Array of given size
    int arr[size];
    
    
    //input an array
for(int i=0;i<size;i++)
{
    
    printf("Enter the element at pos %d :\n",i);
    scanf("%d",&arr[i]);
    
    
}

//sort array
    
     bubbleSort(arr,size);
    
  printf("Sorted Array: ");
for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]); // Add a space after each element
}
    
   
   

    return 0;
}