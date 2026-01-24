#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
int contact[100];

struct Info{
    int index;
    char name[100];
    char number[100];
    char email[100];
};
int main(){
    struct Info s[50];
    int running = 1; 
    while(running){  
        Sleep(500);
        int input;
        system("cls");   
        Sleep(1000);
        printf("**\n");
        Sleep(2000);    
        printf("      Welcome to the Contact management system                \n ");
        Sleep(2000);
        printf("** \n");
        printf("1.Add an contact \n");
                Sleep(1000);
        printf("2.View the contacts\n");
                Sleep(1000);
        printf("3.Edit a Contacts  \n");
                Sleep(1000);
        printf("4.Search an contact\n>");
                Sleep(1000);

        scanf("%d",&input);
        switch(input){
        case 1:
                add();
                printf("add");
                continue;
        case 2:
                printf("Removed");
                continue;
        case 3:
                printf("Edit");
                continue;
        case 4:
                printf("Have a wonderfull day bye");
                break;
        default:
                printf("Only 1,2,3 or 4");

    }
    printf("End");


    return 0;
}
}

int add(){
    char name[32];
    printf("You choosed to add a new contact\n");
    printf("First Name: ");



    return 0;
}
