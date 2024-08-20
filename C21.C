                             /*LOOPS/*

#include<stdio.h>
int main(){
int i=0,num;
while (i<10 )
{
    printf("value of 'I' %d and \n enter one number \n",i);
    scanf("%d",&num);
    if(num==10){
        continue;
    }
    printf("hello world\n");
    i++;
}
    return 0;
}*/

#include<stdio.h>
int main(){
int i=0,num;
while (i<10 )
{
    printf("value of 'I' %d and \n enter one number \n",i);
    scanf("%d",&num);
    if(num==10){
        break;
    }
    printf("hello world\n");
    i++;
}
    return 0;
}