#include<stdio.h>
/*
*Time:2019.12.7
*Function:指针
*/
void prt(int(*p)[3],int len)
{
   int i,j;
   for(i=0;i<len;i++)
   {
       for(j=0;j<3;j++)
       {
           printf("%3d",p[i][j]);
       }
       pubchar('\n');
    }
}
int main()
{
    int a[][3]={1,2,3,4,5,6,7,8,9}; //定义一个二维数组a
    int (*p)[3]=a;  //定义一个二维数组指针
    
    printf("%p\n",&a[2][2]);  //输出数组a[2][2]这个元素的地址
    printf("%p\n",*(&a+1));   //输出数组a[][3]中的第二个元素的地址的值
    printf("%p\n",*(&p+1));   //输出数组a[][3]中的第二个元素的地址的值
    
    prt(p,3);
    return 0;
}
       
        
