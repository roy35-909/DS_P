/*
Author : Simanta Kumar Roy
roy35-909@diu.edu.bd
*/

#include<stdio.h>

void swap(int *a, int *b){

    int t = *a;
    *a = *b;
    *b = t;
}

int main()

{
    int arr[5] = {8,2,5,1,7};
    int n = 5;

    for(int i=0;i<n-1;i++)
    {
        int min = i;

        for(int j = i+1;j<n;j++)
        {
            if(arr[min]>arr[j])
            {
                min  = j;
            }
        }
        if(i!=min){
            swap(&arr[i],&arr[min]);
        }

    }

    for(int i=0;i<n;i++)
    {
        printf(" %d ",arr[i]);
    }
    
}