#include <stdio.h>

/* Implement a binary search algorithm to find the index of a given element in a sorted array. */

int binsrch(int arr_len, int arr[]) {

	int l_index = 0, r_index = arr_len - 1, t, m_index;

	printf("\nPlease Enter Value To Be Searched For Using The Binary Search Algorithm:\n\n=>\tTARGET\t:\t");
	scanf("%d", &t);

	while (l_index <= r_index) {

		m_index = (l_index + r_index)/2;

		if (arr[m_index] == t) { return m_index; }

		if (arr[m_index] < t) { l_index = m_index + 1; continue; }
		else if (arr[m_index] > t) { r_index = m_index - 1; continue; }
			
	}

	return -1;

}

void main() {

	int arr_ch, t_index;

	printf("\nHello!\n\nPlease Select An Option:\n\n\t1. Enter Elements To Populate Custom Array, Then Use Binary Search.\n\t2. Test Binary Search Using Pre-Defined Array.\n\n");

	printf("=>\t"); scanf("%d", &arr_ch);

	while (1) {

		if (arr_ch == 1) {

			printf("\n\nPlease Enter The Number Of Elements You Wish To Add To The Array:\n\n");

			int n, i, j;

			printf("=>\tn\t:\t"); scanf("%d", &n);

			int num_arr[n];

			printf("\nPlease Enter Elements:\n\n");

			for (i = 0; i < n; i++) { printf("=>\tELEMENT-%d\t:\t", i + 1); scanf("%d", &num_arr[i]); }

			//	sorting
			for (i = 0; i < n; i++) {

				for (j = i + 1; j < n; ++j) {

					if (num_arr[i] > num_arr[j]) {

						num_arr[i] ^= num_arr[j];
						num_arr[j] = num_arr[i] ^ num_arr[j];
						num_arr[i] ^= num_arr[j];

					}

				}

			}

			printf("\nSorted Array:\n\n{ %d", num_arr[0]);

			for (i = 1; i < n; i++) { printf(", %d", num_arr[i]); }

			printf(" }\n\n");

			t_index = binsrch(n, num_arr);

			break;

		}
		else if (arr_ch == 2) {

			int n = 100, num_arr[100] = {

				1, 2, 4, 5, 6, 7, 10, 11, 14, 16,
				19, 20, 21, 24, 25, 26, 29, 31, 32, 33,
				34, 35, 37, 43, 45, 46, 47, 51, 52, 53,
				56, 58, 59, 62, 63, 66, 67, 71, 72, 74,
				76, 77, 79, 83, 84, 86, 88, 89, 91, 93,
				95, 96, 97, 101, 123, 143, 150, 158, 172, 184,
				221, 224, 232, 235, 245, 279, 299, 304, 306, 315,
				318, 330, 363, 366, 402, 408, 516, 535, 551, 553,
				558, 562, 567, 583, 586, 627, 640, 675, 693, 719,
				728, 756, 769, 784, 820, 838, 855, 867, 871, 897

			};

			printf("\n\nHere Is An Array Of 100 Elements (Read Left-to-Right, Top-to-Bottom, Sequentially.):\n\n");

			int i, j;

			printf("{");

			for (j = 0; j < n / 10; j++) {

				printf("\t%d", num_arr[j]);

				for (i = j + (n / 10); i < n; i += n / 10) { printf(",\t%d", num_arr[i]); }

				if (j == (n / 10) - 1) { printf("\t}\n"); continue; }

				printf("\n");

			}

			t_index = binsrch(n, num_arr);

			break;

		}
		else { t_index = -2; break; }

	}

	if (t_index >= 0) { printf("\n\nThe element is present at the index %d.\n\n<Stopping Execution>\n", t_index); }
	else if (t_index == -1) { printf("\n\nThe element was not found in the array.\n\n<Stopping Execution>\n"); }
	else { printf("\n\nInvalid Argument For Choice, Exiting...\n\n<Stopping Execution>\n"); }

}
