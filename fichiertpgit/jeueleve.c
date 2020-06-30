#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
void plus_moins(int choix_joueur,int valeur_a_trouve){
	int x=0;
	while(choix_joueur != valeur_a_trouve && x < valeur_a_trouve)
	{
		if(choix_joueur == valeur_a_trouve)
		{
			printf("bingo");
		}
		else if(choix_joueur < valeur_a_trouve)
		{
			printf("plus");
		}
		else//(choix_joueur > valeur_a_trouve)
		{
			printf("moins");
		}
		x++;
	}
}	
int main()
{
	srand(time(NULL));
	int x = rand()%100;
	int y;
	printf("inserer un nombre svp  \n");
	scanf("%d",&y);
	plus_moins(x,y);
}


	
	



