#include <stdio.h>
int springer( int zeile, int spalte, int num );
																	// 0 = nicht gesetzt		1 = gesetzt



int springer( int zeile, int spalte, int num )
{	 
	if(spielfeld[x][y] == 1) { 
      return 0;}
     else {
         if (0<=zeile && zeile<g && 0<=spalte && spalte<g && Feld[zeile][spalte]==0) {
         Feld[zeile][spalte] = level;     // Feld wurde besucht					// alle 8 Springermöglichkeiten absuchen
         if (Feld, g, zeile+1, spalte+2, level+1)) return 0;			 // dabei Rekursion abbrechen, wenn eine Lösung gefunden wurde
         if (Feld, g, zeile+1, spalte-2, level+1)) return 0;
         if (Feld, g, zeile+2, spalte+1, level+1)) return 0;
         if (Feld, g, zeile+2, spalte-1, level+1)) return 0;
         if (Feld, g, zeile-1, spalte+2, level+1)) return 0;
         if (Feld, g, zeile-1, spalte-2, level+1)) return 0;
         if (Feld, g, zeile-2, spalte+1, level+1)) return 0;
         if (Feld, g, zeile-2, spalte-1, level+1)) return 0;
         Feld[zeile][spalte] = 0;         // Feld freigeben
         }	
         
         
         s=s+2; z=z+1; schachbrett[z][s]== 0
         
         
         
}



int main()
{
	int z, s;
	int schachbrett[8][8]= {0};
	int gelaufen[8][8] = {0};
	int zeile,spalte;
	
	printf("Zeile -> "\n);
	scanf("%d", &zeile);
	printf("Basis -> "\n)
	scanf("%d", &spalte);
	if (springer(schachbrett, z, 0, 0, 1)

	
}
