#include <stdio.h>

int main(){
    char a;
    printf("Enter a alphabet :");
    scanf("%c",&a);
    if(a>=97 && a<=122){
        printf("This character is a lowerase\n");
    }
    else{
        printf("This character is not a lowercase\n");
    }
    return 0;
}