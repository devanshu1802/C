#include <stdio.h>

int main(){
    int marks1 ,marks2 ,marks3;

    printf("Enter the marks of Subject 1: \n");
    scanf("%d",&marks1);
    printf("Enter the marks of Subject 2: \n");
    scanf("%d",&marks2);
    printf("Enter the marks of Subject 3: \n");
    scanf("%d",&marks3);

    if(marks1<33 || marks2<33 || marks3<33){
        printf("You are fail as you are fail in an individual subject or subjects\n");
    }
    else if((marks1+marks2+marks3)/3<40){

        printf("You are fail because of your overall percentage is less than 40%%\n");
    }
    else{
        printf("You are passedd Mother fucker!!!!!!! ");
    }

    return 0;
}


