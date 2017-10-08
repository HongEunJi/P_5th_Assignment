#include <stdio.h>

int main(void)
{
	int A1[10][10], A2[10][10], A3[10][10], A4[10][10], A5[10][10], A6[10][10];
	int result1[10][10], result2[10][10], result3[10][10], result4[10][10], result5[10][10];
	int  i, j, k;

	for(i=1; i<=5; i++)
		for(j=1; j<=2; j++)
			A1[i][j] = 1;

	printf("\n1. A1 : 5 x 2\n");
	for(i = 1; i<=5; i++)
		for(j = 1; j<=2; j++){
		printf("%d", A1[i][j]);
		if(j == 2) printf("\n");
		}

	for(i=1; i<=2; i++)
		for(j=1; j<=3; j++)
			A2[i][j] = 1;

	printf("\n2. A2 : 2 x 3\n");
	for(i = 1; i<=2; i++)
		for(j = 1; j<=3; j++){
		printf("%d ", A2[i][j]);
		if(j == 3) printf("\n");
		}

	for(i=1; i<=3; i++)
		for(j=1; j<=4; j++)
			A3[i][j] = 1;

	printf("\n3. A3 : 3 x 4\n");
	for(i = 1; i<=3; i++)
		for(j = 1; j<=4; j++){
		printf("%d ", A3[i][j]);
		if(j == 4) printf("\n");
		}

	for(i=1; i<=4; i++)
		for(j=1; j<=3; j++)
			A4[i][j] = 1;

	printf("\n4. A4 : 4 x 3\n");
	for(i = 1; i<=4; i++)
		for(j = 1; j<=3; j++){
		printf("%d ", A4[i][j]);
		if(j == 3) printf("\n");
		}

	for(i=1; i<=3; i++)
		for(j=1; j<=2; j++)
			A5[i][j] = 1;

	printf("\n5. A5 : 3 x 2\n");
	for(i = 1; i<=3; i++)
		for(j = 1; j<=2; j++){
		printf("%d ", A5[i][j]);
		if(j == 2) printf("\n");
		}

	for(i=1; i<=2; i++)
		for(j=1; j<=3; j++)
			A6[i][j] = 1;

	printf("\n6. A6 : 2 x 3\n");
	for(i = 1; i<=2; i++)
		for(j = 1; j<=3; j++){
		printf("%d ", A6[i][j]);
		if(j == 3) printf("\n");
		}



	for(i=1; i<=5; i++)
		for(j=1; j<=3; j++){
			result1[i][j] = 0;
			for(k=1; k<=2; k++)
				result1[i][j] += A1[i][k]*A2[k][j];
		}

	for(i=1; i<=5; i++)
		for(j=1; j<=4; j++){
			result2[i][j] = 0;
			for(k=1; k<=3; k++)
				result2[i][j] += result1[i][k]*A3[k][j];
			}

	for(i=1; i<=5; i++)
		for(j=1; j<=3; j++){
			result3[i][j] = 0;
			for(k=1; k<=4; k++)
				result3[i][j] += result2[i][k]*A4[k][j];
			}

	for(i=1; i<=5; i++)
		for(j=1; j<=2; j++){
			result4[i][j] = 0;
			for(k=1; k<=3; k++)
				result4[i][j] += result3[i][k]*A5[k][j];
			}

	for(i=1; i<=5; i++)
		for(j=1; j<=3; j++){
			result5[i][j] = 0;
			for(k=1; k<=2; k++)
				result5[i][j] += result4[i][k]*A6[k][j];
			}


	printf("\nOutput Matrix: \n");

	for(i = 1; i<=5; i++)
		for(j = 1; j<=3; j++){
		printf("%d ", result5[i][j]);
		if(j == 3) printf("\n");
		}

	return 0;
	
}