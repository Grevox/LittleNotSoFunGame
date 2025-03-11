#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include <stdlib.h>
float usermoney = 100;
float azienda = 30; // 30$ a pezzo//Mercidez_Bang
int maxazienda = 9; // pezzi
int usershares = 0; // pezzi del player
int keepsinarow = 0;
void increment(uint8_t random);
void userchoice();
int main(){
  // WHAT SHOULD I DO!!!
  // SELL GAME LOL
  system("clear");
  userchoice();
}

void userchoice(){
  system("clear");
  srand(time(NULL));
  rand();
  if(usermoney == 0 && usershares == 0){
    printf("\n\n Bro failed capitalism LOL");
  }
  uint8_t random = rand();
  printf("\n\nMercidez Bang: %f $ per share, %d shares remaining\n\nyou own %d shares and you have %f $\n",azienda,maxazienda,usershares,usermoney);
  printf("\nWhat do you want to do?\n(Keeps in a row : %d) \n[S]ell , [K]eep or [B]uy : ",keepsinarow);
  char SKsk;
  scanf("%c",&SKsk);
 keepsinarow += 1;
  if(SKsk == 'S' || SKsk == 's' && usershares != 0){
  usershares = usershares - 1;
  maxazienda += 1;
  usermoney += azienda;
    keepsinarow = 0;
  } else if(SKsk == 'B' || SKsk == 'b' ){
   if(usermoney < azienda){
      printf("\n\n MAMMA MIA, Bancarotta, tiè, unisciti alla 'Ndrangheta\n");
      exit(0);
    }
    keepsinarow = 0;
    usermoney = usermoney - azienda;
    maxazienda -= 1;
    usershares = usershares + 1;
  } else if(SKsk == 'e' || SKsk == 'E'){
    exit(0);
  }
  
  if(keepsinarow == 5){
    printf("\n\nYour family cant eat anymore :( \n");
    exit(0);
  }
  increment(random);
  printf("\n");
  
}

void increment(uint8_t random){
  azienda += random;
  azienda = azienda * 2 / random * 3 + random + maxazienda + usershares - 4.10469;
  if(azienda < 300){
  azienda = azienda * 3;
    azienda = azienda / (usershares + 2);
  }
  system("clear");
  userchoice();
}
