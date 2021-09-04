/*author Manjushree Panthangi */
#include<stdio.h>
#include<stdlib.h>

void binarysearch(int n,int *arr,int value){
    int low =0 ,high=n-1,mid;
    while (low<=high){
        mid = (low+high)/2;
        if(arr[mid] == value){
            printf("value %d found at %d index",value,mid);
            break;
        }
        else if(arr[mid] > value){
            high = mid-1;
        }
        else if (arr[mid] < value){
            low = mid+1;
        }
    }
}

int main(){
    int n,*arr,value;
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int)*n);
    printf("give values in increasing order :");
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    printf("enter value");
    scanf("%d",&value);
    binarysearch(n,arr,value);
}
