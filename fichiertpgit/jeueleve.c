#include<stdio.h>
#include<stdlib.h>
void plus_moins(int choix_joueur,int valeur_a_trouve){
	int x=0;
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
}	
int main()
{
	int x =10, y;
	plus_moins(x,y);
}
	
	



