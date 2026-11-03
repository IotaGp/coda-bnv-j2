#include <stdlib.h>
#include <stdio.h>
int main()
{
	char prenom[50];
	printf("Bonjour, quel est votre prénom ?");
	scanf("%s", prenom);
	printf("Bonjour %s, quel est votre âge ?", prenom);
	int age;
	scanf("%d", &age);
	int debut_annee = 2026 - age;
	int fin_annee = 2026 - (age+1);
	printf( "%s, si vous êtes de la fin d'année, votre année de naissance est %d sinon c'est %d.\n", prenom, fin_annee, debut_annee);
exit(0);
}
