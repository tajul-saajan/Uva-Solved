#include <stdio.h>
 int main()
 {
     char love[]={"I LOVE RASNA"};
     int i;
     printf("%s\n",love);
     for(i=0;i<12;i++) {
        if(love[i]>=65 && love[i]<=90) {
            love[i]='a'+(love[i]-'A');
        }
     }
     printf("%s\n",love);
     return 0;
 }
