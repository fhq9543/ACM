#include"stdio.h"
#include"string.h"
#define N 1000

int main()
{
    int i,z,o,j,c;
    int a,b,d;
    char p[N];
    while(1)
    {
        c=0;
        z=o=j=0;
        a=b=d=0;
        scanf("%s",p);
        if(p[0]=='E')
            return 0;
        c=strlen(p);
        for(i=0;i<c;i++)
        {
            if(p[i]=='Z')
                z++;
            if(p[i]=='O')
                o++;
            if(p[i]=='J')
                j++;
        }
    //    printf("%d  %d  %d  ",z,o,j);
        while(a<z||b<o||d<j)
        {
            if(a<z)
            {
                a++;
                printf("Z");
            }
            if(b<o)
            {
                b++;
                printf("O");
            }
            if(d<j)
            {
                d++;
                printf("J");
            }
        }
        printf("\n");

    }
    return 0;
}
