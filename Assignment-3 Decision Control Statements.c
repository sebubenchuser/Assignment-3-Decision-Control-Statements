
                                        //Assignment - 3  ( Decision Control Statements )

//1. Write a program to check whether a given number is positive or non-positive.

     /*#include<stdio.h>
     int main()
     {
         int n;
         printf("Enter a number");
         scanf("%d",&n);
         if(n>=0)
         printf("number is positive");
         else
         printf("number is negative");
         return 0;
     }*/

//2. Write a program to check whether a given number is divisible by 5 or not.

     /*#include<stdio.h>
     int main()
     {
         int n;
         printf("Enter a number");
         scanf("%d",&n);
         if(n%5==0)
         {
             printf("number is divisible by 5");
         }
         else
         printf("number is not divisible by 5");

         return 0;
     }*/

//3. Write a program to check whether a given number is an even number or an odd  number.

     /*#include<stdio.h>
     int main()
     {
         int n;
         printf("Enter a number");
         scanf("%d",&n);
         if(n%2==0)
         {
             printf("number is an even");
         }
         else
         printf("number is an odd");

         return 0;
     }*/


//4. Write a program to check whether a given number is an even number or an odd  number without using % operator.

      /*#include<stdio.h>
      int main()
      {
          int n;
          printf("Enter a number");
          scanf("%d",&n);
          if(n==(n/2*n))
          {
              printf("number is even");
          }
          else
          {
          printf("number is odd");
          }
          return 0;
      }*/

//5. Write a program to check whether a given number is a three-digit number or not.

    /*#include<stdio.h>
    int main()
    {
        int n,c=0;
        printf("Enter a number");
        scanf("%d",&n);
        while(n>0)
        {
           c++;
           n=n/10;
        }
        if(c==3)
        {
            printf("number is a three-digit number");
        }
        else
        printf("number is not a three-digit number");
        return 0;
    }*/


//6. Write a program to print greater between two numbers. Print one number of both are  the same.

     /*#include<stdio.h>
     int main()
     {
         int n,m;
         printf("Enter two numbers");
         scanf("%d%d",&n,&m);
         if(n==m)
         {
             printf("1");
         }
         else
         {
         if(n>m)
         {
             printf("%d is greater between two numbers",n);
         }
         else
          printf("%d is greater between two numbers",m);
         }
         return 0;
     }*/


//7. Write a program to check whether roots of a given quadratic equation are real &  distinct, real & equal or imaginary roots

      /*#include<stdio.h>
      int main()
      {
          int a,b,c,s;
          printf("Enter quadratic equation value");
          scanf("%d%d%d",&a,&b,&c);
          s=b*b-4*a*c;
          if(s>0)
          {
              printf("quadratic equation are real &  distinct");
          }
          else
          {
              if(s==0)
              {
                  printf("quadratic equation are real &  equal");
              }
              else
              {
                  if(s<0)
                  printf("quadratic equation are  imaginary roots");
              }
          }
      }*/



//8. Write a program to check whether a given year is a leap year or not.

     /*#include<stdio.h>
     int main()
     {
         int y;
         printf("Enter a year");
         scanf("%d",&y);
         if(y%100==0)
         {
            if(y%400==0)
            {
                printf("leap year");
            }
            else
            printf("is not leap year");
         }
         else
         {
            if(y%4==0)
            printf("leap year");
            else
            printf("is not leap year");
         }
         return 0;
     }*/

//9. Write a program to find the greatest among three given numbers. Print number once  if the greatest number appears two
 //   or three times.

/* #include<stdio.h>
 int main()
 {
     int x,y,z;
     printf("Enter three numbers");
     scanf("%d%d%d",&x,&y,&z);
     if(x>y&&x>z)
     {
         printf("%d",x);
     }
     else
     {
         if(y>z)
         {
             printf("%d",y);
         }
         else
         printf("%d",z);
     }
     return 0;
 }*/

//10. Write a program which takes the cost price and selling price of a product from the  user. Now calculate and print
 //   profit or loss percentage.

 /*#include<stdio.h>
 int main()
 {
     int c,s;
     float p;
     printf("Enter cost price");
     scanf("%d",&c);
     printf("Enter selling price");
     scanf("%d",&s);

     if(c<s)
     {
          p=(s-c)*100.0/s;
         printf("profit is=%f%%",p);
     }
     else
     {
        p=(c-s)*100.0/c;
        printf("loss is=%f%%",p);
     }
     return 0;
 }*/



//11. Write a program to take marks of 5 subjects from the user. Assume marks are given  out of 100 and passing marks is 33.
//    Now display whether the candidate passed the  examination or failed.

     /*#include<stdio.h>
     int main()
     {
         int math,chem,phy,bang,eng;
         printf("Enter 5 subject marks");
         scanf("%d%d%d%d%d",&math,&chem,&phy,&bang,&eng);
         if(math>=33&&chem>=33&&phy>=33&&bang>=33&&eng>=33)
         {
             printf("Passed");
         }
         else
         printf("Failed");
         return 0;
     }*/

//12. Write a program to check whether a given alphabet is in uppercase or lowercase.

     /*#include<stdio.h>
     int main()
     {
         char a;
         printf("Enter a alphabet");
         scanf("%c",&a);
         if(a>='a'&&a<='z')
         printf("lowercase");
         else
         printf("uppercase");
     }*/

//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.

  /*#include<stdio.h>
  int main()
  {
      int n;
      printf("Enter a number");
      scanf("%d",&n);
      if(n%3==0&&n%2==0)
      {
          printf("divisible by 3 and divisible by 2");
      }
      else
      printf("is not divisible by 3 and divisible by 2");
  }*/

//14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

      /*#include<stdio.h>
      int main()
      {
          int n;
          printf("Enter a number");
          scanf("%d",&n);
          if(n%7==0||n%3==0)
          printf("divisible by 7 or divisible by 3.");
          else
          printf("is not divisible by 7 or divisible by 3.");
      }*/


//15. Write a program to check whether a given number is positive, negative or zero.

   /* #include<stdio.h>
    int main()
    {
        int n;
        printf("Enter a number");
        scanf("%d",&n);
        if(n==0)
        {
            printf("zero");
        }
        else
        {
            if(n>0)
            printf("positive");
            else
            printf("negative");
        }
    }*/

//16. Write a program to check whether a given character is an alphabet (uppercase), an  alphabet (lower case),
 //   a digit or a special character.

 /*#include<stdio.h>
 int main()
 {
     char a;
     printf("enter any character");
     scanf("%c",&a);
     if(a>='a'&&a<='z')
     {
         printf("alphabet (lower case)");
     }
     else
     {
     if(a>='A'&&a<='Z')
     printf("alphabet (uppercase)");
     else
     {
         if(a>='0'&&a<='9')
         printf("a digit");
         else
         printf("special character.");
     }

     }
 }*/


//17. Write a program which takes the length of the sides of a triangle as an input. Display  whether the triangle is valid or not.

    /*#include<stdio.h>
     int main()
     {
         int a,b,c;
         printf("Enter 3 sides of a triangle ");
         scanf("%d%d%d",&a,&b,&c);
         if(a+b>c&&a+c>b&&c+b>a)
         {
             printf("triangle is valid");
         }
         else
         printf("triangle is not valid");
     }*/


//18. Write a program which takes the month number as an input and display number of  days in that month

      #include<stdio.h>
      int main()
      {
          int m;
          printf("Enter month number");
          scanf("%d",&m);
          if(m==1)
          {
              printf("31");
          }
          else
          {
              if(m==2)
              printf("28");
              else
              {
                  if(m==3)
                  {
                      printf("31");
                  }
                  else
                  {
                    if(m==4)
                     {
                      printf("30");
                     }
                     else
                     {
                         if(m==5)
                         printf("31");
                         else
                         {
                             if(m==6)
                             printf("30");
                             else
                             {
                                 if(m==7)
                                 {
                                     printf("31");
                                 }
                                 else
                                 {
                                     if(m==8)
                                     printf("31");
                                     else
                                     {
                                         if(m==9)
                                         printf("30");
                                         else
                                         {
                                             if(m==10)
                                             printf("31");
                                             else
                                             {
                                                 if(m==11)
                                                 printf("30");
                                                 else
                                                 {
                                                     if(m==12)
                                                     printf("31");
                                                 }
                                             }
                                         }
                                     }
                                 }
                             }
                         }
                     }
                  }
              }
          }
      }



