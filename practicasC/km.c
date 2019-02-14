#include <stdio.h>
int main ()
	{
	float km,millas,pies,yardas;
	printf("Intruce los kilometros a convertir \n");
	scanf("%f",&km);
	millas=km/1.6;
	pies=km*100000/30.48;
	yardas=km*100000/91.44;
	printf("Las millas son: %.3f \n", millas);
	printf("Los pies son: %.3f \n",pies);
	printf("Las yardas son: %.3f \n",yardas);
return 0;
}
