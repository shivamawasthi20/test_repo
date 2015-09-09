#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long int prodOdd(double );
int gcd(int ,int );

long int prod=1;

int main() {

    int n,x,y,i;
    long int n1;
   long int max=1;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
        {
        scanf("%d",&x);
        
        
        n1=prodOdd(x);
        
        if(n1>max)
            {
            max=n1;
        }
        
    }
   
    
    long int range=max*5;
    
   
    //find x & y
    
     int j,max1=1,n3,n4,sum=0;
    for(i=2;i<range;i++)
    {
        for(j=2;j<range;j++)
        {
            if(gcd(i,j)==max)
                {
                    sum=i+j;
                    if(sum>max1)
                    {
                        max1=sum;
                        n3=i;
                        n4=j;
                    }
                }
                
        }
    }
    printf("%d %d",n3 ,n4);
    
    
    
    
    
    
    
    return 0;
}


int gcd(int x,int y) {
  int a, b, t, gcd, lcm;
 
  a = x;
  b = y;
 
  while (b != 0) {
    t = b;
    b = a % b;
    a = t;
  }
 
  gcd = a;
  lcm = (x*y)/gcd;
 
 
  return gcd;
}

long int prodOdd(double n)
{
    
    double n1,n2,n3,n4;
    n2=ceil(n/5);
    n3=ceil(n/10);
    n4=ceil(n/4);
    
    n1=pow(2,n4);
    
    if(n==0|| n==1 || n==2)
        return 1;
        
        else if(n==3)
            return 3;
        
        else
            prod=n1*prodOdd(n2)*prodOdd(n3);
            
            
            return prod;
    
    
}





