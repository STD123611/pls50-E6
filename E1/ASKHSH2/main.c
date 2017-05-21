#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

char c;
while (1) /*DEN 3erw giati den dexetai tin TIMH 'true' STH C DEN YPARXEI true... */
    {
    printf ("menu \n");
    printf( "0  E3odos\t  1 tetragwno\t  2 or8ogwnio trigwno \t 3 parallilogrammo \t  4 kyklos\t\n");
    printf ("DWSE TIMH\n");
     scanf (" %c", &c); /* to keno prin to %c, ANAIREI neoys xarakthres....*/
     if (c =='0') { return 0;}
     if (c =='1') {
        char c1;
        while (c1 != '0') {
            printf ("TETRAGWNO, EPELE3E ENTOLH\n");
            printf ("0 E3ODOS \t  1 YPOLOGISMOS PERIMETROY\t\n");
                 /* printf ("DWSE TIMH PLEYRAS TETRAGWNOY\n"); */
            scanf (" %c", &c1);
           //tin RETURN THN KALOYME MIA FORA!!!! H' OTAN 8ELOYME NA TELEIWSEI to PROGRAMMA!!!!!!

            if (c1=='1')  {
                float a;
                printf  ("DWSE TIMH PLEYRAS TETRAGWNOY\t");
                scanf (" %f", &a);
                printf ("H PRIMETROS TOY TETRAGWNOY einai\t%f \n", 4*a);
                }

        }
     }
    if (c =='2') {
         char c2;
         while (c2 !='0') {
            printf ("ORTHOGWNIO TRIGWNO, EPELE3E ENTOLH\t\n");
            printf ("0 E3ODOS\t   1 YPOLOGISMOS PERIMETROY\t\n");
            scanf (" %c", &c2);

           // if (c2=='0') {return (0);}
            if (c2=='1') {
                float x, y;
                printf ("DWSE TIMES MHKOYS end PLATOYS ORTHOGWNIOY TRIGWNOY\n");
                scanf (" %f  %f", &x, &y);
                printf ("H PERIMETROS toy ORTHOGWNIOY TRIGWNOY einai\t %f \n", x+y+sqrt(x*x+y*y));

                }

            }


                }
    if (c =='3') {
         char c3;
         while (c3 !='0') {
            printf ("PARALLHLOGRAMMO, EPELE3E ENTOLH\t\n");
            printf ("0 E3ODOS\t   1 YPOLOGISMOS PERIMETROY\t\n");
            scanf (" %c", &c3);

            //if (c3=='0') {return (0);} bgainei, giati mas vgazei ektos programmatos
            if (c3=='1') {
                float b, d;
                printf ("DWSE TIMES MHKOYS end PLATOYS PARRALHLOGRAMMOY\n");
                scanf (" %f  %f", &b, &d);
                printf ("H PERIMETROS toy PARRALHLOGRAMMOY einai\t %f \n", 2*b+2*d);
                }
         }








    }
    if (c =='4') {

        char c4;
        while (c4 !='0')  {
            printf ("KYKLOS, EPELE3E ENTOLH\t\n");
            printf ("0 E3ODOS\t   1 YPOLOGISMOS PERIMETROY\t\n");
            scanf (" %c", &c4);


            if (c4=='1') {
                float z;
                printf ("DWSE TIMH AKTINAS KYKLOY\n");
                scanf (" %f", &z);
                printf ("H PERIMETROS toy KYKLOY einai\t %f \n", z*2*3.1415);
                }
         }





                }

    }
    }
//}



/*Ebala tin vivlio8iki math.h, giati diaforetika o ypologismos tis tetragwnikhs rizas, ginetai kata proseggisi
kai me oxi swsto tropo.
 /*

na orisw to  PI ?
#define PI 3.1415926
DEN einai anagkh na to balw, giati xrisimopoieitai mono mia fora....
 */






















 /*
 Να γράψετε πρόγραμμα στη γλώσσα προγραμματισμού C που
•	θα υπολογίζει την περίμετρο των ακόλουθων γεωμετρικών σχημάτων: τετράγωνο,  παραλληλόγραμμο, ορθογώνιο τρίγωνο και  κύκλος.
Το πρόγραμμά σας πρέπει
•	να εμφανίζει στο χρήστη μενού επιλογών για επιλογή του σχήματος που τον ενδιαφέρει (0. έξοδος, 1. τετράγωνο, 2. παραλληλόγραμμο, 3. ορθογώνιο τρίγωνο,  4. κύκλος),
•	να διαβάζει την επιλογή του χρήστη με τη συνάρτηση scanf() και με διαδοχικές εντολές if να ξεχωρίζει την επιλογή του,
•	ανάλογα με την επιλογή του χρήστη
o	να ζητά, κατά περίπτωση, τις εξής διαστάσεις: για το τετράγωνο το μήκος της πλευράς του, για το παραλληλόγραμμο το μήκος και το πλάτος του, για το ορθογώνιο τρίγωνο το μήκος των δύο κάθετων πλευρών του, για τον κύκλο την ακτίνα του,
o	να καλεί την αντίστοιχη συνάρτηση υπολογισμού της περιμέτρου (θα πρέπει να φτιάξετε ξεχωριστή συνάρτηση για το κάθε σχήμα) περνώντας της τις διαστάσεις του σχήματος ως ορίσματα,
•	η κληθείσα συνάρτηση να υπολογίζει την περίμετρο του σχήματος και να την επιστρέφει στο κυρίως πρόγραμμα, το οποίο να την τυπώνει στην οθόνη μαζί με επεξηγηματικό μήνυμα (π.χ. η περίμετρος του κύκλου είναι: …).
Η λειτουργία του προγράμματός σας θα επαναλαμβάνεται μέχρι ο χρήστης να επιλέξει 0 (έξοδος) από τη λίστα επιλογών.
Υπόδειξη: Για την ανάγνωση ενός μεμονωμένου χαρακτήρα με τη scanf(), π.χ. της επιλογής χρήστη στη μεταβλητή choice, αν βάλετε ένα κενό πριν το %c στη συμβολοσειρά μορφοποίησης, δηλαδή scanf(" %c", &choice); αντί scanf("%c", &choice);, η scanf() θα προσπεράσει τυχόν σύμβολα «κενού χώρου» (white space), όπως κενά, ή αλλαγές γραμμής που τυχόν προηγούνται του χαρακτήρα που θέλετε να διαβάσετε. Π.χ. διαβάζοντας με τη scanf() την επιλογή του χρήστη και μετά έναν αριθμό, την επόμενη φορά που θα καλέσετε τη scanf() για την επιλογή του χρήστη θα έχει περισσέψει αδιάβαστη η αλλαγή γραμμής (σύμβολο «κενού χώρου») που πληκτρολογήσατε μετά τον αριθμό. Η χρήση του κενού πριν το %c στη συμβολοσειρά μορφοποίησης θα προσπεράσει την αλλαγή γραμμής και η scanf()θα διαβάσει σωστά την επόμενη επιλογή του χρήστη. Αν δεν υπάρχει σύμβολο «κενού χώρου» πριν το χαρακτήρα που θέλετε να διαβάσετε, η χρήση του κενού πριν το %c στη συμβολοσειρά μορφοποίησης δε θα δημιουργήσει πρόβλημα.

*/
