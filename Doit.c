//1번 네 값의 최댓값

int max4(int a, int b, int c, int d)

int max4(int a, int b, int c, int d) {
	//
	//	int max = a;
	//
	//	if (max < b)
	//		max = b;
	//	if (max < c)
	//		max = c;
	//	if (max < d)
	//		max = d;
	//
	//
	//	return max;

	//2번 세값의 최소값

	//int min3(int a, int b, int c);//2

	//int min3(int a, int b, int c) {
	//
	//	int min = a;
	//
	//	if (min > b)
	//		min = b;
	//	if (min > c)
	//		min = c;
	//
	//	return min;

	//3번 네 값의 최솟값

	//int min4(int a, int b, int c, int d);

	////int min4(int a, int b, int c, int d) {
	//
	//	int min = a;
	//
	//	if (min > b)
	//		min = b;
	//	if (min > c)
	//		min = c;
	//	if (min > d)
	//		min = d;
	//
	//	return min;


	//4번 중앙값 구하기
#include<stdio.h>
	int mid3(int a, int b, int c);

	int main() {

		int a, b, c;

		scanf_s("%d", &a);
		scanf_s("%d", &b);
		scanf_s("%d", &c);

		printf("mid is %d", mid3(a, b, c));

	}

	int mid3(int a, int b, int c) {



		if (a <= c) {

			if (c <= b) {

				return c;

			}

			else if (b < c) {

				if (b <= a)
					return a;
				else
					return b;

			}
		}

		else {

			if (a <= b) {

				return a;
			}

			else if (a > b) {

				if (b >= c)
					return b;
				else
					return c;

			}

		}






	}

	//5번 효율성 이유적기
	예를 들어 if ((b >= a && c <= a) || (b <= a && c >= a)에서 첫번 째
		조건에 만족이 되면 뒤에 있는 부분도 무조건 만족이 안되기에 비효율적이다.

		//6번

#include<stdio.h>

		int main() {

		int i, n;
			int sum;
			puts("1부터 n까지의 합을 구합니다.");
		printf("n의 값");
		scanf_s("%d", &n);
		sum = 0;
		i = 1;

		while (i <= n) {

			sum += i;
			i++;

		}

		printf("1부터 %d까지의 합은 %d이다.\n", n, sum);

		printf("i값은 %d이고 i + 1과 동일하다.", i);


	}

	//7번

#include<stdio.h>

	int main() {

		int i, count, sum = 0;

		scanf_s("%d", &count);

		i = 1;

		while (i <= count) {

			printf("%d%s", i, i == count ? "=" : "+");

			sum = sum + count;

			i++;
		}

		printf("%d", sum);

	}

	8번
#include<stdio.h>

		int main() {

		int i;
		int sum;
		scanf_s("%d", &i);

		sum = (1 + i) * (i / 2);

		printf("%d", sum);

	}

	9번
#include<stdio.h>
		int sumof(int a, int b);



	int main() {

		int a, b;

		printf("두수를 입력하라:");

		scanf_s("%d %d", &a, &b);

		printf("합은 %d이다.", sumof(a, b));

	}


	int sumof(int a, int b) {

		int i, k;

		if (a <= b) {
			i = a;
			k = b;
		}
		else {
			i = b;
			k = a;
		}


		int sum = 0;
		while (i <= k) {

			sum = sum + i;

			i++;
		}

		return sum;
	}

	10번

#include<stdio.h>

		int main() {

		int i, n;
		int sum;


		while (1)
		{

			printf("i의 값:");
			scanf_s("%d", &i);
			printf("n의 값:");
			scanf_s("%d", &n);

			if (i < n)
			{
				sum = n - i; break;
			}
			else
				printf("i보다 큰값을 입력하세요.\n");
		}


		printf("b-a는 %d이다.", sum);




	}

	11번

#include <stdio.h>

		int main(void)
	{
		int n;
		int digits = 0;

		do {
			printf("양의 정수입력 : ");
			scanf_s("%d", &n);
		} while (n <= 0);

		while (n > 0) {
			n /= 10;
			digits++;
		}

		printf("이 수는 %d 자리입니다.\n", digits);

		return 0;
	}

	12번

#include <stdio.h>

		int main(void)
	{

		int i, k;

		int g;
		printf(" l");
		for (g = 1; g < 10; g++)
		{
			printf(" %d ", g);

		}

		printf("\n");

		printf("-+--------------------------\n");
		for (i = 1; i < 10; i++) {


			for (k = 1; k < 10; k++) {


				if (k == 1)
					printf("%d|", i);


				if (i * k < 10) {
					printf(" ");
				}



				printf("%d ", i * k);


			}
			printf("\n");

		}

		return 0;
	}

	13번

#include <stdio.h>

		int main(void)
	{

		int i, k;

		int g;
		printf(" l");
		for (g = 1; g < 10; g++)
		{
			printf(" %d ", g);

		}

		printf("\n");

		printf("-+--------------------------\n");
		for (i = 1; i < 10; i++) {


			for (k = 1; k < 10; k++) {


				if (k == 1)
					printf("%d|", i);


				if (i + k < 10) {
					printf(" ");
				}



				printf("%d ", i + k);


			}
			printf("\n");

		}

		return 0;
	}

	14번

#include<stdio.h>

		int main() {

		int i;
		int stt = 0, stt2 = 0;
		scanf_s("%d", &i);

		for (stt = 0; stt < i; stt++) {

			for (stt2 = 0; stt2 < i; stt2++) {

				printf("*");

			}
			printf("\n");
		}


	}


	15번

#include<stdio.h>

		int main() {

		int i, k;

		int stt = 0, stt2 = 0;
		printf("높이:");
		scanf_s("%d", &i);

		printf("너비:");
		scanf_s("%d", &k);

		for (stt = 0; stt < i; stt++) {

			for (stt2 = 0; stt2 < k; stt2++) {

				printf("*");

			}
			printf("\n");
		}


	}





	16번
		왼쪽아래 직각
		void triangle(int n) {

		int st, stt;

		for (st = 0; st < n; st++) {

			for (stt = 0; stt < st; stt++) {

				printf("*");

			}
			printf("\n");

		}


	}

	왼쪽위 직각

		void triangle(int n) {

		int st, stt;

		for (st = 0; st < n; st++) {

			for (stt = 0; stt < st; stt++) {

				printf("*");

			}
			printf("\n");

		}


	}

	오른쪽 위 직각

		void triangle(int n) {

		int st, stt;

		for (st = 0; st < n; st++) {

			for (stt = 0; stt < n; stt++) {


				if (stt < st) {
					printf(" ");
					continue;
				}


				printf("*");

			}

			printf("\n");
		}

	}

	오른쪽 아래 직각

		void triangle(int n) {

		int st, stt;

		for (st = 0; st < n; st++) {

			for (stt = 0; stt < n; stt++) {


				if (stt < n - st - 1) {
					printf(" ");
					continue;
				}


				printf("*");

			}

			printf("\n");
		}

	}

	17번 n단 피라미드

		void triangle(int n) {

		int st, stt;

		int count;

		for (st = 1; st <= n; st++) {


			for (count = 1; count < n - st + 1; count++) {

				printf(" ");

			}

			for (stt = 1; stt <= 2 * st - 1; stt++) {

				printf("*");


			}
			printf("\n");

		}

	}


	18번

		void triangle(int n) {

		int st, stt;

		int count;

		for (st = n; st >= 1; st--) {


			for (count = 1; count < n - st + 1; count++) {

				printf(" ");

			}

			for (stt = 1; stt <= 2 * st - 1; stt++) {

				printf("%d", count);


			}
			printf("\n");

		}

	}





