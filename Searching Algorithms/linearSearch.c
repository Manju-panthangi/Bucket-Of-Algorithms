/* author Manjushree Panthangi */
#include<stdio.h>
#include<stdlib.h>

void linearsearch(int n,int *arr,int value){
    for(int i=0;i<n;i++){
        if(arr[i] == value){
            printf("value %d found at index %d\n",value,i);
        }
        else{
            printf("value %d not found at index %d\n",value,i);
        }
    }

}

int main(){
    int n,*arr,value;
    printf("Enter size of array: ");
    scanf("%d",&n);
    arr = (int*)malloc(sizeof(int)*n);
    printf("\nenter array values : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",arr+i);
    }
    printf("\nenter values to be searched : ");
    scanf("%d",&value);
    linearsearch(n,arr,value);
}
