
#include "SPI.h"
#include <Adafruit_GFX.h>
#include <ILI9488.h>

#include <Fonts/FreeMonoBoldOblique12pt7b.h>
#include <Fonts/FreeMonoBoldOblique24pt7b.h>
#include <Fonts/sans110pt7b.h>

#define TFT_CS         10 
#define TFT_DC         11
#define TFT_LED        PB0
#define BLACK 0x0000
#define BLUE 0x001F
#define RED 0xF800
#define GREEN 0x07E0
#define CYAN 0x07FF
#define MAGENTA 0xF81F
#define YELLOW 0xFFE0
#define WHITE 0xFFFF


ILI9488 tft = ILI9488(TFT_CS, TFT_DC);


//definisanje ulaza i izlaza
const int niz_ulaza[4]={3,2,5,4};
int niz_stanja[]={};
int broj_ulaza=4;
float current = 0;
float bin2int(int bin[]);
void ispis(float broj);
  
  }

//funkcija za ispis broja//funkcija za ispis broja
//funkcija za ispis broja
void ispis(float broj){
if(current != broj){
  if(current<10){
FillCurrent();
  }
  else{
 FillCurrent1();   
  }
  if(broj<10){
tft.setCursor(100,90);
tft.setTextColor(WHITE);
tft.setFont(&sans110pt7b);
tft.setTextSize(1);
tft.print((int)broj);

current = broj;
}
else{
  

  tft.setCursor(100,90);
tft.setTextColor(WHITE);
tft.setFont(&sans110pt7b);
tft.setTextSize(1);
tft.print((int)broj);

current = broj;
}
}
  else if (current>9 && current==broj){
    tft.setCursor(100,90);
tft.setTextColor(WHITE);
tft.setFont(&sans110pt7b);
tft.setTextSize(1);
tft.print((int)broj);   
  }
else{
  tft.setCursor(100,90);
tft.setTextColor(WHITE);
tft.setFont(&sans110pt7b);
tft.setTextSize(1);
tft.print((int)broj); 

  }    
    
}

void FillCurrent(){
/*tft.setCursor(100,90);
tft.setTextColor(BLACK);
tft.setFont(&sans110pt7b);
tft.setTextSize(1);
tft.print((int)current);
*/
tft.fillRect(80,90,240,300,BLACK);
}


void FillCurrent1(){
/*tft.setCursor(80,90);
tft.setTextColor(BLACK);
tft.setFont(&amer110pt7b);
tft.setTextSize(1);
tft.print((int)current);
*/
tft.fillRect(80,90,240,300,BLACK);
}



void setup() {

  tft.begin();
 tft.fillScreen(BLACK);
// pocetni_ekran();
//  tft.begin();
  tft.begin();
 }


void loop(void) {
 
 
 
for(int i=0;i<10;i++){
tft.setCursor(100,90);
tft.setTextColor(WHITE);
tft.setFont(&sans110pt7b);
tft.setTextSize(1);
tft.print(i);
delay(1000);
tft.fillRect(0,100,90,280,BLACK);
tft.setCursor(100,90);
tft.setTextColor(BLACK);
tft.setFont(&sans110pt7b);
tft.setTextSize(1);
tft.print(i);}
for(int j=8;j>=0;j--){
  tft.setCursor(100,90);
tft.setTextColor(WHITE);
tft.setFont(&sans110pt7b);
tft.setTextSize(1);
tft.print(j);
delay(1000);
tft.fillRect(0,100,90,280,BLACK);
tft.setCursor(100,90);
tft.setTextColor(BLACK);
tft.setFont(&sans110pt7b);
tft.setTextSize(1);
tft.print(j);
  
  
}
  }
  




