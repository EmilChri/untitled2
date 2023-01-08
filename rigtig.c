#include <stdio.h>

int main(void) {
    int i, s, m, h, d, w;
/* i for input, s for seconds, m for minutes, h hours, d for days, w for weeks*/

    printf("What would you like to convert? insert 1 for seconds to weeks, insert 2 for weeks to seconds:\n");
    scanf("%d", &i);
    if (i==1){
        printf("Please state number of seconds: \n");
        scanf("%d", &i);
        m = i / 60;
        s = i % 60;
        h = m / 60;
        m = m % 60;
        d = h / 24;
        h = h % 24;
        w = d / 7;
        d = d % 7;

        printf("%d seconds is the same as:\n Weeks=%d\n Days=%d\n Hours=%d\n Minutes=%d\n Seconds=%d\n", i, w, d, h, m,s);
    }
    else if(i==2){
        printf("Please state number of weeks: \n");
        scanf("%d", &i);

        s=i*7*24*60*60;

        printf("%d seconds\n",s);
    }
    else{
        printf("NEJ NEJ NEJ\nDu skal skrive 1 eller 2 ind for helvede!");
    }
}