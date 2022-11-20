#include<stdio.h> //Including printf(),scanf()
#include<windows.h> //including sleep()
#include<string.h>  //Including strcmp etc
#include "loading.c" //loading screen
#define MAX 20

void Password(void);
 void input(void);
 int user(void);
 void viewdata(void);
 void result(int n);
 void mainmenu(void);
 int t(void);
 void view(void);
 void del(void);
 void close(void);
 void help(void);

 struct candidate
 {
     char name[15];
     int vote;
 }
 can[MAX];

 FILE *f1;
 FILE *fp;


 int can_num;
 int id_range;
 int i,j;
 //int k;
 char ename[20];

 int main(void)
 {
     system("color 1a");
     Password();
     return 0;
 }
 void Password(void)
{

   system("cls");

   printf("             \n\n\xDB\xDB\xDB Simple Voting System \xDB\xDB\xDB\n\n");
   char d[25]="Password Protected";
   char ch,pass[10];
   char c,password[10]="rejwan";
   int i=0,j;
    for(j=0;j<20;j++)
    {
    printf("*");
    Sleep(50);
    }
    for(j=0;j<20;j++)
   {
        Sleep(50);
   printf("%c",d[j]);
   }
   for(j=0;j<20;j++)
   {
        Sleep(50);
   printf("*");
   }
   printf("\nEnter Admin Password:");
  while(ch!=13)
   {
    ch=getch();
    if(ch!=13 && ch!=8){
    putch('*');
    pass[i] = ch;
    i++;
    }
   }
   pass[i] = '\0';
   if(strcmp(password,pass)==0)
   {
       system("cls");
    printf("\n\nLoading......\n");
    for(j=0;j<60;j++)
   {
        Sleep(10);
   printf("\xB2");
   }
   system("cls");
   printf("\nPassword match");
   printf("\nPress any key to continue......");
    getch();
    mainmenu();
   }
   else
   {
     printf("\n\n\aWarning!! Incorrect Password");
     /*for(k=0;k<10;k++){
        printf("%c",pass[k]);
     }*/
     getch();
     Password();
   }
}


void mainmenu(void)
{
    system("cls");
    int n;
    char c;


    ///printf("\nPress any key to continue...");
    ///getch();
    printf("\n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Simple Voting System \n\n\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ");
    printf(" \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2");
    printf("\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 1. Add data \n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 ");
    printf("\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 2. User Window \n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 ");
    printf("\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 3. View result \n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 ");
    printf("\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 4. Delete data \n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 ");
    printf("\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 7. View Election Info \n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 ");
    printf("\n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 0. Quick Exit \n\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xB2 ");
    printf("\n------------------------------------------\n");
    t();
    printf("Enter your choice:");
    scanf("%d",&n);
    c=getchar();

    if(isalpha(c))
    {
    printf("\n\nYou have pressed an alphabet\nPress any key to continue... \n");
    getch();

