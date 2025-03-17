#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX], top= -1;
int push(int data){
    if(top==MAX-1){
        return 0;
    }
    else{
        int value;
        scanf("%d",&value);
        stack[++top]=value;
        return 1;
    }
}
int pop(int data){
   if(top==-1){
       return 0;
   }
    else{
        stack[top--]=data;
        return 1;
        
    }
}
int display(){
    if(top==-1){
        return 0;
    }
    else{
        for(int i=top;i>=0;i--){
            printf("%d",stack[i]);
        }
        return 0;
    }
}

int main(){
    push(90);
    push(12);
    push(56);
    pop(56);
    push(88);
    push(12);
    pop(12);
    pop(88);
    pop(12);
    display();
    return 0;
}
