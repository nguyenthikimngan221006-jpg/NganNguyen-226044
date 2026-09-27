#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
void main()
{

	//Bài 16. Nhập vào chỉ số điện tiêu thụ trong tháng. Tính tiền điện theo quy tắc:
	//0–50 kWh: 1.800đ/kWh
	//51–100 kWh: 2.000đ/kWh
	//101–200 kWh: 2.500đ/kWh
	//Trên 200 kWh: 3.000đ/kWh
	//int dien;
	//float tien;
	//printf("Nhap vao so dien can tinh: ");
	//scanf("%d", &dien);
	//if (dien >200)
	//{
	//	tien = 50*1800 + 50 * 2000 + 100 * 2500 + (dien - 200)*3000;
	//}
	//else if (dien >= 101 && dien <= 200)
	//{
	//	tien = 50 * 1800 +50 *2000 + (dien -100) * 2500;
	//}
	//else if (dien >= 51 && dien <= 100)
	//{
	//	tien = 50 * 1800 +(dien -50)  * 2000;
	//}
	//else 
	//{
	//	tien = dien * 1800;
	//}
	//printf("Tong so tien dien la: %f", tien);

	//bài 19
	//int a, b, c;
	//char opr;
	//printf("Nhap a: ");
	//scanf("%d", &a);
	//printf("Nhap b: ");
	//scanf("%d", &b);
	//printf("Nhap c: ");
	//scanf("%d", &c);
	//
	//printf("Nhap phep toan +, -, *, /: ");
	//scanf(" %c", &opr);
	//switch (opr)
	//{
	//case '+':
	//	printf("Tong cac so: %d\n", a + b + c);
	//	break;
	//case '-':
	//	printf("Hieu cac so: %d\n", a - b - c);
	//	break;
	//case '*':
	//	printf("Tich cac so: %d\n", a * b * c);
	//	break;
	//case '/':
	//	if (b == 0 || c == 0)
	//	{
	//		printf("Khong the thuc hien phep chia cho 0 \n");
	//	}
	//	else
	//	{
	//		printf("thuong cac phep chia: %d\n", a / b / c);
	//
	//	}
	//	break;
	//default:
	//	printf("Phep toan khong hop le:");
	//	break;
	//}


	//for (int i = 0; i < 5; i++)
	//{
	//	printf("Hello world\n");
	//}
	//return 0;
	//for (int i = 0; i < 5; i++)
	//{
	//	if (i == 2) continue;
	//	printf("lan chay: %d\n", i );
	//}
	//return 0;
	//int tong = 0;
	//for (int i = 1; i <= 10; i++)
	//{
	//	tong = tong +i ;
	//}
	//printf("tong: %d\n", tong);

	//Vòng lặp while, lặp với số lần chưa biết trước
	//cú pháp, nếu ko có điều kiện trong ngoặc  thì nó sẽ chạy hoài không dừng
	//int j = 28;
	//while (j % 2 ==0 )
	//{
	//	printf("lan chay%d\n", j);
	//	j = j / 2;
	//}
// vòng lặp do...while
 //   int j = 28;
	//int k = 0;
	//while (k != j)
	//{
	//	printf("nhap gia tri k bang j: ");
	//	scanf("%d", &k);
	//}


// cú pháp 
	//do
	//{

	//}//	while (dieu_kien);
	//int j = 28;
	//int k = 28;
	//do
	//{
	//	printf("nhap gia ti k bang j: ");
	//	scanf("%d", &k);

	//} while (k != j);
// bài tập dùng vòng lặp for in ra bảng cửu chương 2
//int tich;
//for (int i = 0; i <= 10; i++)
//{
//	tich = i * 2;
//	printf("Bang cuu chuong 2: 2* %d = %d\n", i, tich);
//}


//for (int i = 0; i < 10; i++)
//{
//	if (i == 4) continue;
//	printf("Bang cuu chuong %d\n", i);
//	for (int j = 0; j <= 10; j++)
//	{
//		printf("%d * %d= %d\n",i,j,i*j);
//
//	}
//	printf("\n");
//}
//bt 2 Nhập vào số nguyên từ bàn phím tính và in kết quả ra giai thừa của n (1*2*3*4*n)
//int n;
//int giaithua =1;
//printf("Nhap vao gia tri n: ");
//scanf("%d", &n);
//for (int a =1 ;a <=n; a++)
//{
//	giaithua = giaithua * a;
//}
//printf("Ket qua cua giai thua: %d", giaithua);
//return 0;
//}

//Nhập vào số nguyên n từ bàn phím
// kiểm tra xem số đó có phải là số nguyên tố không
// nếu đúng in ra màn hình n là số nguyên tố
// nếu sai thì in ra n không phải là só nguyên tố
//int n;
//int b;
//	printf("Nhap vao so n: ");
//	scanf("%d", &n);
//	if (n <= 1)
//	{
//		printf("%d khong phai la so nguyen to\n", n);
//	}
//	else
//	{
//		for (int a = 1; a <= n;a++)
//		{
//			if (n % a == 0)
//			{
//				b = b + 1;	
//			}
//		}
//		if (b == 2)
//		{
//			printf("%d la so nguyen to", n);
//		}
//		else
//		{
//			printf("n khong phai la so nguyen to");
//		}
//	}

//	return 0;
//int n = 0;
//pritnf("Nhap n: ");
//scanf("%d", &n);
//int isSnt = 1;
//for (int i = 2; i < n /2; i++)
//{
//	if (n % i == 0)
//	{
//		isSnt = 0;
//		break;
//	}
//}
//if (isSnt)
//{
//	printf("%d la so nguyen to\n", n);
//}
//else
//{
//	printf("%d khong phai la so nguyen to");
//}

//BT4 Nhập vào số nguyên n, đếm xem số lượng chữ số của n và in ra màn hình
// Vd 97421 -> n có 5 chữ số 
// gợi ý dùng vòng lặp while kết hợp chia nguyên cho 10 để đếm
	int n;
	int a = 0;
	printf("Nhap vao so n: ");
	scanf("%d", &n);
	int t = n;
	if (n == 0)
	{
		printf("So 0 có 1 chu so");
	}
	else
	{
		while (n > 0)
		{
			n = n / 10;
			a ++;

		}
		printf("So %d co %d chu so", t, a);
	}
	

}













