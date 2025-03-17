#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max_size 100

void deletion(int arr[],int *size,int element){
    int pos=-1,i;
    for(i=0;i<*size;i++){
        if(arr[i]==element){
            pos=i;
            break;
        }
    }
    if(pos!= -1){
        for(i=pos;i<*size-1;i++){
            arr[i]=arr[i+1];
        }
        (*size)--;
    }
}

int main() {
int n,to_delete;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&to_delete);
    
    deletion(arr,&n,to_delete);
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
