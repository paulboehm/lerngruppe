#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct knoten
{
	int key;
	struct knoten *next;									//erzeugen Speicherbereich der auf das nächste element der sturct zeigt
};													//neuer datentyp durch typedef

struct knoten *schlange= NULL;


void enqueue (struct knoten *, int element) //Neues Element anfügen
{
	struct knoten *nextschlange;
	if(schlange == NULL) return;
	while(schlange->next != NULL)
	{
		schlange= (struct knoten*)schlange->next;
	}
	
	schlange->next = (struct knoten*) malloc(sizeof(struct knoten));
	nextschlange = (knoten*) schlange->next;
	
	nextschlange->next = NULL;
	nextschlange->key = element;	
}

int dequeue(struct knoten *) //Entfernen des ersten Elementes aus der Warteschlange
{
	int i, j;	
	if(schlange->next != NULL )
	{
	struct knoten *loschlange = schlange;
	loschlange= (struct knoten*)loschlange->next;
	i = schlange->key;
	schlange->key = loschlange->key;
	schlange->next = loschlange->next;
	return i;}
	else
	{
	i = schlange->key;
	schlange->key=NULL;
	schlange->next=NULL;
	schlange = NULL;
	return i;
	
	}
}

int isempty(struct knoten *) //Rückgabe von 1, falls die Schlange leer ist, sonst 0
{
	if(schlange==NULL)
	{
		return 1;
	 } 
	else return 0;
}

void printQueue(struct knoten *) //Ausgabe der in der Schlange gespeicherten Elemente
{
	knoten *aktschlange = schlange;
	int i;
	for(i=1; aktschlange != NULL; i++)
	{
		printf("%d. Element Wert:%d\n", i, aktschlange->key);
		aktschlange= (struct knoten*)aktschlange->next;

	}
	
}
void anzQueue(struct knoten *) //Anzahl der Elemente in der Warteschlange
{
	knoten *anzschlange = schlange;
	int a;
	for(a=1; anzschlange!=NULL; a++)
	{
		anzschlange= (struct knoten*)anzschlange->next;
	}
			printf("\n\nAnzahl der Keys in Ihrer Warteschlange:%d\n",a-1);
}
int main()
{
	int j,eingabe, st;
	
	
	while(1)
	{
		printf("Willkommen im Menue der Warteschlangenverwaltung\n");
		printf("Waehlen Sie bitte Ihre gewuenschte Funktion:\n\n");
		printf("1.Anfuegen eines Elementes\n2.Loeschen und ausgeben des ersten Elementes\n3.Ausgeben der Warteschlange\n4.Anzahl der Keys in Ihrer Warteschlange\n5.Beenden des Programmes\n\n");
		printf("Bitte geben sie den Wert der gewuenschten Funktion ein:");
		scanf("%d", &eingabe);
		
		switch(eingabe)
		{
			case 1:								//Element anfuegen
				{
					int i;
					printf("Geben Sie den Wert ein den Sie anfuegen wollen:");
					scanf("%d", &i);
					st = isempty(schlange);
					if(st==1)
					{					
						schlange = (struct knoten*) malloc(sizeof(knoten));
						schlange->key =   i;
						schlange->next = NULL;
					}
					else
					enqueue(schlange, i);
					break;	
				}
			case 2:											//Warteschlange anzeigen und löschen
				{
					st = isempty(schlange);
					if(st==0)
					{
					int i;
					i = dequeue(schlange);
					printf("Sie haben den Wert %d geloescht",i);	
					isempty(schlange);
					break;
					}
				}	
			case 3:											//Ausgeben der Warteschlange
				{
					st = isempty(schlange);
					if(st==1)
					{
					printf("Die Warteschlange ist leer.\n");
					break;
					}
					else
					{
					printQueue(schlange);
					break;
					}
				}
			case 4:
				{
					anzQueue(schlange);
					break;
				}
			case 5:
				{
					return 0;
				}	
							
		}
		printf("\n\n\n");		
	}
	
}
