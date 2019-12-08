#include <stdio.h>

/*
*Time：2019.12.8
*Function：数组指针
*Autor：Queenie Hailey
*/

int main()
{
   int a[][3]={{1,2,3},{4,5,6},{7,8,9}};
   int (*p)[3]=a;//数组指针
   //p == a 
   //p+1 == a+1
   //*p == *a
   //*(p+n) == *(a+n)
   //*(p+n)+m == *(a+n)+m
   //*(*(p+n)+m) == *(*(a+n)+m) == a[n][m]

   printf("%p\n",a);
   printf("%p\n",a+1);
   
   printf("%p\n",p);
   printf("%p\n",p+1);

   puts("************************************\n");
   printf("%p\n",*p);
   printf("%p\n",*a); //a[0]
   
   puts("************************************\n"); 
   printf("%p\n",*(p+1);//a[1]
   printf("%p\n",*(a+1);//a[1]
   
   puts("************************************\n");
   printf("%p\n",*(p+1)+1); //a[1]+1
   printf("%p\n",*(a+1)+1); //a[1]+1
   
   puts("************************************\n");
   printf("%d\n",*(*(p+1)+1) ); //*(a[1]+1)
   printf("%d\n",*(*(a+1)+1) ); //*(a[1]+1)

   return 0;
}














