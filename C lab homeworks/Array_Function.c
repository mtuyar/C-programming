#include <stdio.h>
#include <stdlib.h>

int dizi_eleman,i;
float aav;
int sum =0, count =0, count2=0;
int value =5;
int main() {
	
	int dizi[5];
	for (i =0;i<5;i++){
		printf("Enter %d number of array: ",i+1);
		scanf("%d",&dizi_eleman);
		dizi[i] = dizi_eleman; 
	}
	avarage(dizi,5);
	numbers(dizi,5);
	return 0;
}


int avarage(int dizi[], int value){
	for (i =0; i<5;i++){
		sum = dizi[i] + sum;
	}
	aav = sum /5.0;
	printf("Avarage of numbers in array %.2f\n",aav);
	return aav;
}

void numbers(int dizi[], int value){
	for (i =0;i<5;i++){
		if (dizi[i] < aav){
			//printf("\nNumber of elements less than avarage: %d ",dizi[i]);
			count++;
		}
		else
		{
		//	printf("\nNumber of elements greater than avarage %d ",dizi[i]);
			count2++;
		}
	}
	printf("\nNumber of elements less than avarage: %d ",count);
	printf("\nNumber of elements grater than avarage: %d ",count2);
}
