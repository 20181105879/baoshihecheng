#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int s[11000]={0};
        int m,k;
        scanf("%d",&m);
        for(int j=0;j<m;j++)
        {
            int a,b;
            scanf("%d%d",&a,&b);
            s[a]=s[a]+b;
        }
        for(k=1;k<10100;k++)
        {
            int t=s[k]/3;
            s[k]=s[k]%3;
            s[k+1]=s[k+1]+t;
        }
        int sum=0;
        for(k=1;k<10100;k++)
        {
            if(s[k]!=0)
            {
                sum+=s[k];
            }
        }
        
        printf("Case #%d:\n%d\n",i+1,sum);
    }
    
    
    
    return 0;
}
