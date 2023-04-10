#include <stdio.h>

#define ROAD_PATHWAYS ((int)(sizeof(road_network)/sizeof(road_network[0])))

int main(){

	int i, j, input;

	int road_network [][9] = {
		{1, 1, 0, 0, 0, 1, 0, 0, 0}, 		
		{1, 1, 1, 0, 0, 0, 0, 0, 0},		
		{0, 1, 1, 0, 1, 1, 0, 0, 1},			
		{0, 0, 0, 1, 1, 0, 0, 0, 0},			
		{0, 0, 0, 1, 1, 0, 0, 0, 0},			
		{1, 0, 1, 0, 0, 1, 0, 0, 0},			
		{1, 0, 0, 1, 0, 0, 1, 0, 1},		
		{0, 0, 0, 0, 0, 1, 0, 1, 1}
	};
	
	printf("   A  B  C  D  E  F  G  H  \n");

	for (i = 0; i < ROAD_PATHWAYS; i++){
		printf("%c ", 'A' + i);
			for (j = 0; j < ROAD_PATHWAYS; j++){
				if (i == 2 || i == 3 || j == 2 || j == 3){
				 	printf("[%d]", road_network[i][j]);
				 }else{
				 	printf("%2d ", road_network[i][j]);
				 } 
			}
		printf("\n");
	}	
	printf("\n");

	printf("Which point are you located?  0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H \n");
	scanf("%d", &input);
	printf("\n At point: ", 'A' + input);

	switch(input){
		case 0: case 1: case 5:
			printf("point: C arrived to charging station");
			break;
		case 2: 
			printf("point: C is a charging station");
			break;
		case 3: 
			printf("point: D is a charging station");
			break;
		case 4: 
			printf("point: D arrived to charging station");
			break;
	}

	return 0;
}