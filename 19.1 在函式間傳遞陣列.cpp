#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//���ݭn�^�ǭȮɡA�禡���A��void
void arrayRand(int[10]);  //�N�}�C�����������w���H���� 
int arrayMax(int[10]);	  //��X�}�C���������̤j�� 
void arrayPrint(int[10]); //�L�X�}�C�������� 

int main() {
	srand(time(0));
	int v[10];
	arrayRand(v);
	arrayPrint(v);
	printf("Max: %d\n", arrayMax(v));
	return 0;
} 

void arrayRand(int v[10]) {
	for (int i = 0; i < 10; i++) {
		v[i] = rand() % 100;
	}
}

int arrayMax(int v[10]) {
	int max = v[0];
	for (int i = 1; i < 10; i++) {
		if (v[i] > max) {
			max = v[i];
		}
	}
	return max; 
}

void arrayPrint(int v[10]) {
	for (int i = 0; i < 10; i++) {
		printf("%d ",v[i]);
	}
	printf("\n");
} 
/*
	* �@���ƫ��A�|�N�ޭz�ƻs�@����ǤJ�禡�A���Y�O�}�C���A�o���|�ƻs�@���}�C
	
	* ��禡�^�ǭȬO�}�C�ɡA�O���X�k�� 
*/
