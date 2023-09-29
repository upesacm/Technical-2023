#include <stdio.h>

/* Implement the bubble sort algorithm to sort an array of integers. */

void switch_vars(int* a, int* b) { *a ^= *b; *b = *a ^ *b; *a ^= *b; }

void bubble_sort(int length_arr, int num_arr[]) {

	int i = 0, j, k;

	while (i < length_arr) {

		for (j = 0; j < length_arr - (i + 1); j++) {

			if (num_arr[j] > num_arr[j + 1]) { switch_vars(&num_arr[j], &num_arr[j + 1]); }

		}

		i++;

	}

	if (length_arr != 100) {

		printf("\nSorted Array:\n\n{ %d", num_arr[0]);

		for (i = 1; i < length_arr; i++) { printf(", %d", num_arr[i]); }

		printf(" }\n\n");

	}
	else {

		printf("\nSorted Array:\n\n");
	
		printf("{");

		for (j = 0; j < length_arr / 10; j++) {

			printf("\t%d", num_arr[j]);

			for (i = j + (length_arr / 10); i < length_arr; i += length_arr / 10) { printf(",\t%d", num_arr[i]); }

			if (j == (length_arr / 10) - 1) { printf("\t}\n"); continue; }

			printf("\n");

		}
	
	}
}

void main() {

	int arr_choice;

	printf("\nHello!\n\nPlease Select An Option:\n\n\t1. Enter Elements To Populate Custom Array, Then Use Bubble Sort.\n\t2. Test Bubble Sort Using Pre-Defined Unsorted Array.\n\n");

	printf("=>\t"); scanf("%d", &arr_choice);

	switch (arr_choice) {

		case 1: {

			printf("\n\nPlease Enter The Number Of Elements You Wish To Add To The Array:\n\n");

			int n, i, j;

			printf("=>\tn\t:\t"); scanf("%d", &n);

			int num_arr[n];

			printf("\nPlease Enter Elements:\n\n");

			for (i = 0; i < n; i++) { printf("=>\tELEMENT-%d\t:\t", i + 1); scanf("%d", &num_arr[i]); }

			printf("\nUnsorted Array:\n\n{ %d", num_arr[0]);

			for (i = 1; i < n; i++) { printf(", %d", num_arr[i]); }

			printf(" }\n\n");

			bubble_sort(n, num_arr);

			break;

		}
		
		case 2: {

			int n = 100, num_arr[100] = {

				0, 260, 267, 268, 13, 14, 16, 277, 278, 24,
				26, 27, 282, 29, 284, 31, 34, 291, 36, 294,
				39, 298, 44, 45, 46, 306, 51, 310, 55, 56,
				57, 59, 60, 318, 321, 324, 69, 71, 77, 337,
				338, 86, 87, 342, 89, 90, 346, 348, 98, 355,
				100, 356, 102, 357, 359, 105, 361, 363, 109, 365,
				366, 112, 368, 370, 371, 372, 117, 118, 120, 122,
				124, 130, 133, 137, 138, 141, 149, 153, 154, 157,
				159, 160, 168, 171, 178, 181, 183, 184, 194, 197,
				202, 205, 213, 214, 223, 224, 225, 231, 232, 236

			};

			printf("\n\nHere Is An Array Of 100 Elements (Read Left-to-Right, Top-to-Bottom, Sequentially):\n\n");

			int i, j;

			printf("{");

			for (j = 0; j < n / 10; j++) {

				printf("\t%d", num_arr[j]);

				for (i = j + (n / 10); i < n; i += n / 10) { printf(",\t%d", num_arr[i]); }

				if ( j == (n / 10) - 1) { printf("\t}\n"); continue; }

				printf("\n");

			}

			bubble_sort(n, num_arr);

			break;

		}

	}

}