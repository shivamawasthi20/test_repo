#include<stdio.h>

void main()
{
	char *s1="MON";
	char *s2="TUE";
	char *s3="WED";
	char *s4="THU";
	char *s5="FRID";
	char *s6="SAT";
	char *s7="SON";
	
	char *arr[]={s1,s2,s3,s4,s5,s6,s7};
	int i=0;
	
	for(i=0;i<7;i++)
	printf("%s\n",arr[i]);



}
