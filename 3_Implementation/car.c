#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#include"car.h"
int main()
{
    int q,p=0,g,h;
    for(g=1;g<=365;g++)
    {
        for(h=1;h<=10;h++)
        {
            printf("\nIS THERE A NEW CUSTOMER NOW??\nENTER 1 FOR YES AND 0 FOR NO\n");
            scanf("%d",&p);
            if(p==1)
            {
                label:
                printf("\aHI!! ARE YOU HERE TO TAKE THE CAR SERVICE OR RETURN BACK THE CAR? \n 1.WANT TO RENT A CAR.\n 2.WANT TO RETURN THE CAR.\n");
                scanf("%d",&q);
                switch(q)
                {
                    case 1:{car_rent();u++;z++;
                    break;}
                    case 2:car_return();
                    break;
                    default:{printf("Wrong choice!! Try again.\n");
                    goto label;}
                }
            }
        }
        printf("\n\n\nBYE!!Today's work is over\a\n\n\n");
    }
}
