#include <stdio.h>
#include <ctype.h>


/*
	isxxx -> "karakter test fonksiyonları" -> ACII tablosundaki karakterler için...

	isupper			Büyük harf bir karakter mi?
	islower			Küçük harf bir karakter mi?
	isalpha			Alfabetik karakter mi?
	isalnum			Alfabetik ya da nümerik bir karakter mi?
	isdigit			Sayısal bir karakter mi?
	isxdigit		HEx digit bir karakter mi?
	isspace			Boşluk karakterlerinden biri mi?
	ispunct			Noktalama karakterlerinden biri mi?
	isascii			İlk 128 karakterden biri mi?
	iscntrl			Kontrol karakterlerinden biri mi? (ASCII tablosunun ilk 32 karakteri kontrol karakterleridir)
*/


int main(void)
{
	int ch;

	printf("Bir karakter giriniz:");
	ch = getchar();

	if (isupper(ch))
		printf("upper case\n");
	else if (islower(ch))
		printf("lower case\n");
	else if (isdigit(ch))
		printf("digit\n");
	else if (isspace(ch))
		printf("white space char\n");
	else
		printf("another character\n");

	return 0;
}
