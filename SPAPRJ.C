#include<nihar.h>
void main()
{
   char str1[50],str2[50];
   char st1[500]="PROGRAMS ARE LIKE WOMEN,\n\t     NO MATTER HOW MUCH YOU GET MAD BECAUSE OF ERRORS,\n\t\t   YOU ARE ALWAYS THE ONE WHO IS WRONG :=)";
   char st2[100]="press any to continue...";
   char st3[50]=" JANNAT ";
   int ch,x,y,z,i=0;
   char c;
   clrscr();
   goto login;
   main2:
    clrscr();
      printf("\n\n  \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 ");
      printf("\n\n\n\n\n\n\n\n\t\t\t   ");
      for(i=0;i<strlen(st1);i++)
      {
	 printf("%c",st1[i]);
	 delay(50);

      }
  //    printf("\n\n\n\n\n\n\n\n\t\t\t   PROGRAMS ARE LIKE WOMEN,\n\t     NO MATTER HOW MUCH YOU GET MAD BECAUSE OF ERRORS,\n\t\t   YOU ARE ALWAYS THE ONE WHO IS WRONG :=)\n\n");
	printf("\n\n\n\n\n\n ");
      for(i=0;i<strlen(st2);i++)
      {
	 printf("%c",st2[i]);
	 delay(100);

      }

//      printf("\n\n\n\n\n\n press any to continue...");
      printf("\n\n\n  \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 ");
      getch();

    main1 :
      flushall();
      clrscr();
      printf("\n\n  \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 ");
//      printf("\n\t\t\t\t Welcome to JANNAT \n\nThis is a sample project.\nSub : Structural Programming Approach.\nMade by NIHAR ANANT KOLI.");
	printf("\n\t\t\t\t Welcome to");
      for(i=0;i<strlen(st3);i++)
      {
	 printf("%c",st3[i]);
	 delay(300);

      }
      delay(1000);
      newstart:
      printf("\n\nThis is a sample project.\nSub : Structural Programming Approach.\nMade by NIHAR ANANT KOLI.");
      printf("\n\n1)Basic programs\n2)Arrays\n3)Matrix (2D Arrays)\n4)Strings\n\n5)End project");
      printf("\n\n Enter your choice : ");
	scanf("%d",&ch);
      if(ch == 5)
	  goto end;
      switch(ch)
      {
	  case 1 :start:
		  clrscr();
		  flushall();
		  printf("\n1)Arithmatic operation\n2)Armstrong number\n3)Fibonacci series\n4)Palindrome number\n5)Prime number\n6)Reverse of number\n7)Maximum of three numbers\n8)Table of any number\n9)Tribonacci series\n\n10)To go back");
		  printf("\n\n Enter your choice : ");
		  scanf("%d",&ch);
		  if(ch == 10)
		  {
			clrscr();
			printf("\n\n  \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 ");
			printf("\n\t\t\t\t Welcome to JANNAT");
			goto newstart;
		  }
		  switch(ch)
		      {
			case 1 :start1:
				clrscr();
				flushall();
				printf("\n1)Addition\n2)subtraction\n3)Multiplication\n4)Division\n\n5)Go to back menu");
				printf("\n\n Enter your choice : ");
				scanf("%d",&ch);
				if(ch == 5)
				    goto start;
					 switch(ch)
					 {
						case 1 :printf("\n Enter any two numbers : ");
							scanf("%d%d",&x,&y);
							delay2();
							add(x,y);
							break;
						case 2 :printf("\n Enter any two numbers : ");
							scanf("%d%d",&x,&y);
							sub(x,y);
							break;
						case 3 :printf("\n Enter any two numbers : ");
							scanf("%d%ds",&x,&y);
							mul(x,y);
							break;
						case 4 :printf("\n Enter any two numbers : ");
							scanf("%d%d",&x,&y);
							div(x,y);
							break;

						default : printf("\n Invalid input");
					 }
						getch();
						clrscr();
						goto start1;

			case 2 :printf("\n Enter any num : ");
				scanf("%d",&x);
				armstrong(x);
				break;
			case 3 :printf("\n Enter number of digits of fibonacci series you want : ");
				scanf("%d",&x);
				fib(x);
				break;
			case 4 :printf("\n Enter any num : ");
				scanf("%d",&x);
				pallindrome(x);
				break;
			case 5 :printf("\n Enter any number : ");
				scanf("%d",&x);
				prime(x);
				break;
			case 6 :printf("\n Enter any num : ");
				scanf("%d",&x);
				rev(x);
				break;
			case 7 :printf("\n Enter any three nums : ");
				scanf("%d%d%d" , &x , &y , &z);
				max(x,y,z);
				break;
			case 8 :printf("\n Enter any num : ");
				scanf("%d",&x);
				table(x);
				break;
			case 9 :tribonacci();
				break;

			default : printf("\n Invalid input");

		      }
			    getch();
			    clrscr();
			    goto start;



	  case 2 :start2:
		  clrscr();
		  flushall();
		  printf("\n1)Linear search\n2)Binary search\n3)Insert an element\n4)Delete an element\n5)Maximum and Minimum elements of array\n6)Sorting of array\n\n7)Go to back menu");
		  gotoxy(100,60);

		  printf("\n\n Enter your choice : ");
		  scanf("%d",&ch);
		  if(ch == 7)
		  {
			clrscr();
			printf("\n\n  \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 ");
			printf("\n\t\t\t\t Welcome to JANNAT");
			goto newstart;
		  }
		      switch(ch)
		      {
			case 1 :lsearch();
				break;
			case 2 :bsearch();
				break;
			case 3 :inselement();
				break;
			case 4 :delelement();
				break;
			case 5 :minmaxarray();
				break;
			case 6 :bubblesort();
				break;
			default :printf("\n\n Invalid Input");

		      }
		       getch();
		       clrscr();
		       goto start2;

	  case 3 :start3:
		  clrscr();
		  flushall();
		  printf("\n1)Addition\n2)Subtraction\n3)Multiplication\n4)Transpose\n5)To convert in upper triangular matrix\n6)To convert in lower triangular matrix\n7)Min in row\n8)Max in row\n9)Min in column\n10)Max in column\n\n11)Go to back menu");
		  printf("\n\n Enter your choice : ");
		  scanf("%d",&ch);
		  if(ch == 11)
		  {
			clrscr();
			printf("\n\n  \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 ");
			printf("\n\t\t\t\t Welcome to JANNAT");
			goto newstart;
		  }

		      switch(ch)
		      {
			case 1 :addmat();
				break;
			case 2 :submat();
				break;
			case 3 :mulmat();
				break;
			case 4 :transmat();
				break;
			case 5 :upptri();
				break;
			case 6 :lowtri();
				break;
			case 7 :minrow();
				break;
			case 8 :maxrow();
				break;
			case 9 :mincol();
				break;
			case 10 :maxcol();
				 break;
			default :printf("\n\n Invalid Input");

		      }
		       getch();
		       clrscr();
		       goto start3;

	  case 4 :start4:
		  clrscr();
		  flushall();
		  printf("\n1)Reverse of string\n2)Pallindrome\n3)Character count\n4)Joining two strings\n5)To check two strings are same or not\n6)Zycus (Reverse of string without reversing spaces)\n\n7)To go back");
		  printf("\n\n Enter your choice : ");
		  scanf("%d",&ch);
		  if(ch == 7)
		  {
			clrscr();
			printf("\n\n  \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 ");
			printf("\n\t\t\t\t Welcome to JANNAT");
			goto newstart;

		  }
		   switch(ch)
		   {
			case 1 :revstr();
				break;
			case 2 :pallinstr();
				break;
			case 3 :charcount();
				break;
			case 4 :catstr();
				break;
			case 5 :checkstr();
				break;
			case 6 :zycus();
				break;
			default :printf("\n\n Invalid Input");


		   }
		       getch();
		       clrscr();
		       goto start4;




	  default :printf("\n Invalid input");
      }
	getch();
	clrscr();
	printf("\n\n  \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 ");
	printf("\n\t\t\t\t Welcome to JANNAT");
       goto newstart;
																				login:
																				clrscr();
																				flushall();
																				printf("\n\n  \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 ");
																				printf("\n\n USERNAME :- ");
																				gets(str1);
																				printf("\n\n PASSWORD :- ");
																				i=0;
																				do
																				{
																					str2[i] = getche();
																					delay(180);
																					printf("\b*");
																					i++;
																				}while((int)str2[i-1] != 13);
																					str2[i-1] = '\0';
																																																																																				if(strcmp(str1 , "admin") == 0 && strcmp(str2 , "password") == 0)
																				{
																					printf("\n\n You logged in succesfully...");
																					getch();
																					goto main2;
																				}
																				else
																				{
																					printf("\n\n Username or password is wrong...\n 1)Try again.\n 2)End project.");
																					nk:
																					printf("\n\n Enter your choice : ");
																					scanf("%d",&ch);
																					switch(ch)
																					{
																						case 1 :goto login;
																						case 2 :clrscr();
																							printf("\n\n  \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 ");
																							goto end1;
																						default :printf("\n\n Invalid Input");
																							 goto nk;
																					}
																				}

      end :
     clrscr();
      printf("\n\n  \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 ");
      printf("\n\n\n\n\t\t\t I AM NOT A REAL PROGRAMMER,\n\t\t   I THROW THINGS TOGETHER UNTIL IT WORKS,\n\t\t\t     THEN I MOVE ON :=)\n\n");
      printf("\n\n  \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 ");
      getch();
      end1:
	  printf("\n\n\n\n\t           Thanks for giving your precious time!!!\n\t\t\t       Visit again!!!");
	  printf("\n\n\n\n  \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 \2 \1 ");
   getch();
}