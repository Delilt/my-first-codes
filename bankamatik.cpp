#include<stdio.h>
#include<string.h>


int main() 
{

	
	
char isim[10]="ali";
int parola=12345;
int bakiye=100;
int secim;
int yatirilacakpara,cekilecekpara;
	char istenecekisim[10];
	int istenecekparola;
	
               printf("bankamatige hosgeldiniz.\nlutfen kullanici adinizi giriniz:");
			      scanf("%s",&istenecekisim);
			   printf("\nlutfen sifrenizi giriniz:");
			      scanf("%d",&istenecekparola);
				  
				     if (strcmp(isim,istenecekisim)==0 && parola==istenecekparola)
			     	
                    printf("\n\nkullanici bilgileri dogru girilmistir.");
			     	printf("\nasagidaki islemlerden birini seciniz:\n[1]-para yatirma.\n[2]-para cekme.\n[3]-kullanici bilgileri");
			
				     	scanf("%d",&secim);

			
				     	if(secim==1)
{						 
				     		printf("\npara yatirma islemi secildi.\nyatirilacak tutar:");
				     		scanf("%d",&yatirilacakpara);
				     		 bakiye+=yatirilacakpara;
				     		 
			 
			 
				     		printf("\npara yatirma isleminiz basarili.yatirdiginiz tutar:%d\nsuanki bakiyeniz:%d",yatirilacakpara,bakiye);
				     		
}
				     		    else if(secim==2)
{
				     			
				     			printf("\npara cekme islemi secildi.\ncekilecek tutar:");
				     			scanf("%d",&cekilecekpara);
				     			bakiye -=cekilecekpara;
				     			
				     			
				     			
							
								 printf("\npara cekme isleminiz basarili.\ncekilen tutar:%d\nsuanki bakiyeniz:%d",cekilecekpara,bakiye);
 }
							 
						
						else if(secim==3){
							
							
							
							printf("kullanici bilgileriniz:\nkullanici adiniz:%s\nparolaniz:%d\nhesap bakiyeniz:%d",isim,parola,bakiye);
							
						
						}
						
						
	                    else
 {
	                       	printf("\nkullanici adi veya parola yanlis girildi.\nlutfen giridiginiz bilgirlei kontrol ediniz");
 }
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
return 0;
}

