#include <stdio.h>
#include <stdlib.h>


// Systemvariablen
#define FELDER 8
int feld[FELDER][FELDER];
int ende = 0;
int sprung = 0;


void initFeld();
void ausgabeFeld(int ausgabe[FELDER][FELDER]);
int springer(int zeile, int spalte, int num);

// Main
int main() {
	
	int startX = 0;											//Startposition
	int startY = 0;
	
	
	initFeld();
	
	printf("Startfeld:\n\n");
	ausgabeFeld(feld);
	
	if(springer(startX, startY, 1) == 1){
		printf("Weg bis zum Ende gefunden\n\n");
	}else{
		printf("Kein Weg gefunden\n\n");	
	}

	ausgabeFeld(feld);
	
	return 0;

}

// Schachbrett initialisieren
void initFeld(){
	
	int x, y;
	
	for(x = 0; x < FELDER; x++){
		
		for(y = 0; y < FELDER; y++){
			
			feld[x][y] = 0;
			
		}
		
	}
	
}

// Ausgabe des Schachfeldes
void ausgabeFeld(int ausgabe[FELDER][FELDER]){
	
	int x, y;
	
	for(y = FELDER - 1; y >= 0; y--){
		
		for(x = 0; x < FELDER; x++){
			
			printf("%02d ", ausgabe[x][y]);
			
		}
		
		printf("\n");
		
	}
	
	printf("\n");
	
}

/*
1 - möglich
0 - nicht möglich
*/
int springer(int zeile, int spalte, int num){


	if(zeile >= 0 && zeile < FELDER && spalte >= 0 && spalte < FELDER && feld[zeile][spalte] == 0){
		
		feld[zeile][spalte] = num;
		num++;
		
		if(springer(zeile + 2, spalte + 1, num) == 1){
			
			return 1;
			
		}
		
		if(springer(zeile + 1, spalte + 2, num) == 1){
			
			return 1;
			
		}
		
		if(springer(zeile - 1, spalte + 2, num) == 1){
			
			return 1;
			
		}
		
		if(springer(zeile + 2, spalte - 1, num) == 1){
			
			return 1;
			
		}
		
		if(springer(zeile + 1, spalte - 2, num) == 1){
			
			return 1;
			
		}
		
		if(springer(zeile - 2, spalte + 1, num) == 1){
			
			return 1;
			
		}
		
		if(springer(zeile - 2, spalte - 1, num) == 1){
			
			return 1;
			
		}
		
		if(springer(zeile - 1, spalte - 2, num) == 1){
			
			return 1;
			
		}
			
		if(num == ((FELDER * FELDER) + 1)){
			ende = 1;
			return 1;
		}
		
		if(ende == 0){
			
			feld[zeile][spalte] = 0;
			
		}	
	
}
return 0;
}
		



