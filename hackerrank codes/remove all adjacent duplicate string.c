#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void removeAdjacentDuplicates(char*s){
    int length=strlen(s),top=-1;
    char stack[length+1];
    for(int i=0;i<length;i++){
        if(top>=0 && stack[top]==s[i]){
            top--;
        }else{
            stack[++top]=s[i];
        }
    }
    stack[top+1]='\0';
    printf("%s\n",stack);
}
int main() {
    char s[100001];
    scanf("%s",s);
    removeAdjacentDuplicates(s);

    return 0;
}
