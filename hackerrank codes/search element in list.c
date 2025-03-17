#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int search,found=0;
    
    scanf("%d",&search);
     for(int i=0;i<n;i++){
        if(arr[i]==search){
            found=1;
            break;
        }
    }
    if(found==1){
        printf("Found");
    }
    else{
        printf("Not Found");
    }
    
    return 0;
}
