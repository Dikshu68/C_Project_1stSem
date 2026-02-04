#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <string.h>

struct Info {
    char name[100];
    char number[100];
    char email[100];
};

struct Info s[50];
int count = 0;

int add();
int view();
int removeContact();


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
        
                view();
                printf("contact list is :\n");
                continue;
        case 3:
                printf("Edit");
                continue;
        
        case 4:
                removeContact();
                continue;
        case 5:
                printf("Have a wonderfull day bye");
                break;
        default:
                printf("Only 1,2,3 or 4");

    }
    printf("End");


    return 0;
}
}

int add() {
    if (count >= 50) {
        printf("The contact list is full!\n");
        Sleep(1500);
        return 0;
    }

    printf("Add a new contact \n");
    printf("Full Name: ");
    scanf(" %[^\n]", s[count].name);
    printf("Phone Number: ");
    scanf("%s", s[count].number);
    printf("Email: ");
    scanf("%s", s[count].email);

    count++;
    printf("Contact added successfully!\n");
    Sleep(1500);
    return 0;
}

int view() {
    if (count == 0) {
        printf("The contact list is empty.\n");
        Sleep(1500);
        return 0;
    }

    printf("Contacts:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d\n", i);
        printf("Name: %s\n", s[i].name);
        printf("Number: %s\n", s[i].number);
        printf("Email: %s\n", s[i].email);
        
    }
    system("pause");
    return 0;
}

int removeContact() {
    if (count == 0) {
        printf("The contact list is empty.\n");
        Sleep(1500);
        return 0;
    }

    int id;
    printf("Enter contact ID to remove: ");
    scanf("%d", &id);

    if (id < 0 || id >= count) {
        printf("Invalid contact id\n");
        Sleep(1500);
    } else {
        for (int i = id; i < count - 1; i++) {
            s[i] = s[i + 1];
        }
        count--;
        printf("Contact removed successfully!\n");
        Sleep(1000);
    }

    return 0;
}
