// Matrix_Mul.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{


		int A[6][6] = { 5, 2, 6, 1, 0, 6, 2, 0, 3, 8, 1, 4, 1, 8, 5, 6, 4, 10, 9, 5, 2, 4, 9, 2, 4, 5, 2, 6, 1, 0, 6, 2, 0, 3, 8, 1 };
		int B[6][6] = { 7, 5, 8, 0, 1, 8, 2, 6, 9, 4, 3, 8, 5, 3, 7, 9, 4,  5, 2, 5, 3, 7, 2, 5, 8, 7, 5, 8, 0, 1, 8, 2, 6, 9, 4, 3 };
		int S[6][6] = { 0 };
		int n = 6;
		int j;
		int i;
		int k1;
		int k2;
		int t = n - n % 2 - 1;

		int cmp=0;

	
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				
				for (k1 = 0, k2 = 1; k1 <= t; k1 += 2, k2 += 2)
				{
					S[i][j] += A[i][k1] * B[k1][j] + A[i][k2] * B[k2][j] * ( 1 - n%2 );


					cmp++;
				}
				
			}
			
		}



		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				std::cout << S[i][j];
				std::cout << " . ";
			}
			std::cout << std::endl;
			
		}
	
		std::cout << std::endl << " Compteur : " << cmp << std::endl;
		system("pause");
}

