#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
void write();
void read();
int main(){
    int num;
    printf("\t\t\t\t\t*********welcome to prabhat's library**********\t\t\t\t\t \n");
    printf("press 1 for feed tha data of book\n");
    printf("press 2 for see all entry of book details\n");
    printf("press 3 for exit\n");
    printf("Enter one of the above: ");
    scanf("%d",&num);
    switch(num){
        case 1:
        write();
        printf("Data feed successfully ");
        break;
        case 2:
        read();
        break;
        case 3:
        exit(0);
        default:
        printf("invalide code");
        break;

    }
    return 0;
    }

void write(){
    int cost;
    char date[100];
    char book[50];
    char quantity[50];
    FILE*ptr;
    printf("enter the date : ");
    scanf("%s",date);
    printf("enter the name of book : ");
    scanf("%s",book);
    printf("enter the total quantity of books :\n");
    scanf("%s",quantity);
    printf("enter the cost of one book :\n");
    scanf("%d",cost);
    ptr=fopen("bookmanagment.txt","a");
    fprintf(ptr,"new stock is update on %s\n",date);
    fprintf(ptr,"the name of book is  %s\n",book);
    fprintf(ptr,"total quantity of book is  %s\n",quantity);
    fprintf(ptr,"cost of one book is  %d\n",cost);

    printf("data sucessfully feeded");
    fclose(ptr);
    }
void read(){
FILE*read;
read=fopen("bookmanagment.txt","r");
char c= fgetc(read);
while(c!=EOF){
printf("%c",c);
c=fgetc(read);
}
fclose(read);
return 0;
}


