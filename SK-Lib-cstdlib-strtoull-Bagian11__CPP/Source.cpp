#include <cstdio>
#include <cstdlib>
#include <conio.h>

/*
	Source by AlphaCodingSkills (https://www.alphacodingskills.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char str[] = "11011 55 123 ff 0xff";
	char* pEnd;

	unsigned long long int val1 = strtoull(str, &pEnd, 2);
	unsigned long long int val2 = strtoull(pEnd, &pEnd, 8);
	unsigned long long int val3 = strtoull(pEnd, &pEnd, 10);
	unsigned long long int val4 = strtoull(pEnd, &pEnd, 16);
	unsigned long long int val5 = strtoull(pEnd, &pEnd, 0);

	//menampilkan hasil
	printf("val1 = %llu\n", val1);
	printf("val2 = %llu\n", val2);
	printf("val3 = %llu\n", val3);
	printf("val4 = %llu\n", val4);
	printf("val5 = %llu\n", val5);

	_getch();
	return 0;
}