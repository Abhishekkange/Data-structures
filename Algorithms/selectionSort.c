// Online C compiler to run C program online
#include <stdio.h>

#include <stdlib.h>

// Design and implement a program to sort a given array of elements using the Bubble Sort algorithm.

void selectionSort(int arr[],int size)
{
    
    //insert at i pos
    for(int i=0;i<size;i++)
    {
         int min = arr[i];
         int minIndex = i;
         
         
        for(int j=i;j<size;j++)
        {
            if(arr[j]<min)
            {
                min = arr[j];
                minIndex = j;
                
                
            }
        
        }
        
        //replace min at ith pos
        int temp = arr[minIndex];
        arr[minIndex]=arr[i];
        arr[i]=temp;
        
        
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
    
    selectionSort(arr,size);
    
  printf("Sorted Array: ");
for(int i = 0; i < size; i++) {
    printf("%d ", arr[i]); // Add a space after each element
}
    
   
   

    return 0;
}