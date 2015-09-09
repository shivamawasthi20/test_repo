#include <stdio.h>
#include <math.h>

int gcd(int,int);

int main()
{
    
    int i,j,max=1,n1,n2,sum=0;
    for(i=2;i<240;i++)
    {
        for(j=2;j<240;j++)
        {
            if(gcd(i,j)==48)
                {
                    sum=i+j;
                    if(sum>max)
                    {
                        max=sum;
                        n1=i;
                        n2=j;
                    }
                }
                
        }
    }
    printf("%d %d",n1 ,n2);
    
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
