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

int add(struct Info s[], int count);
void view(struct Info s[], int count);
int main(){
    struct Info s[50];
    int running = 1; 
    int count = 0;
    while(running){  
        Sleep(500);
        int input;
        system("cls");   
        Sleep(1000);
        printf("**\n");
        Sleep(2000);    
        printf("      Welcome to the Contact management system\n ");
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
        getchar();
        switch(input){
        case 1:
                count = add(s,count);
                printf("add");
                continue;
        case 2:
                view(s,count);
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

int add(struct Info s[], int count){
    printf("You choosed to add a new contact\n");

    printf("First Name: ");
    gets(s[count].name);

    printf("Enter Number: ");
    gets(s[count].number);

    printf("Enter Email");
    gets(s[count].email);

    s[count].index = count + 1;
    printf("Contact added successfully!\n");
    Sleep(1000);

    return count +1;
}

void view(struct Info s[], int count){
        system("cls");
        if (count == 0){
                printf("The array is empty pls press 1 to add");

        }
        else{
                printf("================ CURRENT CONTACTS =================\n");
                printf("ID\t%-15s\t%-15s\t%-15s\n","Name","Number","Email");
                printf("------------------------------------------------------\n");
                for(int i = 0;i< count;i++){
                        printf("%d\t%-15s\t%-15s\t%-15s\n",
                                s[i].index,
                                s[i].name,
                                s[i].number,
                                s[i].email
                        
                        );
                printf("=======================================================");
                }
                printf("\nPress any key to return to menu...");
                system("pause > nul");
        }
}