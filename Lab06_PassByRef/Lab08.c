#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	//printf("@@ &prisoners[0] %d\n", (int) &prisoners[0]);
	//printf("@@ &prisoners[%d] %d\n", numPrisoners - 1, (int) &prisoners[numPrisoners - 1]);

    printf("\n");
	// Select prisoner to be killed
	for (i = 0; i < numPrisoners; i++) {
		for (int j = 0; j < m-1; j++){
			if ( *killerPtr == 0){
				killerPtr = prisoners;
			}
			killerPtr++;
			if ( *killerPtr == 0){
				killerPtr = prisoners;
			}	
		}

        // append number of prisoner who is killed to array `killed`
        killed[i] = *killerPtr;
        // remove number killed prisoner from array `prisoners`
        removeKilled(&prisoners[0], numPrisoners, *killerPtr);

	}

    printf("\n");
	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
	return 0;
}

void removeKilled(int *array, int size, int killedPrisoner)
{
	int bol = 0 ;
	for (int i = 0 ; i < size ; i++){
		if (array[i] == killedPrisoner){
			bol = 1;
		}if (bol){
			array[i] = array[i+1];
		}
	}
	array[size-1] = 0;
}