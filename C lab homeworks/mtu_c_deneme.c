#include <stdio.h>
int x ,y ,z ,f ,avarage ,square , cube, square_avarage;

int main() {
		printf("Enter two numbers = ");
		scanf_s("%d %d", &x,&y);
		z = x + y;
		f = x - y;
		avarage = (x + y) / 2;
		square = avarage * avarage;
		cube = f * f * f;
		square_avarage = avarage * avarage;
		printf("%d + %d = %d\n",x,y,z);
		printf("%d - %d = %d\n",x,y,f);
		printf("Avarage of %d and %d is %d\n",x,y,avarage);
		printf("Square of the sum is %d\n",square);
		printf("Cube of the difference is %d\n",cube);
		printf("Square of the avarage of %d and %d is %d\n\n",x,y,square_avarage);
		printf("\t\t****** This code was written by Mehmet Taha Uyar ******\n\n");
		return 0;
}