#include <stdio.h>
#include <math.h>
#include <string.h>
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int n,i;
    double sum=0,sum1=0,sum2=0;
    scanf("%d",&n);
    int s[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
        sum+=s[i];
    }
    sort(s,s+n);
    for(i=0;i<n/2;i++)
    {
        sum1+=s[i];
    }
    sum2=sum1+s[i];
    if(n%2==0)
    {
        printf("Outgoing #: %d\nIntroverted #: %d\nDiff = %.0f",n/2,n/2,fabs(2*sum1-sum));
    }
    else
    {     if(fabs(2*sum1-sum)>fabs(2*sum2-sum))
    {
        printf("Outgoing #: %d\nIntroverted #: %d\nDiff = %.0f",n-n/2,n/2,fabs(2*sum1-sum));
    }
    else
    {
        printf("Outgoing #: %d\nIntroverted #: %d\nDiff = %.0f",n/2+1,n-n/2-1,fabs(2*sum2-sum));
    }
        
    }
    
    return 0;
}
