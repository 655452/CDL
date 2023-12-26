// #include<stdlib.h>
// #include<stdio.h>

// int main(){

// printf("Hello Asit");

// char  com[30];
// int i=2,a=0;

// printf("\n Enter the comment: ");
// gets(com);
// printf("com[1] %c com[0] %c",com[1],com[0]);
// if(com[0]=='/'){
//     if(com[1]=="/"){
//         printf("It i s the comments");
//     }
//     else if(com[1]=='*'){
//         for( i=2;i<=30;i++){
//             if(com[i]=='*' && com[i+1]=='/'){
//                 printf("\n It is the Comment");
//                 a=1;
//                 break;
//             }
//             else{
//                 continue;
//             }
            
//         }
//         if(a==0)
//         {
            
//     printf("\n It Is not  a comment");
//         }


//     }
//     else printf("\n It Is not  a comment");
// }
//    else{
    
//      printf("\n It Is not  a comment");
//    }


//     return 0;
// }


#include<stdlib.h>
#include<stdio.h>

int main(){

char fname[50];

FILE *f1;

printf(" enter the file path");
scanf("%s ",fname);
f1=fopen(fname,"r");
printf("Entire file is %c",f1);
    return 0;
}