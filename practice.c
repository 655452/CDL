#include<stdlib.h>
#include<stdio.h>

int main(){

printf("Hello Asit");

char  com[30];
int i=2,a=0;

printf("\n Enter the comment: ");
gets(com);

if(com[0]=='/'){
    if(com[1]=="/"){
        printf("It i s the comments");
    }
    else if(com[1]=="*"){
        for(int i=2;i<=30;i++){
            if(com[i]=="*" && com[i+1]=="/"){
                printf("\n It is the Comment");
                a=1;
            break;
            }
            else{
                continue;
            }
            
        }
        if(a=="0")
        {
            
    printf("\n It Is not  a comment");
        }


    }
    else printf("\n It Is not  a comment");
}
   else{
    
     printf("\n It Is not  a comment");
   }


    return 0;
}