#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
using namespace std;

//Write a program in C-Language that open the
// file "in.txt", and prints the sum of the numbers that are found on each line of the file in.txt.
/*char linie[255];

int charToInt(char s[255])
{
	int numar = 0;
	int i;
	for (i = 0; i < strlen(s); i++)
	{
		if(s[i]>='0' && s[i]<='9')
			numar = numar * 10 + (s[i]-'0');
	}
	return numar;
}

int main()
{
	int suma = 0;
	int val = 0;
	FILE* fisier = fopen("seminar.txt", "r");
	if (!fisier)
	{
		cout << "Fisierul este gol";
		return 0;
	}
	while (fgets(linie, 255, fisier))
	{
		val = charToInt(linie);
		suma=suma+val;
	}
	cout << suma;
	fclose(fisier);
	return 0;
}*/



//read a sentence using scanf, sort it then print it with printf from longest to shortest word
//if two words are the same length, they will be sorted alphabetically
/*char vectCuvinte[50][50];
int lungCuvinte[50];
int afisatDeja[50];


int sortare(int vector[50], int lungime)
{
	int ok = 0;
	int aux = 0;
	do
	{
		ok = 1;
		for (int i = 0; i < lungime; i++)
			if (vector[i] < vector[i + 1])
			{
				aux = vector[i];
				vector[i] = vector[i + 1];
				vector[i + 1] = aux;
				ok = 0;
			}

	} while (ok == 0);

	return vector[50];
}
int main()
{
	
	int nrCuv = 0,j=0,i=0;
	char sir[255];
	scanf("%[^\n]s", sir);
	char* p = strtok(sir, " ,");
	while (p != NULL)
	{
		lungCuvinte[nrCuv] = strlen(p);
		strcpy(vectCuvinte[nrCuv], p);
		nrCuv++;
		p = strtok(NULL, " ,");
	}
	
	sortare(lungCuvinte, nrCuv );
	for (i = 0; i < nrCuv; i++)
	{
		for (j = 0; j < nrCuv; j++)
		{
			if (lungCuvinte[i] == strlen(vectCuvinte[j]) && afisatDeja[j] == 0)
			{
				if (lungCuvinte[i + 1] == lungCuvinte[i])
				{
					for (int k = j + 1; k < nrCuv; k++)
						if (lungCuvinte[i] == strlen(vectCuvinte[k]))
							if (strcmp(vectCuvinte[j], vectCuvinte[k]) < 0)
							{
								printf("%s \n", vectCuvinte[j]);
								printf("%s \n", vectCuvinte[k]);
								afisatDeja[j] = 1;
								afisatDeja[k] = 1;
								i++;
							}
							else
							{
								printf("%s \n", vectCuvinte[k]);
								printf("%s \n", vectCuvinte[j]);
								afisatDeja[j] = 1;
								afisatDeja[k] = 1;
								i++;
							}
				}
				else
				{
					printf("%s \n", vectCuvinte[j]);
					afisatDeja[j] = 1;
				}
			}
		}
	}

	return 0;
}*/


//Fill in the missing code (dots: ...... ) to make this program work as expected.
/*#include <iostream>
using namespace std;

bool isPrime(int n)

{
	for (int tr = 2; tr < n / ......; tr++)//... = 2
		if ((n % ......) == 0)//... = tr
			return ......;	//... = false
	return true;

}

int main()

{
	int n;
	std::cout << "Enter a number:";
	std::cin >> ......;		//... = n

	if (isPrime(n))
		std::cout << n << " is prime !";
	else
		std::cout << n << " is NOT prime !";

	return 0;

}*/