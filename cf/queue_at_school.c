#include<stdio.h>
#include<strlen.h>
void swap(int *p,int *q)
{
    int hold=*p;
    *p=*q;
    *q=hold;
}

int main()
{
    int n,t,iflag=0;


