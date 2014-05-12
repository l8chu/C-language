#include "mySort.h"
#include "metrics.h"

void merge(int array[], unsigned int first,unsigned int mid,unsigned int last);
void mySort(int array[], unsigned int first, unsigned int last){
        if(first < last){
           int mid;
           mid = (first+last)/2;
           mySort(array,first,mid);
           mySort(array,mid+1,last);
           merge(array,first,mid,last);
    }
} 
void merge(int array[], unsigned int first,unsigned int mid,unsigned int last){
            int i,j,k, a[1000];
            k = first;
            i = first;
            j = mid+1;
   while((i <= mid) && (j <= last)){
        if(myCompare(array[i],array[j])<0){
          mySwap(&a[k],&array[i]);
           i++;
           }
        else{
            mySwap(&a[k],&array[j]);
            j++;
            }
            k++;
    }
    while(i<=mid){
          mySwap(&a[k],&array[i]);
          i++;
          k++;
          }
    while(j<=last){
           mySwap(&a[k],&array[j]);
           j++;
           k++;
           }
    for(i=first;i<k;i++)
       mySwap(&array[i],&a[i]);
} 
