#include<math.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
void delay2()
{
   printf("\n\t\t\t\t!!!WAIT!!!");
   delay(2000);
   printf("\nLET ME CALCULATE...");
   delay(2000);
   printf("\nI NEED MORE TIME...\n");
   delay(2000);
}
/*void delay()
{
  int i,j;
  printf("\n\t\t\t\t!!!WAIT!!!");
  for(i=0;i<=32766;i++)
  {
     for(j=0;j<=32766;j++);
  }
  printf("\nLET ME CALCULATE...");
  for(i=0;i<=32766;i++)
  {
     for(j=0;j<=32766;j++);
  }
  printf("\nI NEED MORE TIME...");
  for(i=0;i<=32766;i++)
  {
     for(j=0;j<=32766;j++);
  }
  printf("\n\n");
} */
void add(int x,int y)
{
  printf("\n Addition is %d ",x+y);
}
void sub(int x,int y)
{
  printf("\n Subtraction is %d",x-y);
}
void mul(int x,int y)
{
  printf("\n Multiplication is %d",x*y);
}
void div(int x,int y)
{
  printf("\n Division is %d",x/y);

}
void armstrong(int x)
{
    int rem,sum=0,a;
    a=x;

   while(x>0)
   {
     rem=x%10;
     sum=sum+pow(rem,3);
     x=x/10;
   }
   if(sum==a)
   printf("\n\n It is an armstrong number");
   else
   printf("\n\n It is not an armstrong number");
}
void fib(int x)
{
  int a=0,b=1,c,i=3;

   if(x>=1)
   printf("%d ",a);
   if(x>=2)
   printf("%d",b);

   while(i<=x)
   {
     c=a+b;
     printf(" %d ",c);
     a=b;
     b=c;
     i++;
   }
}
void pallindrome(int x)
{
  int rem,rev=0,a;
   a=x;
   while(x>0)
   {
     rem=x%10;
     rev=(rev*10)+rem;
     x=x/10;
   }
   printf("\n Reverse : %d",rev);

   if(rev==a)
   {
     printf("\n\n Number entered is palindrome");
   }
   else
   {
     printf("\n\n Number entered is not palindrome");

   }
}
void prime(int x)
{
   int flag=1,i;

	for(i=2;i<x;i++)
	{
	  if(x%i == 0)
	  {
	    flag=2;
	    break;
	  }

	}
	if(flag == 2)
	{
	   printf("\n Number entered is not prime.");
	}
	else
	{
	  printf("\n Number entered is prime.");
	}
}
void rev(int x)
{
  int rem,reverse=0;
   while(x>0)
   {
     rem=x%10;
     reverse=(reverse*10)+rem;
     x=x/10;
   }
   printf("\n Reverse : %d",reverse);
}
void max(int x,int y,int z)
{
  int maximum;
     maximum = (x>y && x>z) ? x : (y>z) ? y : z;
       printf("\n Maximum number is %d",maximum);
}
void table(int x)
{
  int i=1;
    while(i<=10)
    {
     printf("\n %d * %d = %d",x,i,x*i);
     i++;
    }
}
void tribonacci()
{
  int a=0,b=1,c=1,d,n,i=3;
   printf("\n\n Enter number of digits of tribonacci series you want : ");
     scanf("%d",&n);
     printf("\n");
   if(n>=1)
   printf("%d ",a);
   if(n>=2)
   printf("%d ",b);
   if(n>=3)
   printf("%d ",c);

   while(i<n)
   {
     d=a+b+c;
     printf(" %d ",d);
     a=b;
     b=c;
     c=d;
     i++;
   }
}

void addmat()
{
    int a[3][3],b[3][3],c[3][3],i,j;
	printf("\n Enter 9 nums of first matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	   }
	printf("\n Enter 9 nums of second matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	   }
	printf("\n Addition of matrices : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	   }
}
void submat()
{
    int a[3][3],b[3][3],c[3][3],i,j;
	printf("\n Enter 9 nums of first matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	   }
	printf("\n Enter 9 nums of second matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	   }
	printf("\n Subtraction of matrices : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]-b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	   }
}
void mulmat()
{
    int a[3][3],b[3][3],c[3][3],i,j,k;
	printf("\n Enter 9 nums of first matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	   }
	printf("\n Enter 9 nums of second matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	   }
	printf("\n Multiplication of matrices : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			c[i][j] = 0;
			for(k=0;k<3;k++)
			{
				c[i][j] += a[i][k]*b[k][j];
			}
				printf("%d ",c[i][j]);
		}
		printf("\n");
	   }
}
void transmat()
{
    int a[3][3],b[3][3],i,j;
	printf("\n Enter 9 nums of matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	   }
	printf("\n Transpose of matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			b[i][j] = a[j][i];
			printf("%d ",b[i][j]);
		}
		printf("\n");
	   }
}
void upptri()
{
    int a[3][3],i,j;
	printf("\n Enter 9 nums of matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	   }
	printf("\n Upper triangular matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			if(i>j)
			printf("* ",a[i][j]);
			else
			printf("%d ",a[i][j]);

		}
		printf("\n");
	   }
}
void lowtri()
{
    int a[3][3],i,j;
	printf("\n Enter 9 nums of matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	   }
	printf("\n Lower triangular matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			if(i<j)
			printf("* ",a[i][j]);
			else
			printf("%d ",a[i][j]);

		}
		printf("\n");
	   }
}
void maxrow()
{
    int a[3][3],i,j;
	printf("\n Enter 9 nums of matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	   }
	printf("\n Maximum in rows of matrix : \n");
	printf("\n Max of first row : %d ",( (a[0][0]>a[0][1]) && (a[0][0]>a[0][2]) ) ? a[0][0] : ( (a[0][1]>a[0][2]) ? a[0][1] : a[0][2] ));
	printf("\n Max of second row : %d ",( (a[1][0]>a[1][1]) && (a[1][0]>a[1][2]) ) ? a[1][0] : ( (a[1][1]>a[1][2]) ? a[1][1] : a[1][2] ));
	printf("\n Max of third row : %d ",( (a[2][0]>a[2][1]) && (a[2][0]>a[2][2]) ) ? a[2][0] : ( (a[2][1]>a[2][2]) ? a[2][1] : a[2][2] ));


}
void minrow()
{
    int a[3][3],i,j;
	printf("\n Enter 9 nums of matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	   }
	printf("\n Minimum in rows of matrix : \n");
	printf("\n Min of first row : %d ",( (a[0][0]<a[0][1]) && (a[0][0]<a[0][2]) ) ? a[0][0] : ( (a[0][1]<a[0][2]) ? a[0][1] : a[0][2] ));
	printf("\n Min of second row : %d ",( (a[1][0]<a[1][1]) && (a[1][0]<a[1][2]) ) ? a[1][0] : ( (a[1][1]<a[1][2]) ? a[1][1] : a[1][2] ));
	printf("\n Min of third row : %d ",( (a[2][0]<a[2][1]) && (a[2][0]<a[2][2]) ) ? a[2][0] : ( (a[2][1]<a[2][2]) ? a[2][1] : a[2][2] ));


}
void maxcol()
{
    int a[3][3],i,j;
	printf("\n Enter 9 nums of matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	   }
	printf("\n Maximum in column of matrix : \n");
	printf("\n Max of first column : %d ",( (a[0][0]>a[1][0]) && (a[0][0]>a[2][0]) ) ? a[0][0] : ( (a[1][0]>a[2][0]) ? a[1][0] : a[2][0] ));
	printf("\n Max of second column : %d ",( (a[0][1]>a[1][1]) && (a[0][1]>a[2][1]) ) ? a[0][1] : ( (a[1][1]>a[2][1]) ? a[1][1] : a[2][1] ));
	printf("\n Max of third column : %d ",( (a[0][2]>a[1][2]) && (a[0][2]>a[2][2]) ) ? a[0][2] : ( (a[1][2]>a[2][2]) ? a[1][2] : a[2][2] ));


}
void mincol()
{
    int a[3][3],i,j;
	printf("\n Enter 9 nums of matrix : \n");
	   for(i=0;i<3;i++)
	   {
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	   }
	printf("\n Minimum in column of matrix : \n");
	printf("\n Min of first column : %d ",( (a[0][0]<a[1][0]) && (a[0][0]<a[2][0]) ) ? a[0][0] : ( (a[1][0]<a[2][0]) ? a[1][0] : a[2][0] ));
	printf("\n Min of second column : %d ",( (a[0][1]<a[1][1]) && (a[0][1]<a[2][1]) ) ? a[0][1] : ( (a[1][1]<a[2][1]) ? a[1][1] : a[2][1] ));
	printf("\n Min of third column : %d ",( (a[0][2]<a[1][2]) && (a[0][2]<a[2][2]) ) ? a[0][2] : ( (a[1][2]<a[2][2]) ? a[1][2] : a[2][2] ));

}
void revstr()
{
   char str[100];
    flushall();
     printf("\n\n Enter any string : ");
	gets(str);
     printf("\n\n String after reverse : ");
	puts(strrev(str));
}
void pallinstr()
{
   char str[100],str1[100];
   int res;
    flushall();
     printf("\n\n Enter any string : ");
	gets(str);
     strcpy(str1,str);
     res = strcmp(str1,strrev(str));
     if(res == 0)
	printf("\n\n String entered is pallindrome.");
     else
	printf("\n\n String entered is not pallindrome.");

}
void charcount()
{
   char str[100];
   int i,j,count;
     flushall();
      printf("\n\n Enter any string : ");
	 gets(str);
	for(i=0;i<strlen(str);i++)
	{
	  count=1;
	   for(j=i+1;j<strlen(str);j++)
	   {
	     if(str[i] == str[j])
	     {
	       count++;
	       str[j]=' ';
	     }
	   }
	   if(str[i] != ' ')
	      printf("\n %c = %d",str[i],count);
	}
}
void checkstr()
{
   char str[100],str1[100];
   int res;
    flushall();
     printf("\n\n Enter first string : ");
	gets(str);
     printf("\n\n Enter second string : ");
	gets(str1);
     res = strcmp(str,str1);
     if(res == 0)
	printf("\n\n Entered strings are same.");
     else
	printf("\n\n Entered strings are not same.");

}
void catstr()
{
   char str[100],str1[100];
    flushall();
     printf("\n\n Enter first string : ");
	gets(str);
     printf("\n\n Enter second string : ");
	gets(str1);
     strcat(str," ");
     strcat(str,str1);
     printf("\n\n String after joining : ");
	puts(str);

}
void zycus()
{

   char str[100];
   int i,j;
   char temp;
      flushall();
       printf("\n\n Enter any string : ");
	  gets(str);
       for(i=0 , j=(strlen(str)-1) ; i<=j ;)
       {
	 if(str[i] == ' ')
	 {
	   i++;
	 }
	 else if(str[j] == ' ')
	 {
	   j--;
	 }
	 else
	{
	   temp=str[i];
	   str[i]=str[j];
	   str[j]=temp;
	   i++;
	   j--;
	}
      }
      printf("\n\n string after : ");
	 puts(str);
}
void lsearch()
{
   int a[50],i,size,num,pos=0;
   flushall();
      printf("\n Enter size of array : ");
	 scanf("%d",&size);
      printf("\n Enter %d elements of array : ",size);
      for(i=0;i<size;i++)
      {
	scanf("%d",&a[i]);
      }
      printf("\n Enter number to be searched : ");
	 scanf("%d",&num);
      for(i=0;i<size;i++)
      {
	if(num == a[i])
	{
		pos = i+1;
		break;
	}
      }
      if(pos == 0)
	 printf("\n Number not found.");
      else
	 printf("\n Number found at position %d ",pos);
}
void bsearch()
{
   int a[50],i,mid,size,num,pos=0,beg,end;
   flushall();
      printf("\n Enter size of array : ");
	 scanf("%d",&size);
      printf("\n Enter %d elements of array in ascending order : ",size);
      for(i=0;i<size;i++)
      {
	scanf("%d",&a[i]);
      }
      printf("\n Enter number to be searched : ");
	  scanf("%d",&num);
      beg=0;
      end=size-1;
       while(beg <= end)
       {
	  mid=(beg+end)/2;
	  if(num == a[mid])
	  {
	     pos = mid+1;
	     break;
	  }
	  else if(num < a[mid])
	  {
	     end = mid - 1;
	  }
	  else
	  {
	     beg = mid + 1;
	  }
       }
      if(pos == 0)
	 printf("\n Number not found.");
      else
	 printf("\n Number found at position %d ",pos);
}
void inselement()
{
   int a[50],i,size,num,pos=0;
   flushall();
      printf("\n Enter size of array : ");
	 scanf("%d",&size);
      printf("\n Enter %d elements of array in ascending order : ",size);
      for(i=0;i<size;i++)
      {
	scanf("%d",&a[i]);
      }
      printf("\n Enter number to be inserted : ");
	 scanf("%d",&num);
      for(i=0;i<size;i++)
      {
	 if(num <= a[i])
	 {
	    pos = i;
	    break;
	 }
      }
      for(i=size;i>pos;i--)
      {
	 a[i] = a[i-1];
      }
      a[pos] = num;
      printf("\n List after insterting : ");
      for(i=0;i<=size;i++)
      {
	 printf("%d ",a[i]);
      }
}
void delelement()
{
   int a[50],i,size,num,pos=0;
   flushall();
      printf("\n Enter size of array : ");
	 scanf("%d",&size);
      printf("\n Enter %d elements of array : ",size);
      for(i=0;i<size;i++)
      {
	scanf("%d",&a[i]);
      }
      printf("\n Enter number to be deleted : ");
	 scanf("%d",&num);
      for(i=0;i<size;i++)
      {
	if(num == a[i])
	{
		pos = i+1;
		break;
	}
      }
      if(pos == 0)
	 printf("\n Number not found.");
      else
      {
	 printf("\n Number found at position %d \n",pos);
	 a[pos-1]=0;
	printf("\n List after deleting : ");
	  for(i=0;i<size;i++)
	  {
		if(a[i] != 0)
		printf("%d ",a[i]);
	  }
      }
}
void minmaxarray()
{
   int a[50],i,size,num,pos2=0,pos1=0,max,min;
   flushall();
      printf("\n Enter size of array : ");
	 scanf("%d",&size);
      printf("\n Enter %d elements of array : ",size);
      for(i=0;i<size;i++)
      {
	scanf("%d",&a[i]);
      }
      max = a[0];
      min = a[0];
      for(i=1;i<size;i++)
      {
	 if(a[i] > max)
	 {
	    max = a[i];
	    pos1 = i;
	 }
	 if(a[i] < min)
	 {
	    min = a[i];
	    pos2 = i;
	 }
      }
      printf("\n Maximum element of array is %d at position %d ",max,pos1+1);
      printf("\n Minimum element of array is %d at position %d ",min,pos2+1);
}
void bubblesort()
{
    int a[50],i,size,j,temp;
   flushall();
      printf("\n Enter size of array : ");
	 scanf("%d",&size);
      printf("\n Enter %d elements of array : ",size);
      for(i=0;i<size;i++)
      {
	scanf("%d",&a[i]);
      }
       printf("\n\n Array before sort : ");
      for(i=0;i<size;i++)
      {
	printf("%d ",a[i]);
      }
      for(i=0;i<size;i++)
      {
	 for(j=0;j<size;j++)
	 {
	     if(a[j] > a[j+1])
	     {
		temp = a[j];
		a[j] = a[j+1];
		a[j+1] = temp;
	     }
	 }
      }
      printf("\n\n Array after sort : ");
      for(i=0;i<size;i++)
      {
	printf("%d ",a[i]);
      }
}