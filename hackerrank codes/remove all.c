#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define max_size 100

void deletion(int arr[],int *size,int element){
    int j,i;
    for(i=0;i<*size;i++){
        if(arr[i]==element){
          for(j=i;j<*size-1;j++) {
              arr[j]=arr[j+1];
          }
            (*size)--;
            i--;
        }
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
