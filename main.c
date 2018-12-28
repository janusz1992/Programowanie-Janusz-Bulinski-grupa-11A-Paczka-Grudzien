/*
//zad 1.1 Utworzyc 5-cio elementowa tablice typu int.
//Pobrac od urzytkownika 5 elementow i dodac je do tablicy.
//Nastepnie wyswietlic najwieksza liczbe z tablicy (algorytm do samodzielnej implementacji)

#include <stdio.h>
#include <stdlib.h>






int i;
int a;


int main()
{
    int tab[5];
    printf("zad 1.1 Utworzyc 5-cio elementowa tablice typu int. Pobrac od urzytkownika 5 elementow i dodac je do tablicy. Nastepnie wyswietlic najwieksza liczbe z tablicy (algorytm do samodzielnej implementacji)\n\n");

printf("\n\n\t\tProsze podac 5 liczb oddzielonych spacja ktore zostana przypisane do tablicy: \n\n ");
    scanf(" %d %d %d %d %d", &tab[0],&tab[1],&tab[2],&tab[3],&tab[4]);
printf("\n\n\t\t\t\tTwoje liczby wpisane do tablicy to :\n\n %d %d %d %d %d \n\n", tab[0],tab[1],tab[2],tab[3],tab[4]);

    for(i=1,a=tab[0];i<sizeof(tab)/sizeof(tab[0]);i++)
						{
							if(a<tab[i])
							{
								a=tab[i];
							}
						}
    printf("Nawieksza liczba to %d\n",a);
return 0;
}
*/

/*zad 1.2 Wyswietlic w petli tablice z zadania 1.1 od poczatku i od konca (dwie petle)

#include <stdio.h>
#include <stdlib.h>
int i;
int main ()
{
     int tab[5];

printf("\n\n\t\tProsze podac 5 liczb oddzielonych spacja ktore zostana przypisane do tablicy: \n\n ");

scanf(" %d %d %d %d %d", &tab[0],&tab[1],&tab[2],&tab[3],&tab[4]);

printf("\n\n\t\t\t\tTwoje liczby wpisane do tablicy to :\n\n %d %d %d %d %d \n\n", tab[0],tab[1],tab[2],tab[3],tab[4]);

printf("\n\n\t\t\t\tTablica od poczatku:\n");

     for (i = 0; i < sizeof(tab) / sizeof(tab[0]); i++)

						{
                            printf(" %d\n", tab[i]);
						}

printf("\n\n\t\t\t\tTablica od konca:\n");

						for (i = (sizeof(tab) / sizeof(tab[0]) - 1); i >= 0; i--)
						{
							printf(" %d\n", tab[i]);
                        }

    return 0;
}
*/

/*zad 1.3 Napisac algorytm sprawdzajacy, czy tablica jest posortowana w kolejnoœci niemalejacej




#include <stdio.h>
#include <stdlib.h>

int i;
int a;

int main ()
{

int tab[5]={2,4,3,5,1};

    for (i=0,a=0;i<(sizeof(tab)/sizeof(tab[0]))-1;i++)
        {
            if(tab[i]>tab[i + 1])
            {
                a=1;
            }
        }
            if(a==1)
            {
                printf("Tablica nie jest niemalej¹ca.\n");
            }
            else
            {
                printf("Tablica jest niemalej¹ca.\n");
            }
return 0;
}

*/

// W KAZDEJ METODZIE DODAJE OPCJE NAPISANIA 5-CIO ELEMENTOWEJ TABLICY GDZIE WARTOSCI POSZCZEGOLNYCH ELEMENTOW MOZE WPISAC UZYTKOWNIK.
// MOZNA ODRAZU SPRAWDZIC CZY METODA DZIALA ;-)



/* zad 2.1 Utworzyc osobna metode bool IsSorted(int *, int) realizuj¹ca zadanie 1.3
 (UWAGA - w jezyku C niedostepny jest typ bool z wartosciami true i false, zamiast niego nalezy uzyc int i wartosci 1 i 0)

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>



 bool IsSorted(int *tab, int s)
{
	int i;
	for (i=0;i<s-1;i++)
	{
		if(tab[i]>tab[i + 1])
		{
        return 0;
		}
	}
	return 1;
}
int main()
{
 int tab[5];
printf("\n\n\t\tProsze podac 5 liczb oddzielonych spacja ktore zostana przypisane do tablicy: \n\n ");
    scanf(" %d %d %d %d %d", &tab[0],&tab[1],&tab[2],&tab[3],&tab[4]);
printf("\n\n\t\t\t\tTwoje liczby wpisane do tablicy to :\n\n %d %d %d %d %d \n\n", tab[0],tab[1],tab[2],tab[3],tab[4]);

if (IsSorted(tab, sizeof(tab) / sizeof(tab[0])))
						{
							printf("Tablica jest niemalejaca.\n");
						}
						else
						{
							printf("Tablica jest malejaca.\n");
                        }
return 0;
}

*/

/* zad 2.2 Utworzyc metode void printBackwards(int *a, int s) sluzaca do wypisania tablicy OD KONCA





#include <stdio.h>
#include <stdlib.h>


void printBackwards(int *tab, int s)

{
	int i;
	 printf("Tablica od konca\n");
	for (i = s - 1; i >= 0; i--)

	{
		printf("%d\n\n", tab[i]);
	}
}
int main()
{
int tab[5];
printf("\n\n\t\tProsze podac 5 liczb oddzielonych spacja ktore zostana przypisane do tablicy: \n\n ");
    scanf(" %d %d %d %d %d", &tab[0],&tab[1],&tab[2],&tab[3],&tab[4]);
printf("\n\n\t\t\t\tTwoje liczby wpisane do tablicy to :\n\n %d %d %d %d %d \n\n", tab[0],tab[1],tab[2],tab[3],tab[4]);

    {
    printBackwards(tab, sizeof(tab) / sizeof(tab[0]));
    }
return 0;
}
*/





/* zad 2.3 Utworzyc metode printDots(int *a, int s) wyswietlajaca w nowych liniach tyle kropek, ile znajduje sie w danym elemencie tablicy.


#include <stdio.h>
#include <stdlib.h>


void printDots(int *tab, int s)
{
	int i;
	int a;
	for (i=0;i<s;i++)
	{
		for (a=0;a<tab[i];a++)
		{
			printf(".");
		}
		printf("\n");
	}
}

int main()
{
    int tab[5];
        printf("\n\n\t\tProsze podac 5 liczb oddzielonych spacja ktore zostana przypisane do tablicy: \n\n ");
            scanf(" %d %d %d %d %d", &tab[0],&tab[1],&tab[2],&tab[3],&tab[4]);
        printf("\n\n\t\t\t\tTwoje liczby wpisane do tablicy to :\n\n %d %d %d %d %d \n\n", tab[0],tab[1],tab[2],tab[3],tab[4]);

        printf("\t\t\tIlosc kropek w zaleznoscci od wielkosci elementu tablicy :\n");
        {
        printDots(tab,sizeof(tab)/sizeof(tab[0]));
        }
return 0;
}
*/

/*
2.4. Utworzyc metode int Sum(int *a, int s) liczaca sume elementow tablicy.



#include <stdio.h>
#include <stdlib.h>

int Sum(int*tab,int s)
{
        int i;
        int a;
    for(i=0,a=0;i<s;i++)
    {
        a=a+tab[i];
    }
return a;
}

int main()
{
    int tab[5];
        printf("\n\n\t\tProsze podac 5 liczb oddzielonych spacja ktore zostana przypisane do tablicy: \n\n ");
            scanf(" %d %d %d %d %d", &tab[0],&tab[1],&tab[2],&tab[3],&tab[4]);
        printf("\n\n\t\t\t\tTwoje liczby wpisane do tablicy to :\n\n %d %d %d %d %d \n\n", tab[0],tab[1],tab[2],tab[3],tab[4]);

        printf("\n\n\t\t\t\tSuma twojej tablicy wynosi : ");
        {
        printf("%d\n",(Sum(tab, sizeof(tab)/sizeof(tab[0]))));
        }

    return 0;
}
*/


/*
zad 2.5. Zaimplementowac algorytm sortowania babelkowego (w funkcji main(),
nie ma potrzeby tworzenia dodatkowej funkcji).Algorytm powinien posortowac dowolnie duza tablice w kolejnosci niemalejacej.

#include <stdio.h>
#include <stdlib.h>

int main()
{

int tab[5];
        printf("\n\n\t\tProsze podac 5 liczb oddzielonych spacja ktore zostana przypisane do tablicy: \n\n ");
            scanf(" %d %d %d %d %d", &tab[0],&tab[1],&tab[2],&tab[3],&tab[4]);
        printf("\n\n\t\t\t\tTwoje liczby wpisane do tablicy to :\n\n %d %d %d %d %d \n\n", tab[0],tab[1],tab[2],tab[3],tab[4]);


int j=1,i,x;

    int tab2[sizeof(tab)/sizeof(tab[0])];

        for(i=0;i<sizeof(tab)/sizeof(tab[0]);i++)
                {
                tab2[i] = tab[i];
                }

while(j>0)
    {
            for(i=0,j=0;i<(sizeof(tab2)/sizeof(tab2[0])-1);i++)
        {

            if(tab2[i]>tab2[i + 1])
                {
                x = tab2[i];
                tab2[i] = tab2[i + 1];
                tab2[i + 1] = x;
                j++;
                }
        }
    }


    printf("\n\n\n\t\t\t\tTablica nie uporzadkowana: ");

        for (i = 0; i < sizeof(tab) / sizeof(tab[0]); i++)
            {
            printf("%d ", tab[i]);
            }

            printf("\n\n\n\t\t\t\tTablica posortowana: ");

                for (i = 0; i < sizeof(tab2) / sizeof(tab2[0]); i++)
                    {
                    printf("%d ", tab2[i]);
                    }
    printf("\n\n\n");
return 0;
}
*/


/* zad 3.1 Napisac metode int getLength(char *str) ,
 w ktorej WLASNORECZNIE (nie wolno korzystac z metody strlen() )przeliczony zostanie rozmiar ³ancucha(bez null - terminatora).
 Dla przykladu dla „Hello!" wynik powinien wynosic 6.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int getLenght(char *str)
{
	int i=0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}


int main()
{

printf("\n\n\t\t\tPodaj lancuch znakow bez spacji: \n\n\t\t");
    char str[]="tekst";
    scanf("%s",str);
    printf("\n\n\t\tTwoj lancuch to : %s\n\n\n",str);

                    {
					printf("\t\tLancuch sklada sie z %d liter ;-) \n\n", getLenght(str));
                    }

return 0;
}

*/

/* zad 3.2  Napisac metode void Reverse (char *str) , ktora wypisze lancuch znakow od konca (zakaz uzywania strlen, mo¿na uzyc metode z zadania 3.1.)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int getLenght(char *str)
{
	int i=0;
	while(str[i] != '\0')
	{
		i++;
	}
	return i;
}


void Reverse(char *str)
{
int i = 0;

char x;

char nowy[i];

strcpy(nowy, str);
// Funkcja kopiuje tekst z tablicy strFrom do tablicy strTo. Funkcja kopiuje znak po znaku od poczatku,
// az do konca tablicy lub znaku '\0', który tez kopiuje.*/
// Uwaga Tablica strTo powinna byc dostatecznie duza, aby pomiescic tekst z strFrom, poniewaz moze dojsc do przepelnienia bufora.
// Tak wyczytalem ;D
/*
while (i<getLenght(nowy)/2)
        {
		x=nowy[i];

		nowy[i]=nowy[getLenght(nowy)-i-1];

		nowy[getLenght(nowy)-i-1]=x;

		i++;
        }
printf("\n\n\t\tLancuch od konca : %s", nowy);

}


int main ()
{
    printf("\n\n\t\t\tPodaj lancuch znakow bez spacji: \n\n\t\t");

char nowy[]="kto";

        scanf("%s",nowy);

    printf("\n\n\t\tTwoj lancuch to : %s\n",nowy);

                Reverse(nowy);

                    printf("\n\n");

    return 0;
}
*/

/* zad 3.3 Napisac metode bool containsDigits(char * str), ktora zwroci informacje,
 czy w danym stringu znajduje sie jakakolwiek cyfra.Dla przykladu : „asdfgzxcv" -> false, „asdf5asdf" -> true

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

int getLenght(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}


bool containsDigits(char *str)
{
	int i;
	for (i = 0; i < getLenght(str); i++)
	{
		if (isdigit(str[i]))
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
    char nowa[]="nowa1";
    printf("\n\n\t\t\tPodaj lancuch znakow bez spacji: \n\n\t\t");
    scanf("%s",nowa);
    printf("\n\n\t\tTwoj lancuch to : %s\n\n\n",nowa);


if (containsDigits(nowa))
					{
						printf("\t\tString zawiera liczby\n\n");
					}
					else
					{
						printf("\t\tString nie zawiera liczb\n\n");
					}

return 0;
}
*/


// zad 3.4
//DO KAZDEJ METODY DODALEM OPCJE POBIERANIA DANYCH OD UZYTKOWNIKA NAWET DO WCZESNIEJSZYCH ZADAN TO CHYBA ZALICZONE ZAD 3.4 ? ;D


/* zad 4.1. Pobrac od uzytkownika liczbe n. Zaalokowac pamiec na n elementow int i pobrac je od uzytkownika.
 Wykonac na niej metode printBackwards z 2.2.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void printBackwards(int *tab, int s)
{

    printf("\n\t\t\tTablica od tylu : \n");

int i;

	for (i = s - 1; i >= 0; i--)
	{
		printf("\n\t\t\t%d\n", tab[i]);
	}

}



int main()
{

int i,n;

    printf("\n\n\n\t\t\tPodaj wielkosc tablicy : \n\n\t\t\t");
        scanf("%d",&n);

int *tablica;
        tablica = (int*)malloc(sizeof(int *) * n);
            printf("\n\t\t\tWprowadz %d liczb oddzielonych spacja : \n\n\t\t\t", n);

            i = 0;

while (i<n)
    {
        scanf("%d", &tablica[i]);
        i++;
    }

        {
            printBackwards(tablica, n);
        }


free(tablica);
return 0;

}
*/

/* zad 4.2.Pobrac od uzytkownika liczbe n.Zaalokowac pamiec na n elementow int i pobrac je od uzytkownika.
Nastepnie zaalokowac pamiec i utworzyc tablice, w ktorej beda tylko UJEMNE wartosci z pierwszej tablicy.
Na koniec zwolnic pamiec na obie tablice.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int i;
int n;

int main()
{


    printf("\n\n\n\t\t\tProsze wprowadzic wielkosc tablicy :\n\n\t\t\t");
        scanf("%d",&n);

int *tablica;
    tablica=(int*)malloc(sizeof(int *) * n);
			printf("\n\n\n\t\t\tProsze wprowadzic %d liczb oddzielonych spacja w tym liczby ujemne\n\n\t\t\t", n);
                i = 0;

while (i<n)
    {
    scanf("%d", &tablica[i]);
        i++;
    }

    int m = 0, i = 0, j;

while (i < n)
{

    if (tablica[i] < 0)
        {
            m++;
        }
    i++;
}

int *ujemne;
    ujemne = (int*)malloc(sizeof(int *) * m);

for (i = 0, j = 0; i < n; i++)
{
    if (tablica[i] < 0)
        {
            ujemne[j] = tablica[i];
                j++;
        }
}

    printf("\n\n\n\t\t\tTablica liczb ujemnych: \n\n\t\t\t");

for (i = 0; i < m; i++)
    {
        printf("%d ", ujemne[i]);
    }

    printf("\n\n");

free(ujemne);
free(tablica);

return 0;
}

*/

/*
W tym zadaniu nie mialem pomyslu jak dac mozliwosc wprowadzania danych od urzytkownka wiec zrobilem to na "sztywno" ;)

zad 4.3. Napisac metode bool AreArraysldentical


#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>


bool AreArraysIndetical(int *a1, int s1, int *a2, int s2)
{
int i=0; int licz=0;
if (s1==s2)
    {
    for(i=0; i<=s1-1;i++)
        {
            if (a1[i]==a2[i]) licz = licz + 1;
        }
    if (licz==s1) return true; else return false;
    }
}

int main ()

{

    int a1[3],s1,a2[3],s2;
a1[0]=1;
a1[1]=2;
a1[2]=3;
a2[0]=1;
a2[1]=2;
a2[2]=3;
s1=3;
s2=3;
if (AreArraysIndetical(a1,s1,a2,s2)==true) printf("True"); else printf("False");


return 0;

}

*/

/*

4.4. Napisac metode char * reverseString(char*s), ktora ZWROCI (a nie wypisze!) string, który jest odwroconym
stringiem przekazanym jako pierwszy parametr.Funkcja zaalokuje pamiec na nowy łancuch i go zwroci. (caly
algorytm nalezy zaimplementowac samodzielnie).Nalezy go następnie „przechwycic" w funkcji main, aby pamiec na
koniec wyczyscic



#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int getLenght(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return i;
}


char * reverseString(char *str)
{
	int i = 0, l;
	char x;
	char *str2;

	l = getLenght(str);
	str2 = (char*)malloc((l + 1) * sizeof(char));
	strcpy(str2, str);
	while (i < l / 2)
	{
		x = str2[i];
		str2[i] = str2[l - i - 1];
		str2[l - i - 1] = x;
		i++;
	}
	return str2;
}


int main ()
{

            char nowa;
			char str[]="nowa";
			char* rstring;
			printf("\n\n\n\n\t\t\t\tWpisz lancuch znakow\n\n\t");
			scanf("%s", str);

			rstring = reverseString(str);
			printf("\n\n\t\t\t\tLancuch znakow od konca:\n\n\t%s \n\n", rstring);
			free(rstring);



    return 0;
}
*/
