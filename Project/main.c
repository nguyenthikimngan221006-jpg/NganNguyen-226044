#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
void main()
{


	// vòng lặp for, lặp với số lần biết trước

	// cú pháp
	//	int tong = 0;
	//	int n;
	//	printf("Nhap vao so n: ");
	//	scanf("%d", &n);
	//	for (int i = 0; i <= n; i++)
	//	{
	//		tong = tong + i;
	//
	//	}
	//	printf("Tong cua %d so la: %d ", n, tong);
	//	return 0;
	//
	//}




		// vòng lặp while, lặp với số lần chưa biết trước

		// cú pháp
		//int j = 0;
		//int k = 0;
		//while (k != j)
//
//
//	int j;
//	int k;
//	
//
//	printf("Nhap so j: ");
//	scanf("%d", &j);
//
//	printf("Nhap vao so k: ");
//	scanf("%d", &k);
//
//	while (k != j)
//	{
//		printf("Gia tri cua k la: %d\n", k);
//		k++; 
//	}
//
//	printf("So k bang so j (k = %d, j = %d)\n", k, j);
//
//	return 0;
//}



		// btvn
	// BT1:
	// Tìm ước chung lớn nhất (GCD)
	// Nhập hai số nguyên dương A và B, sử dụng vòng lặp để tìm ƯCLN của hai số.
	// Không sử dụng hàm có sẵn.
//
//	int a, b;
//	printf("Nhap vao so a: ");
//	scanf("%d", &a);
//	printf("Nhap vao so b: ");
//	scanf("%d", &b);
//
//	int min = (a < b) ? a : b; 
//	printf("So nho nhat la %d " ,min);
//	for (int i = min; i > 0; i--)
//	{
//		if ((a % i == 0 && b % i == 0) || i == 1) {
//			printf("  UCLN: %d \n", i);
//			break;
//		}
//	}
//	
//}

// Tìm bội chung nhỏ nhất của 2 số 

//	int a, b;
//	printf("Nhap vao a: ");
//	scanf("%d", &a);
//	printf("Nhap vao b: ");
//	scanf("%d", &b);
//
//	int max = (a > b) ? a : b;
//	for (int n = max; ;n++)
//	{
//		if ((n % a == 0 && n % b == 0))
//		{
//			printf("BCNN %d", n);
//			break;
//		}
//	}
//}




// // BT2: Trò chơi đoán số
// Chương trình sinh ra một số bí mật trong khoảng 1–100. Người dùng liên tục nhập số dự đoán cho đến khi đoán đúng. Sau mỗi lần nhập:
// Nếu số nhập nhỏ hơn số bí mật → thông báo "Lon hon"
// Nếu số nhập lớn hơn → thông báo "Nho hon"
// Nếu đúng → thông báo số lần đoán.

//	srand(time(NULL));
//
//	int sbm = rand() % 100 + 1;
//	int count = 0;
//	int n = 0;
//	do {
//		count++;
//		printf("nhap so ban doan: ");
//		scanf("%d", &n);
//		if (n > sbm)
//		{
//			printf("ban da nhap so lon hon so bi mat \n");
//		}
//		else if (n < sbm)
//		{
//			printf("ban da nhap so nho hon so bi mat \n");
//		}
//		else
//		{
//			printf("chuc mung ban da nhap dung sau %d lan \n", count);
//		}
//	} while (n != sbm);
//
//}
//
//	srand(time(NULL));
//	int sbm = rand() % 1000 + 1;
//	int count = 0;
//	int n = 0;
//	do
//	{
//		count++;
//		printf("Nhap so bi mat: \n");
//		scanf("%d", &n);
//		if (n > sbm)
//		{
//			printf("So bi mat la so nho hon \n");
//		}
//		else if (n < sbm)
//		{
//			printf("So bi mat la so lon hon \n");
//		}
//
//		else
//		{
//			printf("Ban da nhap dung so bi mat o lan thu %d \n", count);
//		}
//	} while (n != sbm);
//}



	srand(time(NULL));
	char kitubm = 'a' + rand() % 26;
	char n;
	int count = 0;
	do
	{
		count++;
		printf("Hay nhap ki tu ban chon: \n");
		scanf(" %c", &n);

		if (n > kitubm)
		{
			printf("Ki tu bi mat nam o phia truoc: \n");
		}
		else if (n < kitubm)
		{
			printf("Ki tu bi mat nam o sau: \n");
		}
		else
		{
			printf("Chuc mung ban da doan trung duoc ki tu bi mat o lan doan thu %d", count);
		}
	} while (n != kitubm);
}

