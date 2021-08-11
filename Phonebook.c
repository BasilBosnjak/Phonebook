#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>
struct person
{
    char name[35];
    char address[50];
     char father_name[35];
     char mother_name[30];
    long int mble_no;
    char sex[8];
    char mail[100];
    char citision_no[20];
    };

void menu();
void got();
void start();
void back();
void addrecord();
void listrecord();
void modifyrecord();
void deleterecord();
void searchrecord();
int main()
{
    system("color 5f");
    start();
    return 0;
}
void back()
{
    start();
}
void start()
{
    menu();
}
void menu()
{
    system("cls");
printf("\t\t**********WELCOME TO YOUR PHONEBOOK*************");

printf("\n\n\t\t\t  MENU\t\t\n\n");
printf("\t1.Add New   \t2.List   \t3.Exit  \n\t4.Modify \t5.Search\t6.Delete");

switch(getch())
{
    case '1':
                addrecord();
    break;
   case '2': listrecord();


}
}