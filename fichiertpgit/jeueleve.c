#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<unistd.h>
/*void plus_moins(int choix_joueur,int valeur_a_trouve,int nbre_choix){
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
}	*/
/*int main(void)
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
}*/
//void mode_2_joueurs(int ){
void plus_moins_joueur1(int choix_joueur,int valeur_a_trouve,int nbre_choix){
	int x=0;
	int b = 0;
	b = nbre_choix;
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
			b = b-1;
		}
		else//(choix_joueur > valeur_a_trouve)
		{
			printf("moins \n");
			b = b -1;
		}
		x++;
		
	}while(choix_joueur != valeur_a_trouve && x < nbre_choix);
	printf("le resultat est: %d\n",b);
}
void plus_moins_joueur2(int choix_joueur2,int valeur_a_trouve2,int nbre_choix2){
	int x=0;
	int b2 = 0;
	b2 = nbre_choix2;
	do
	{
		
		scanf("%d",&choix_joueur2);
		if(choix_joueur2 == valeur_a_trouve2)
		{
			printf("bingo \n");
		}
		else if(choix_joueur2 < valeur_a_trouve2)
		{
			printf("plus \n");
			b2 = b2-1;
		}
		else//(choix_joueur > valeur_a_trouve)
		{
			printf("moins \n");
			b2 = b2 -1;
		}
		x++;
		
	}while(choix_joueur2 != valeur_a_trouve2 && x < nbre_choix2);
	printf("le resultat est: %d\n",b2);
}		
int main()
{
	int nbre_choix = 0;
	int nbre_choix2 = 0;
	int joueur1 = 0;
	int joueur2 = 0;
	int b, b2;
	srand(time(NULL));
	int a = rand()%100;
	int nbre_tours = 0;
	printf("inserer le nbre de tours svp");
	scanf("%d",&nbre_tours);
	for(int i = 0;i < nbre_tours;i++)
	{
		printf("joueur1 inserer le nombre de coups svp:  \n");
		scanf("%d",&nbre_choix);
		printf("joueur 2 insere  le nombre a devine : ");
		plus_moins_joueur1(joueur2,a,nbre_choix);
		printf("joueur2 inserer le nbre de coups svp: \n");
		scanf("%d",&nbre_choix2);
		printf("joueur 2 insere  le nombre a devine : ");
		plus_moins_joueur2(joueur1,a,nbre_choix2);
	}
	if(b == b2)
	{
		printf("vous etes a egalite  : %d, %d",b,b2);
	}
	else if(b > b2)
	{
		printf("le joueur1 a gagne : %d,%d",b,b2);
	}
	else
	{
		printf("le joueur2 a gagne : %d,%d",b,b2);
	}
}
