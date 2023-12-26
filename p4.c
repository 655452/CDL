#include<stdio.h>
void main()
{
	char s[5],ch='y',s1[4];
//	printf("\n Enter any operator");
	//gets(s);
   do{
	 printf("\n Enter any operator  :  ");
	scanf("%s",s);
	switch(s[0])
	{
 		case'>':
 			if(s[1]=='=')
				printf("\n  valid operator : Greater than or equal");
 			else 
				printf("\n valid operator :  Greater than");
 			break;
 		case'<':
 			if(s[1]=='=')
 				printf("\n valid operator : Less than or equal");
 			else 
				printf("\n valid operator : Less than");
 			break;
 		case'=':
 			if(s[1]=='=')
 				printf("\n valid operator : Equal to");
 			else
 				printf("\n valid operator : Assignment");
 			break;
 		case'!':
 			if(s[1]=='=')
 				printf("\n valid operator : Not Equal");
 			else
 				printf("\n valid operator :  Bit Not");
 			break;
 		case'&':
 			if(s[1]=='&')
 				printf("\n valid operator : Logical AND");
 			else printf("\n valid operator : Bitwise AND");
 			break;
 		case'|':
 			if(s[1]=='|')
 				printf("\n valid operator : Logical OR");

			else
				printf("\n valid operator : Bitwise OR");
			break;
		case'+':
			if(s[1]=='+')
				printf("\n valid operator : unary operator");
			else
				printf("\n valid operator : Addition");
			break;
		case'-':
			if(s[1]=='-')
				printf("\n valid operator : unary operator");
			else
				printf("\n valid operator : Substraction");
			break;
		case'*':
			printf("\n valid operator : Multiplication");
			break;
		case'/':
			printf("\n valid operator : Division");
			break;
		case'%':
			printf("\n valid operator : Modulus");
			break;
		default: 
			printf("\n Invalid operator !!!!");
			break;
	}
	printf("\n do you want to continue(y:yes,n:No  :  ");
        scanf("\n%c",&ch);
}while(ch=='Y'||ch=='y');
	
}	

