#include<stdio.h> //Including printf(),scanf()
#include<windows.h> //including sleep()
#include<string.h>  //Including strcmp etc
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