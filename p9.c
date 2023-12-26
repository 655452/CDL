#include<string.h>
#include<stdio.h>
int main()
{
 char string[20];
 int state=0,count=0;
 printf("\n The string must begin with a and terminate with b");
 printf("\n The Grammar Is:\n");
printf("\tS->aS \n\tS->Sb \n\tS->ab\n");
 printf("Enter The String To Be Checked\n");
 gets(string);
 while(string[count]!='\0')
  {
    switch(state)
    {
    	case 0: if (string[count]=='a')
  			state=1;
  		else
  			state=3;
  			break;
   	case 1: if (string[count]=='a')
  			state=1;
  		else if(string[count]=='b')
  			state=2;
  		else
  			state=3;
  		break;
   	case 2: if (string[count]=='b')
  			state=2;
  		else
  		state=3;
  		break;
  	 default: break;
  	}
  	count++;
  	if(state==3)
  	break;
 }
 if(state==2)
 	printf("\nstring is accepted\n");
 else
 	 printf("\nstring is not accepted\n");
return(0);
 }
