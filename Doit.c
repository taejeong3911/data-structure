//1�� �� ���� �ִ�

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

	//2�� ������ �ּҰ�

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

	//3�� �� ���� �ּڰ�

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


	//4�� �߾Ӱ� ���ϱ�
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

	//5�� ȿ���� ��������
	���� ��� if ((b >= a && c <= a) || (b <= a && c >= a)���� ù�� °
		���ǿ� ������ �Ǹ� �ڿ� �ִ� �κе� ������ ������ �ȵǱ⿡ ��ȿ�����̴�.

		//6��

#include<stdio.h>

		int main() {

		int i, n;
			int sum;
			puts("1���� n������ ���� ���մϴ�.");
		printf("n�� ��");
		scanf_s("%d", &n);
		sum = 0;
		i = 1;

		while (i <= n) {

			sum += i;
			i++;

		}

		printf("1���� %d������ ���� %d�̴�.\n", n, sum);

		printf("i���� %d�̰� i + 1�� �����ϴ�.", i);


	}

	//7��

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

	8��
#include<stdio.h>

		int main() {

		int i;
		int sum;
		scanf_s("%d", &i);

		sum = (1 + i) * (i / 2);

		printf("%d", sum);

	}

	9��
#include<stdio.h>
		int sumof(int a, int b);



	int main() {

		int a, b;

		printf("�μ��� �Է��϶�:");

		scanf_s("%d %d", &a, &b);

		printf("���� %d�̴�.", sumof(a, b));

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

	10��

#include<stdio.h>

		int main() {

		int i, n;
		int sum;


		while (1)
		{

			printf("i�� ��:");
			scanf_s("%d", &i);
			printf("n�� ��:");
			scanf_s("%d", &n);

			if (i < n)
			{
				sum = n - i; break;
			}
			else
				printf("i���� ū���� �Է��ϼ���.\n");
		}


		printf("b-a�� %d�̴�.", sum);




	}

	11��

#include <stdio.h>

		int main(void)
	{
		int n;
		int digits = 0;

		do {
			printf("���� �����Է� : ");
			scanf_s("%d", &n);
		} while (n <= 0);

		while (n > 0) {
			n /= 10;
			digits++;
		}

		printf("�� ���� %d �ڸ��Դϴ�.\n", digits);

		return 0;
	}

	12��

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

	13��

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

	14��

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


	15��

#include<stdio.h>

		int main() {

		int i, k;

		int stt = 0, stt2 = 0;
		printf("����:");
		scanf_s("%d", &i);

		printf("�ʺ�:");
		scanf_s("%d", &k);

		for (stt = 0; stt < i; stt++) {

			for (stt2 = 0; stt2 < k; stt2++) {

				printf("*");

			}
			printf("\n");
		}


	}





	16��
		���ʾƷ� ����
		void triangle(int n) {

		int st, stt;

		for (st = 0; st < n; st++) {

			for (stt = 0; stt < st; stt++) {

				printf("*");

			}
			printf("\n");

		}


	}

	������ ����

		void triangle(int n) {

		int st, stt;

		for (st = 0; st < n; st++) {

			for (stt = 0; stt < st; stt++) {

				printf("*");

			}
			printf("\n");

		}


	}

	������ �� ����

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

	������ �Ʒ� ����

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

	17�� n�� �Ƕ�̵�

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


	18��

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





