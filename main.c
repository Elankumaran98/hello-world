//*****
//*   *
//*   *
//*   *
//*****
/*
#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        if(i==1||i==5)
        {
           for(j=1;j<=5;j++)
           {
               printf("*");
           }
        }
        else
        {
            for(j=1;j<=5;j++)
            {
                if(j==1||j==5)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
//////////////////////////////////////////////////
#include <stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=4;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=(2*i)-1;k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main()
{
    int n,m,i,j,k;
    float a,b,c;
    printf("How many subjects in your class:");scanf("%d",&m);
    printf("How many students in your class:");scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Sub 1 marks=");scanf("%f",&a);
        printf("Sub 2 marks=");scanf("%f",&b);
        printf("Sub 3 marks=");scanf("%f",&c);
    }
    for(i=1;i<=n;i++)
    {
        printf("\nSub 1 marks=%0.2f",a);
        printf("\nSub 2 marks=%0.2f",b);
        printf("\nSub 3 marks=%0.2f",c);
    }
    return 0;
}
/////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100],n,i;
    printf("How many numbers in to array:");scanf("%d",&n);
    printf("Your numbers :\n");
    for(i=0;i<n;i++)
    {
        scanfd("%d",a[i])
    }
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
}
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[100][100],m,n,i,j;
    printf("How many columns you want:");scanf("%d",&m);
    printf("How many rows you want:");scanf("%d",&n);
    printf("Enter the matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Your matrix:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
-----------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
void add(float i,float j)
{
    float k;
    k=i+j;
    printf("no 1:%f\n",i);
    printf("no 2:%f\n",j);
    printf("Answer=%0.2f\n",k);
}
void sub(float i,float j)
{
    float k;
    k=i-j;
    printf("no 1:%f\n",i);
    printf("no 2:%f\n",j);
    printf("Answer=%0.2f\n",k);
}
void multi(float i,float j)
{
    float k;
    k=i*j;
    printf("no 1:%f\n",i);
    printf("no 2:%f\n",j);
    printf("Answer=%0.2f\n",k);
}
void d(float i,float j)
{
    float k;
    k=i/j;
    printf("no 1:%f\n",i);
    printf("no 2:%f\n",j);
    printf("Answer=%0.2f\n",k);
}
int main()
{
    float i,j;
    int n;
    printf("What function you like[add=1/sub=2/multi=3/div=4]");scanf("%d",&n);
    printf("Enter no 1:");scanf("%f",&i);
    printf("Enter no 2:");scanf("%f",&j);
    switch(n)
    {
        case 1:add(i,j);break;
        case 2:sub(i,j);break;
        case 3:multi(i,j);break;
        case 4:d(i,j);break;
        default:printf("please enter correct function");break;
    }
}
?????????????????????????????????????????????????????????????????????
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int starting_date,date,i,j,k,l;
    printf("How many date in this month:");scanf("%d",&date);
    printf("Which date start thus month[Mon-1/Tue-2/Wed-3/Thu-4/Fri-5/Sat-6/Sun-7]:");scanf("%d",&starting_date);
    printf("\t\t\tThis month\n");
    printf("\t\t\t==========\n");
    printf("\tMon\tTue\tWed\tThu\tFri\tSat\tSun\n");

    for(j=0,l=1;j<starting_date;j++,l++)
    {
        printf("\t");
    }
    for(k=1;k<=date;k++)
    {
        if(l==8)
        {
            printf("\n");
        }
        printf("%d\t",k);
    }
}
.........................................................
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char ch,s[20],sen[100];
    char t;
    scanf("%c",&t);
    scanf("%c", &ch);
    scanf("%s", &s);
    scanf("%[^\n]%*c", &sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s\n",sen);
    return 0;
}
*/


#include<stdio.h>
#include<stdlib.h>
typedef struct detail{
    float marks;
    char name[50];
}details;
int main(){
    details student[100];
    FILE *f1;
    f1 = fopen("text1.txt","w+");
    int i=0, count = 0;
    while(fscanf(f1,"%f %49s",&student[i].marks,student[i].name) != EOF){
        i++;
        count++;
    }
    float max = student[0].marks;
    for(int i=0; i<count; i++){
        if(student[i].marks > max)
            max = student[i].marks;
    }
    printf("The highest GPA is %.2f and\nthe students with that GPA are\n",max);
    for(int i=0; i<count; i++){
        if(student[i].marks == max)
            printf("\t%s\n",student[i].name);
    }
    fclose(f1);
}
