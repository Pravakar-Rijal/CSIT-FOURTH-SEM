#include <stdio.h>
#include <stdlib.h>
int main()
{
   int s,e,n,d,m,o,r,y;
    while (1)
    {
    for (s=0;s<10;s++) 
    {
    for (e=0;e<10;e++) 
    {
    for (n=0;n<10;n++) 
    {
    for (d=0;d<10;d++) 
    {
    for (m=0;m<10;m++) 
    {
    for (o=0;o<10;o++) 
    {
    for (r=0;r<10;r++) 
    {
    for (y=0;y<10;y++) 
    {
    if(s!=e&&s!=n&&s!=d&&s!=m&&s!=o&&s!=r&&s!=y)
    {
    if(e!=s&&e!=n&&e!=d&&e!=m&&e!=o&&e!=r&&e!=y)
    {
	if(n!=s&&n!=e&&n!=d&&n!=m&&n!=o&&n!=r&&n!=y)
    {
    if(d!=s&&d!=e&&d!=n&&d!=m&&d!=o&&d!=r&&d!=y)
    {
    if(m!=s&&m!=e&&m!=n&&m!=d&&m!=o&&m!=r&&m!=y)
    {
    if(o!=s&&o!=e&&o!=n&&o!=d&&o!=m&&o!=r&&o!=y)
    {
	if(y==(d+e)%10)
    {
    if(e==((n+r)+(d+e)/10)%10)
    {
    if(n==((e+0)+((n+r)+(d+e)/10)/10)%10)
    {
    if(o==((s+m)+((e+0)+((n+r)+(d+e)/10)/10)/10)%10)
    {
    if(m==((s+m)+((e+0)+((n+r)+(d+e)/10)/10)/10)/10)
    {
    printf("%d %d %d %d\n",s,e,n,d);
    printf("%d %d %d %d\n",m,o,r,e);
    printf("%d %d %d %d %d\n",m,o,n,e,y);
	exit(1);   
    }
	}
    }
    }
    }
    }
    
	}   
    }
    }
    }
    }
    
	}
    }
    }
    }
	}
	}
	}
	}
    
	}
    return 0;
}
