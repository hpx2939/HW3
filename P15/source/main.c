#include<stdio.h>
#include<stdlib.h>
int maximum(int x, int y, int z);
int main(void){
	int a, b, c;
	printf("Enter three integers: ");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("Maximum is: %d \n", maximum(a, b, c));
	system("pause");
	return 0;


}
int maximum(int x, int y, int z){
	int max = x;
	if (y > max) max = y;
	if (z > max) max = z;
	return max;
		
}