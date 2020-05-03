#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main() {
	int X;
	unsigned int Y;
	float Z;
	char Univ[40] = "Universitas Sumatera Utara";
	char Kota[10] = "Medan";

	X = 25000;
	Y = 5000;
	Z = 12345.678;

	system("cls");
	printf("Tampilan Data Tanpa Diformat\n");
	printf("Nilai X  = %d\n", X);
	printf("Nilai X  = %u\n", Y);
	printf("Nilai X  = %f\n", Z);
	printf("String: %s %s\n\n", Univ, Kota);
	
	printf("Tampilan Data Sudah Diformat\n");
	printf("Nilai X  = %8d\n", X);
	printf("Nilai X  = %8u\n", Y);
	printf("Nilai X  = %11.2f\n", Z);
	printf("String 1: %40s %10s\n", Univ, Kota);
	printf("String 2: %-40s %-10s\n\n", Univ, Kota);

	_getch();
	return 0;
}