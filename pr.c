#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <time.h>



int cryptorep(){
  char * rep [31];
  rep [29]="eur";
  rep [4]="e";
  rep [25]="en";


  rep [0]="e";
  rep [15]="o";


  rep [19]="a";

  rep [2]=" ";
  rep [12]="au";

  rep [3]="r";
  rep [5]="n";
  rep [27]="hau";

  rep [6]="t";
  rep [8]="a";
  rep [9]="n";
  rep [10]="t";

  rep [1]="n";

  rep [11]=" ";
  rep [13]=" ";
  rep [14]="f";
  rep [16]="n";
  rep [18]=" ";
  rep [20]=" ";
  rep [22]="oi";
  rep [23]="te";
  rep [24]=" ";
  rep [26]=" ";
  rep [28]="t";
  rep [30]="!";
  rep [21]="dr";
  rep [7]="r";
  rep [17]="d";




  printf("\n");
  printf("\n");
  printf("WINNER\n");
  printf("\n");

  printf("%s","Dans le commu ");
  for (size_t i = 0; i < 31; i++) {
      printf("%s",rep[i]);
  }
  printf("\n");
  printf("\n");


  return 0;
}

int  main(int argc,char *argv[]){


  char *  numerique= "1000";
  char * loser0 = "HA-HA Loser\n";
  char * loser1 = "Verena prends dans le cul \n";
  char * loser2 = "Benoit t'es trop beau \n ";
  char * loser3 = "Vous êtes au courant que c'est un ex de première et que vous badez?\n ";
  char * loser4 = "Ben t'es un viel homme \n";
  char * loser5 = "BONNE REPONSE !! Vos clés sont situés dans vos culs /s \n";
  char * loser6 = "Vous êtes vraiment mauvais. A chier, comme vos vies\n";
  char * loser7 = "Plantation du rhododendron : L une des choses les plus importantes dans la plantation du rhododendron c’est qu il a besoin de terre de bruyere et d’un sol bien drainé. Si vous avez une terre calcaire, il vaut mieux creuser un trou de taille plus importante afin d y apporter le maximum de terre de bruyère.\n Le rhododendron tolère l ombre, la mi-ombre et même le soleil même si il redoute les situations trop brulantes.\n Il est recommandé de planter le rhododendron à l automne.\n Plantation toleree au printemps ou en hiver mais en dehors des périodes de gel.\n Si vous souhaitez planter l ete, prévoyez un arrosage régulier et conséquent la première année suivant la plantation.\n Choisissez de préférence un endroit partiellement ombrage ou ensoleille mais jamais brulant \n Evitez à tout prix les zones régulierement inondees car cet arbuste craint l eau stagnante.\n Suivez nos conseils de plantation des plantes de terre de bruyere\n ";

  char * hint = "Isabelle";


  if (strcmp(argv[1],numerique)==0){
/*    for (size_t i = 0; i < 4; i++) {
      printf("%x", readingreg[0]);

    }
    */
     cryptorep();
     return 55555;
    }
  if(strcmp(argv[1],hint)==0){
    cryptorep();
  }
  else {
    int i = time(NULL) %8;
    if (i==0){printf("\n%s\n",loser0);}
    if (i==1){printf("\n%s\n",loser1);}
    if (i==2){printf("\n%s\n",loser2);}
    if (i==3){printf("\n%s\n",loser3);}
    if (i==4){printf("\n%s\n",loser4);}
    if (i==5){printf("\n%s\n",loser5);}
    if (i==6){printf("\n%s\n",loser6);}
    if (i==7){printf("\n%s\n",loser7);}
    return 0;
    }

}
