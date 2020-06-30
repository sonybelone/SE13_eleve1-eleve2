#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
void plus_moins(int choix_joueur,int valeur_a_trouve,int nbre_choix){
	int x=0;
	do
	{
		
		scanf("%d",&choix_joueur);
		if(choix_joueur == valeur_a_trouve)
		{
			printf("bingo \n");
		}
		else if(choix_joueur < valeur_a_trouve)
		{
			printf("plus \n");
		}
		else//(choix_joueur > valeur_a_trouve)
		{
			printf("moins \n");
		}
		x++;
		
	}while(choix_joueur != valeur_a_trouve && x < nbre_choix);
}	
int main(void)
{
	srand(time(NULL));
	int y = rand()%100;
	int x = 0;
	int choix = 0;
	int choix_dessai = 0;
	printf("choisissez le niveau de difficulte du jeu svp \n");
	printf("le niveau 1 est illimitte\n");
	printf("le niveau 2 est moyen le nombre d'essai est 25 \n");
	printf("le niveau 3 est difficile,le nombre d'essai est 10 \n");
	printf("selectionnez un niveau entre 1,2 et 3 : ");
	scanf("%d",&choix);
	printf("\n");
	
	if(choix == 1)
	{
		choix_dessai = 100;
	}
	else if(choix == 2)
	{
		choix_dessai = 25;
	}
	else if(choix == 3)
	{
		choix_dessai = 10;
	}
																
	printf("inserer un nombre a trouver svp  : \n");
	plus_moins(x,y,choix_dessai);
}


	
	



