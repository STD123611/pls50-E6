#include <stdio.h>
#include <stdlib.h>

/*
ari8mos_pra3i_ariumos
*/

int main()
{
    float a, b;
    char i ;
        printf ("DWSE ARI8MO  PRA3H  ARI8MO \n "  );
    scanf("%f %c %f", &a, &i ,&b);

    if (i=='+') {
         float s=(a+b);
            printf ("to apotelesma tis pros8esis  "  );
         printf ("%f", s);
    }
    if (i=='-') {
            printf ("to apotelesma tis afairesis  "  );
        float d=(a-b);
        printf ("%f", d);

    }
    if (i=='*') {
            printf ("to apotelesma tou pollaplasiasmoy  "  );
        float m=(a*b);
        printf ("%f", m);

    }
/* gia double stis times bazoyme: %lf KAI OXI %f

stis float kanonika %f  ) */


    if (i=='/') {
/* bgazei ari8mo san apotelesma diaforetiko toy 0, ypologizei to dia 0 */
            if (b==0.0) { printf ("adynato apotelesma");
            return 0; }
                printf ("to apotelesma tis diairesis  "  );
        float x=(a/b);
        printf ("%f", x);

    }

        if (i!='+'  && i!='-' && i!='*' && i!='/') {printf ("AGNVSTH PRA3H");
        return 0;}

    return 0;
}
