#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
#include <stdlib.h>
#include <time.h>
#include "lib.h"
//
//
//	// vòng lặp for, lặp với số lần biết trước
//
//	// cú pháp
//	//	int tong = 0;
//	//	int n;
//	//	printf("Nhap vao so n: ");
//	//	scanf("%d", &n);
//	//	for (int i = 0; i <= n; i++)
//	//	{
//	//		tong = tong + i;
//	//
//	//	}
//	//	printf("Tong cua %d so la: %d ", n, tong);
//	//	return 0;
//	//
//	//}
//
//
//
//
//		// vòng lặp while, lặp với số lần chưa biết trước
//
//		// cú pháp
//		//int j = 0;
//		//int k = 0;
//		//while (k != j)
////
////
////	int j;
////	int k;
////	
////
////	printf("Nhap so j: ");
////	scanf("%d", &j);
////
////	printf("Nhap vao so k: ");
////	scanf("%d", &k);
////
////	while (k != j)
////	{
////		printf("Gia tri cua k la: %d\n", k);
////		k++; 
////	}
////
////	printf("So k bang so j (k = %d, j = %d)\n", k, j);
////
////	return 0;
////}
//
//
//
//		// btvn
//	// BT1:
//	// Tìm ước chung lớn nhất (GCD)
//	// Nhập hai số nguyên dương A và B, sử dụng vòng lặp để tìm ƯCLN của hai số.
//	// Không sử dụng hàm có sẵn.
////
////	int a, b;
////	printf("Nhap vao so a: ");
////	scanf("%d", &a);
////	printf("Nhap vao so b: ");
////	scanf("%d", &b);
////
////	int min = (a < b) ? a : b; 
////	printf("So nho nhat la %d " ,min);
////	for (int i = min; i > 0; i--)
////	{
////		if ((a % i == 0 && b % i == 0) || i == 1) {
////			printf("  UCLN: %d \n", i);
////			break;
////		}
////	}
////	
////}
//
//// Tìm bội chung nhỏ nhất của 2 số 
//
////	int a, b;
////	printf("Nhap vao a: ");
////	scanf("%d", &a);
////	printf("Nhap vao b: ");
////	scanf("%d", &b);
////
////	int max = (a > b) ? a : b;
////	for (int n = max; ;n++)
////	{
////		if ((n % a == 0 && n % b == 0))
////		{
////			printf("BCNN %d", n);
////			break;
////		}
////	}
////}
//
//
//
//
//// // BT2: Trò chơi đoán số
//// Chương trình sinh ra một số bí mật trong khoảng 1–100. Người dùng liên tục nhập số dự đoán cho đến khi đoán đúng. Sau mỗi lần nhập:
//// Nếu số nhập nhỏ hơn số bí mật → thông báo "Lon hon"
//// Nếu số nhập lớn hơn → thông báo "Nho hon"
//// Nếu đúng → thông báo số lần đoán.
//
////	srand(time(NULL));
////
////	int sbm = rand() % 100 + 1;
////	int count = 0;
////	int n = 0;
////	do {
////		count++;
////		printf("nhap so ban doan: ");
////		scanf("%d", &n);
////		if (n > sbm)
////		{
////			printf("ban da nhap so lon hon so bi mat \n");
////		}
////		else if (n < sbm)
////		{
////			printf("ban da nhap so nho hon so bi mat \n");
////		}
////		else
////		{
////			printf("chuc mung ban da nhap dung sau %d lan \n", count);
////		}
////	} while (n != sbm);
////
////}
////
////	srand(time(NULL));
////	int sbm = rand() % 1000 + 1;
////	int count = 0;
////	int n = 0;
////	do
////	{
////		count++;
////		printf("Nhap so bi mat: \n");
////		scanf("%d", &n);
////		if (n > sbm)
////		{
////			printf("So bi mat la so nho hon \n");
////		}
////		else if (n < sbm)
////		{
////			printf("So bi mat la so lon hon \n");
////		}
////
////		else
////		{
////			printf("Ban da nhap dung so bi mat o lan thu %d \n", count);
////		}
////	} while (n != sbm);
////}
//
//
//
////	srand(time(NULL));
////	char kitubm = 'a' + rand() % 26;
////	char n;
////	int count = 0;
////	do
////	{
////		count++;
////		printf("Hay nhap ki tu ban chon: \n");
////		scanf(" %c", &n);
////
////		if (n > kitubm)
////		{
////			printf("Ki tu bi mat nam o phia truoc: \n");
////		}
////		else if (n < kitubm)
////		{
////			printf("Ki tu bi mat nam o sau: \n");
////		}
////		else
////		{
////			printf("Chuc mung ban da doan trung duoc ki tu bi mat o lan doan thu %d", count);
////		}
////	} while (n != kitubm);
////}
//
//
//
//// Hàm
//// - Hàm dùng để miêu tả 1 công việc hoặc hành động nào đó
//// vd:  hàm printf dùng để in ra màn hình console,
////		hàm scanf dùng để scan dữ liệu từ bàn phím
//// - khi xây dựng hàm thì cần xác định:
////	+ chức năng của hàm: hàm dùng để làm gì
////  + input: hàm cần truyền cái gì vào
////  + output: hàm cần trả ra cái gì
//// - cú pháp khai báo hàm:
//// <kiểu_dữ_liệu_trả_về> tên_hàm (<các biến chứa input>) 
//// {
////		// viết code
//// }
//// vd: xây dựng hàm cộng 2 số nguyên
////  + chức năng của hàm: cộng 2 số nguyên
////  + input: 2 số nguyên cần cộng
////  + output: kết quả của phép cộng 2 số đó
//// vd: xây dựng hàm kiểm tra số nguyên tố
////  + chức năng của hàm: dùng để kiểm tra số nguyên tố
////  + input: 1 số nguyên
////  + output: 1 nếu đúng, 0 nếu sai
//
////
//	//int add(int a, int b)
//	//{
//	//	int tong = a + b;
//	//	return tong;
//	//}
//
//
//
//
//
//// khai báo(lib.h) và xây dựng hàm tìm ucln của 2 số nguyên (lib.c)
////
////int ucln1 = tim_ucln(12, 20); // return 4
////printf("ucln1: %d \n", ucln1);
////
////int ucln2 = tim_ucln(30, 45); // return 15
////printf("ucln2: %d \n", ucln2);
////
////// khai báo(lib.h) và xây dựng hàm tìm bcnn của 2 số nguyên (lib.c)
////
////int bcnn1 = tim_bcnn(3, 4); // return 12
////printf("bcnn1: %d \n", bcnn1);
////
////int bcnn2 = tim_bcnn(30, 45); // return 90
////printf("bcnn2: %d \n", bcnn2);
//
//
////char x = kiem_tra_so_nguyen_to(15);
////// in ra tất cả số nguyên tố từ 1 -> 100;
////
////for (int i = 1; i <= 100; i++)
////
////		if (kiem_tra_so_nguyen_to(i)) {
////			printf("%d la so nguyen to \n", i);
////		}
////	}
//
//
//// Mảng
//// - mảng là tập hợp các biến có cùng kiểu dữ liệu
//// - cú pháp: <kiểu dữ liệu> tên_mảng[<số lượng phần tử>] = {<giá trị khởi tạo ban đầu>};
//// - chú ý: số phần tử trong mảng phải là 1 con số, không được là biến
//// - sử dụng: truy cập vào phần tử thông qua index(bắt đầu từ 0)
//// ta sẽ có các biến arr[0], arr[1], ...
//
//
////// Cộng mảng
//	//int arr[10] = { 3,2,5,6,5,6,2,1,12,32 };
////	int tong = 0;
////	for (int i = 0; i < 5; i++)
////	{
////		tong += arr[i];
////		printf("Tong %d\n", tong);
////	}
//
//
////	// in ra giá trị min, max và vị trí tương ứng của nó trong mảng arr
////	int arr[10] = { 3,2,5,6,5,6,2,1,12,32 };
////	int max = arr[0];
////	int min = arr[0];
////	int posi_max = 0;
////	int posi_min = 0;
////	for (int i = 0; i < 10; i++)
////	{
////		if (arr[i] > max)
////		{
////			max = arr[i];
////			posi_max = i;
////		}
////		if (arr[i] < min)
////		{
////			min = arr[i];
////			posi_min = i;
////		}
////	
////	}
////	printf("\tGia tri max la %d,\t Vi tri thu %d\n ", max, posi_max);
////	printf("\tGia tri min la %d,\t Vi tri thu %d\n ",min, posi_min);
////
//
//
//
//
//	//int arr1[] = { 1,2,3,4,5,6,7,8,9, 10 };
//	//int length = sizeof(arr1) / sizeof(arr1[0]);
//	//for (int j = 0; j < length; j++)
//	//{
//	//	printf("j[%d]: %d \n", j, arr1[j]);
//	//}
//	//char t = 'a';
//	//sizeof(t);
//
//
//
//	//### ** Bài 1.4: Đếm phân loại phần tử * *
//
//	//	-**Yêu cầu : **Duyệt mảng và đếm xem có bao nhiêu số chẵn và bao nhiêu số lẻ.
//	//	- **Đầu vào : **Số nguyên n và n phần tử của mảng.
//	//	- **Đầu ra : **2 số nguyên tương ứng với số lượng phần tử chẵn và lẻ.
//	//int arr1[] = { 3, 4, 7, 3, 1, 2 };
//	//	Input : 6 | 3 4 7 3 1 2
//
//	//	Output : Chan : 2, Le : 4
//
//
//
//
////int arr1[] = { 3, 4, 7, 3, 1, 2 };
////int count_odd = 0;
////int count_even = 0;
////
////
////
////int lenght_arr1 = sizeof(arr1) / sizeof(arr[0]);
////
////	for (int i = 0; i < lenght_arr1; i++)
////	{
////		if (arr[i] % 2 == 0)
////		{
////			count_even++;
////		}
////		else
////		{
////			count_odd++;
////		}
////	}
////	printf("so phan tu chan: %d \n", count_even);
////	printf("so phan tu le: %d \n", count_odd);
//
//
//
//
//
//
//
//	//int arr[100];
//	//int n;
//	//int count_odd = 0;
//	//int count_even = 0;
//	//int posi;
//	//
//	//printf("Nhap so luong phan tu cua mang : ");
//	//scanf("%d", &n);
//
//	//printf("Nhap cac phan tu cua mang:\n");
//	//for (int i = 0; i < n; i++)
//	//{
//	//	printf("arr[%d] = ", i);
//	//	scanf("%d", &arr[i]);
//	//}
//	//for (int i = 0; i < n; i++)
//	//{
//	//	if (arr[i] % 2 == 0)
//	//	{
//	//		count_even++;
//	//		
//	//
//	//	}
//	//	else
//	//	{
//	//		count_odd++;  
//	//	}
//	//}
//
//	//printf("So phan tu chan: %d\n", count_even);
//	//printf("So phan tu le: %d \n", count_odd);
//
//	//return 0;
//
//
////
////	int arr[100];
////	int even_pos[100], odd_pos[100]; // Mảng chứa các vị trí
////	int n;
////	int count_odd = 0;
////	int count_even = 0;
////
////	printf("Nhap so luong phan tu cua mang: ");
////	scanf("%d", &n);
////
////	printf("Nhap cac phan tu cua mang:\n");
////	for (int i = 0; i < n; i++)
////	{
////		printf("arr[%d] = ", i);
////		scanf("%d", &arr[i]);
////	}
////
////	// Phân loại vị trí chẵn/lẻ
////	for (int i = 0; i < n; i++)
////	{
////		if (arr[i] % 2 == 0)
////		{
////			even_pos[count_even] = i; // Lưu lại vị trí i vào mảng chẵn
////			count_even++;
////		}
////		else
////		{
////			odd_pos[count_odd] = i;   // Lưu lại vị trí i vào mảng lẻ
////			count_odd++;
////		}
////	}
////
////	// In kết quả tổng số lượng và các vị trí
////	printf("\nSo phan tu chan: %d \t O cac vi tri: ", count_even);
////	for (int i = 0; i < count_even; i++) {
////		printf("%d ", even_pos[i]);
////	}
////
////	printf("\nSo phan tu le: %d \t O cac vi tri: ", count_odd);
////	for (int i = 0; i < count_odd; i++) {
////		printf("%d ", odd_pos[i]);
////	}
////	printf("\n");
////
////	return 0;
//
//
//
//// struct là 1 kiểu cấu trúc dữ liệu
//// cho phép nhóm nhiều thành viên dữ liệu vào cùng 1 đối tượng
//// 
//// 
////typedef dùng để tạo tên khác cho 1 kiểu dữ liệu đã có
//
////Kiểu tạo dữ liệu phân số
//	//struct phan_so
//	//{
//	//	int tu_so;
//	//	int mau_so;
//	//};
//	//typedef struct phan_so phan_so_t;// có thể đặt teeb gì cũng được á 
//
//	//hoặc 
//	typedef struct
//	{
//		int tu_so;
//		int mau_so;
//
//	}phan_so_t;
//
//
//	// in phân số ra màn hình console
//	//void in_phan_so(struct phan_so a)
//	//{
//	//	printf("phan so: %d/ %d\n", a.tu_so, a.mau_so);
//	//}
//
//
//	//void main()
//	//{
//	//	struct phan_so A;
//	//	A.tu_so = 1;
//	//	A.mau_so = 2;
//	//	in_phan_so (A);
//	//	struct phan_so B = { .tu_so = 2, .mau_so = 4 };
//	//	in_phan_so(B);
//
//	//	phan_so_t d = { 7,9 };
//	//	in_phan_so(d);
//	//}
//
//
////void in_phan_so ( phan_so_t a)
////{
////	printf("phan so: %d/ %d\n", a.tu_so, a.mau_so);
////}
////
////
////phan_so_t nhan_phan_so(phan_so_t a, phan_so_t b)
////{
////	phan_so_t kq;
////	kq.tu_so = a.tu_so * b.tu_so;
////	kq.mau_so = a.mau_so * b.mau_so;
////	return kq;
////}
////
////
////	void main()
////	{
////		phan_so_t a = { 7, 9 };
////		in_phan_so(a);
////		phan_so_t b = { 2, 3 };
////		in_phan_so(b);
////		phan_so_t c = nhan_phan_so(a, b); //c = 14 / 27;
////		in_phan_so(c);
////	}
//
//
//
//	//void in_phan_so(phan_so_t a)
//	//{
//	//	printf("phan so: %d/ %d\n", a.tu_so, a.mau_so);
//	//}
//
//
//	//phan_so_t nhan_phan_so(phan_so_t a, phan_so_t b)
//	//{
//	//	phan_so_t kq;
//	//	kq.tu_so = a.tu_so * b.tu_so;
//	//	kq.mau_so = a.mau_so * b.mau_so;
//	//	return kq;
//	//}
//
//	//phan_so_t cong_hai_phan_so(phan_so_t a, phan_so_t b)
//	//{
//	//	phan_so_t kqc;
//	//	kqc.tu_so = a.tu_so * b.mau_so + b.tu_so * a.mau_so ;
//	//	kqc.mau_so = a.mau_so * b.mau_so  ;
//	//	return kqc;
//	//}
//
//
//	//void main()
//	//{
//	//	phan_so_t a = { 1, 4 };
//	//	in_phan_so(a);
//	//	phan_so_t b = { 3, 6 };
//	//	in_phan_so(b);
//	//	phan_so_t c = nhan_phan_so(a, b); //c = 3/24;
//	//	in_phan_so(c);
//
//	//	phan_so_t d = cong_hai_phan_so(a, b); //d=18/24;
//	//	in_phan_so(d);
//	//}
//
//	//
//	//
//	// Rút gọn
//	//B1. tìn ucln của tử số và mẫu số 
//	//B2. Lấy tử số và mẫu số chia cho ucln và gán vào phân số của kết quả
//
//	//void in_phan_so(phan_so_t a)
//	//{
//	//	printf("phan so: %d/ %d\n", a.tu_so, a.mau_so);
//	//}
//
//
//
//
//	//
//
//	//phan_so_t rut_gon(phan_so_t a)
//	//	{
//	//	int ucln = tim_ucln(a.tu_so, a.mau_so);
//	//	phan_so_t kqrg;
//	//	kqrg.tu_so = a.tu_so / ucln;
//	//	kqrg.mau_so = a.mau_so / ucln;
//	//	return kqrg;
//
//	//	}
//
//	//phan_so_t nhan_phan_so(phan_so_t a, phan_so_t b)
//	//{
//	//	phan_so_t kq;
//	//	kq.tu_so = a.tu_so * b.tu_so;
//	//	kq.mau_so = a.mau_so * b.mau_so;
//	//	return kq;
//	//}
//
//	//phan_so_t cong_hai_phan_so(phan_so_t a, phan_so_t b)
//	//{
//	//	phan_so_t kqc;
//	//	kqc.tu_so = a.tu_so * b.mau_so + b.tu_so * a.mau_so;
//	//	kqc.mau_so = a.mau_so * b.mau_so;
//	//	return kqc;
//	//}
//
//
//	//void main()
//	//{
//	//	phan_so_t a = { 1, 4 };
//	//	in_phan_so(a);
//	//	phan_so_t b = { 3, 6 };
//	//	in_phan_so(b);
//	//
//	//	phan_so_t c = nhan_phan_so(a, b); //c = 3/24;
//	//	in_phan_so(c);
//
//	//	phan_so_t d = cong_hai_phan_so(a, b); //d=18/24;
//	//	in_phan_so(d);
//	//	phan_so_t e = rut_gon(d); //e=3/4;
//	//	in_phan_so(e);
//	//}
//
//
//
//
//void in_phan_so(phan_so_t a)
//{
//	printf("phan so: %d/ %d\n", a.tu_so, a.mau_so);
//}
//
//
//
//
//
//
////phan_so_t rut_gon(phan_so_t* a)
////{
////	int ucln = tim_ucln(a ->tu_so,a ->mau_so); //hoặc (*a).tu_so
////	//phan_so_t kqrg;
////	a->tu_so = a->tu_so / ucln;
////	a->mau_so = a->mau_so / ucln;
////	//return kqrg;
////
////}
////
////phan_so_t nhan_phan_so(phan_so_t a, phan_so_t b)
////{
////	phan_so_t kq;
////	kq.tu_so = a.tu_so * b.tu_so;
////	kq.mau_so = a.mau_so * b.mau_so;
////	return kq;
////}
////
////phan_so_t cong_hai_phan_so(phan_so_t a, phan_so_t b)
////{
////	phan_so_t kqc;
////	kqc.tu_so = a.tu_so * b.mau_so + b.tu_so * a.mau_so;
////	kqc.mau_so = a.mau_so * b.mau_so;
////	return kqc;
////}
////
////
////void main()
////{
////	phan_so_t a = { 1, 4 };
////	in_phan_so(a);
////	phan_so_t b = { 3, 6 };
////	in_phan_so(b);
////
////	phan_so_t c = nhan_phan_so(a, b); //c = 3/24;
////	in_phan_so(c);
////
////	phan_so_t d = cong_hai_phan_so(a, b); //d=18/24;
////	in_phan_so(d);
////	 rut_gon(&d); //e=3/4;
////	in_phan_so(d);
////}
//
//
//
//
//// hàm tìm giá tị lớn nhất trong mảng
//void in_phan_so(phan_so_t a)
//{
//	printf("phan so: %d/ %d\n", a.tu_so, a.mau_so);
//}
//
//
//
//
//
//
//phan_so_t rut_gon(phan_so_t* a)
//{
//	int ucln = tim_ucln(a ->tu_so,a ->mau_so); //hoặc (*a).tu_so
//	//phan_so_t kqrg;
//	a->tu_so = a->tu_so / ucln;
//	a->mau_so = a->mau_so / ucln;
//	//return kqrg;
//
//}
//
//
////param 1 địa chỉ bắt đầu của mảng
////param 2 kích thước của mảng
//// return vị trí của số lớn nhất
//
//
//int arr_max_val(int* arr, int len)
//{
//	int max = arr[0];
//	int vi_tri_max = 0;
//	for (int i = 0; i < len; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			vi_tri_max = i;
//		}
//	}
//	return vi_tri_max;
//}
//
//phan_so_t nhan_phan_so(phan_so_t a, phan_so_t b)
//{
//	phan_so_t kq;
//	kq.tu_so = a.tu_so * b.tu_so;
//	kq.mau_so = a.mau_so * b.mau_so;
//	return kq;
//}
//
//phan_so_t cong_hai_phan_so(phan_so_t a, phan_so_t b)
//{
//	phan_so_t kqc;
//	kqc.tu_so = a.tu_so * b.mau_so + b.tu_so * a.mau_so;
//	kqc.mau_so = a.mau_so * b.mau_so;
//	return kqc;
//}
//
//
//void main()
//{
//	phan_so_t a = { 1, 4 };
//	in_phan_so(a);
//	phan_so_t b = { 3, 6 };
//	in_phan_so(b);
//
//	phan_so_t c = nhan_phan_so(a, b); //c = 3/24;
//	in_phan_so(c);
//
//	phan_so_t d = cong_hai_phan_so(a, b); //d=18/24;
//	in_phan_so(d);
//	 rut_gon(&d); //e=3/4;
//	in_phan_so(d);
//}
//
//
//
//
//phan_so_t arr_ps [] =
//{
//	{1,3} ,
//	{2,5} ,
//	{3,2} ,
//	{5,3} ,
//	{6,11} ,
//
//
//};
//
////Hàm tìm vị trí của phân số lớn nhất trong mảng phân số
//// input địa chỉ bắt đầu của mảng phân số 
//// output vị trid của phân số lớn nhất
//
//
//int arr_ps_max_val (phan_so_t* arr, int len)
//{
//	int max = 0;
//	int vi_tri_max = 0;
//	for (int i = 0; ; i++)
//	{
//		if (arr_ps[] > max)
//		{
//			max = arr_ps[i];
//			vi_tri_max = i;
//		}
//	}
//	return vi_tri_max;
//}
//
////char
////unsigned char
////short
////signed short
////int 
////long long
////float 
////double
////
//
//
//
//

typedef struct
{
	int tu_so;
	int mau_so;
}; phan_so_t;


typedef struct
{
	char* ten;
	int tuoi;
	float diemtoan;
	float diemvan;
}hoc_sinh_t;

//void in_thong_tin(hoc_sinh_t hs)
//{
//	printf("Ten: %s, tuoi: %d, diemtoan: %.1f, diemvan: %.1f", hs.ten, hs.tuoi, hs.diemtoan, hs.diemvan);
//
//}

float tinh_diem_trung_binh(hoc_sinh_t hs)
{
	float dtb = (hs.diemtoan + hs.diemvan) / 2.;
	return dtb;
}

void main()
{
	hoc_sinh_t hs1 = { "An", 16, 8.5, 7.3 };
	in_thong_tin(hs1);
	float dtb = tinh_diem_trung_binh(hs1);


	
//Viết hàm tính và trả ra điểm trung bình của 1 học sinh
// điểm toán cộng điểm văn chia 2




	printf(" dtb: %.1f",  dtb);

}

