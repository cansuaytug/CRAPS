#include <stdio.h>
#include <time.h>
#include <stdlib.h>
	
	int main() {
	
	
	srand(time(NULL));
	
	int zar1,zar2,zart;
	char Yeni_oyun_oynansin_mi, At ;
	do {
	
	zar1=rand()% 6 + 1;;
	zar2=rand()% 6 + 1;;
	zart=zar1+zar2;
	
	
	printf("Zarlar atiliyor...");
	printf("%d\n",zart);
	
		
		if ( zart==4 || zart==5 || zart==6 || zart==8 || zart==9 || zart==10) {
			 
			 
				 	printf("Sonuc belirsiz, tekrar zar atilacak. At ?\n"); 
			 
			
				 while ( At == 'a' || At == 'A');
				 
				 getch ();
			
				
		}
	
	
	
	
	if (zart==7 || zart==11) {
	
	
		printf("Kazandiniz.\n");
			printf("Yeni oyun oynansin mi\n"); }
			
		
		

		else {
		
			 if (zart==2 || zart==3 || zart==12)
				printf("Kaybettiniz.\n");	 
					printf("Yeni oyun oynansin mi\n"); }
					
					
	
	do {
	
			scanf("%c",&Yeni_oyun_oynansin_mi);
		}while( Yeni_oyun_oynansin_mi == '\n' );

	} while( Yeni_oyun_oynansin_mi == 'E' || Yeni_oyun_oynansin_mi == 'e' );

 
	if (Yeni_oyun_oynansin_mi == 'H' || Yeni_oyun_oynansin_mi == 'h' ); {
		
		printf ("CRAPS sona erdi."); }
	
		
		
	

	return 0;
	}
