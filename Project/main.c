#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<math.h>
void main()
{
	//int n = 0;
	//printf("Nhap gia tri tu ban phim: ");
	//	scanf("%d", &n);
	//printf("Gia tri vua nhap la: %d\n", n);
	

//Bai 1 nhap gia tri tu ban phim

	//printf("Nhap gia tri tu ban phim: ");
	//scanf("%d", &n);
	//printf("He 10: %d\n", n);
	//printf("He 16: %x\n", n);
	  



// bai 2 yeu cau user nhap vao mssv va diem float 
	// in mssv va diem ra man hinh
	//float m=0 ;
	//printf("Nhap mssv: ");
	//scanf("%d", &n);
	//printf("Nhap diem: ");
	//scanf("%f", &m);
	//printf("Mssv cua ban la: %d, Diem cua ban la:%0.1f\n", n,m);
//Bai 3 yeu cau nhap vao hai so nguyen a,b 
	//in ra tong hieu tich thuong cho moi dong

	//int a = 0;
	//int b = 0;

	//printf("Nhap so nguyen a: ");
	//scanf("%d", &a);
	//printf("Nhap so nguyen b: ");
	//scanf("%d", &b);

	//printf("Tong:%d, Hieu:%d, Tich:%d, Thuong:%0.1f, Du:%d\n", a + b, a - b, a * b, (float)(a) / b, a % b);

//Bai 4 Nhap nhiet do c(so nguyen) va doi sang nhiet do f
//in ra manhinh do f (so thuc)
//F = c*9/5+3
	//int c = 0;
	//printf("Nhap nhiet do c: ");
	//scanf("%d", &c);
	//printf("Nhiet do f la:%f\n",(float)c * 9/5 + 32);
// Bài 5 Yêu cầu user nhập vào số giây (số nguyên)
// in ra số giờ số phứt số giây trên mỗi dòng
	//int g = 0;
	//printf("Hay nhap vao so giay: ");
	//scanf("%d" ,&g);
	//printf("So gio: %d\n", g / 3600); g = g % 3600;
	//printf("So phut: %d\n", g / 60); g = g % 60;
	////printf("So giay: %d\n",g);
// Bài 6 Nhập vào bán kính r 
// In ra chu vi, diện tích của hình tròn bán kính r đó trên mỗi dòng
// chu vi =2r*3.14
// diện tích =r*r*3.14
	//int r = 0;
	//printf("Nhap vao ban kinh r: ");
	//scanf("%d", &r);
	//printf("Chu vi cua hinh tron la:%f,Dien tich cua hinh tron la: %f\n",2*r*3.14,r*r*3.14);
	//int x = 48;

	//signed char x = 0b00110000;
	//x |= (1 << 3);

	//printf("x: %d", x);
	// 
	// 
	//reset
	//signed char x = 0b00110000;
	//x |= (1 << 3);
	//printf("x: %d", x);
	//x& = ~(1 << 3);
	//printf("x: %d", x);

	////đọc
	//int y = ((x >> 2) & 1) == 1;
	//printf("y:%d\n", y);
	
	//int age;
	//printf("Hay nhap so tuoi\n");
	//scanf("%d", &age);
	//if (age > 18)
	//{
	//	printf("Du tuoi \n");
	//}
	//else
	//{
	//	printf("Chua du tuoi \n");
	//}
	// 
	// 
	//int diem;
	//printf("Hay nhap so diem vao man hinh: ");
	//scanf ("%d", &diem);
	//if (diem > 8)
	//{
	//	printf("loai gioi\n");
	//}
	//else if (diem > 6.5 && diem < 8)
	//{
	//	printf("loai kha\n");
	//}
	//else if (diem > 5 && diem < 6.5)
	//{
	//	printf("loai trung binh\n");
	//}
	//else
	//{
	//	printf("loai yeu\n");
	//}

//int day = 4;
//
//switch (day)
//{
//
//case 1:
//	printf("Chu nhat\n");
//	break;
//case 2:
//	printf("Thu hai\n");
//	break;
//case 3:
//	printf("Thu ba\n");
//	break;
//case 4:
//	printf("Thu tu\n");
//	break;
//case 5:
//	printf("Thu nam\n");
//	break;
//case 6:
//	printf("Thu sau\n");
//	break;
//case 7:
//	printf("Thu bay\n");
//	break;
//
//}

	 
// Hãy viết chương trình giải phương trình bậc 2 ax^2 +bx +c =0
//Tính delta= b^2 -4ac 
// Nếu delta >0 thì pt có 2 n0 x1= (-b+sqrt(delta))/2a, x2= (-b-sqrt(delta))/2a 
// Nếu delta =0 thì pt có 1n0 kép x1=x2=-b/2a
// nếu delta <0 thì phương trình có vô nghiệm 

//int delta;
//int a, b, c;
//printf("Hay nhap lan luot gia tri cua a,b,c: \n");
//
//printf("Gia tri cua a:");
//scanf("%d", &a);
//
//printf("Gia tri cua b:");
//scanf("%d", &b);
//printf("Gia tri cua c:");
//scanf("%d", &c); 
//
//delta = b*b - 4*a*c;
//printf("Gia tri cua delta la: %d\n",delta);
//
//if (delta > 0)
//{
//	float x1 = (-b + sqrt(delta)) / 2*a;
//	float x2 = (-b - sqrt(delta)) / 2*a;
//	printf("Phuong trinh co 2 n0 phan biet:\n");
//	printf("Gia tri cua x1:%.2f", x1);
//	printf("Gia tri cua x2:%.2f", x2);
////hay printf ("Pt co hai n0 phan biet x1=%.2f,x2=%.2f",x1,x2);
//
//}
//else if (delta = 0)
//{
//	printf("Phuong trinh co 1n0 kep:");
//	float x1 = -b / 2.0*a;
//	printf("Gia tri cua phuong trinh nay la:%.2f", x1);
//}
//else 
//{
//	printf("Phuong trinh nay vo nghiem");
//}


//Bài 2 Nhập vào từ bàn phím số bất kì sau đó kiểm tra số đó là số dương hay số 0 hay là số âm 

//int i;
//printf("Hay nhap so vao ban phim:    ");
//scanf("%d", &i);
//if (i > 0)
//{
//	printf("So nhap vao la so duong");
// }
//else if (i == 0)
//{
//	printf("So nhap vao la so 0"); 
//}
//else
//{
//	printf("So nhap vao la so am");
//}
// Bài 3 Kiểm tra năm nhuận. Nhập vào từ bàn phím số năm
// Nếu đó là năm nhuận thì in ra "đây là năm nhuận". Nếu ko phải in ra "đây ko phai la năm nhuận"
// 1 năm nhuận là năm chia hết cho 400 hoặc chia hết cho 4 nhưng ko chia hết cho 100

//int nam;
//printf("Hay nhap vao so nam can xac dinh:    ");
//scanf("%d", &nam);
//if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
//{
//	printf("Day la nam nhuan");
//else 
//{
//	printf("Day khong phai la nam nhuan");
//}

//Bìa 4 nhập vào banf phím 3 số a, b, c. In ra số lớn nhất trong ba số.
//int a, b, c;
//
//printf("Nhap vao ban phim 3 so a, b, c\n");
//printf("Nhap vao so a:");
//scanf("%d", &a);
//printf("Nhap vao so b:");
//scanf("%d", &b);
//printf("Nhap vao so c:");
//scanf("%d", &c);

//if (a>b && a>c)
//{
//	printf("So lon nhat trong ba so la:%d", a);
//}
//else if (b>a && b>c)
//{
//	printf("So lon nhat trong ba so la:%d", b);
//}
//else if (c>a && c>b)
//{
//	printf("So lon nhat trong ba so la:%d", c);
//}
//int max = a;
//if (b > max)
//{
//	max = b;
//}
//if (c > max)
//{
//	max = c;
//}
//printf("so lon nhat la:   %d", max);

// Bài 5: Tính tiền điện: Nhập vào số điện sử dụng bất kì yêu cầu tính tiền điện theo bậc 
// Bậc 1 (0 - 50 kWh): 1.984 đồng/kWh
// Bậc 2 (51 - 100 kWh): 2.050 đồng/kWh
// Bậc 3 (101 - 200 kWh): 2.380 đồng/kWh
// Bậc 4 (201 - 300 kWh): 2.998 đồng/kWh
// Bậc 5 (301 - 400 kWh): 3.350 đồng/kWh
// Bậc 6 (từ 401 kWh trở lên): 3.460 đồng/kWh


//**Bài 1. Nhập vào một số nguyên n. In ra giá trị của n.**//
//int n;
//printf("Hay nhap vao so n: ");
//scanf("%d", &n);
//printf("So vua nhap vao man hinh la: %d\n ", n);

//**Bài 2. Nhập vào họ tên, tuổi và điểm trung bình của một sinh viên. In toàn bộ thông tin ra màn hình.

//int  tuoi;
//char ten [50];
//float dtb;
//printf("Hay nhap vao ten cua ban: ");
//scanf("%s", ten);
//printf("Hay nhap vao tuoi cua ban: ");
//scanf("%d", &tuoi);
//printf("Hay nhap vao diem trung binh cua ban: ");
//scanf("%f", &dtb);
//printf("Ten: %s, Tuoi: %d, Diem: %.1f\n", ten, tuoi, dtb);
//

//Bài 3. Nhập vào hai số nguyên a và b. Tính và in ra tổng, hiệu, tích và thương của hai số.

//int a, b;
//printf("Hay nhap vao so a:");
//scanf("%d", &a);
//printf("Hay nhap vao so b:");
//scanf("%d", &b);
//printf("Tong cua hai so la: %d\n", a + b);
//printf("Hieu cua hai so la: %d\n", a - b);
//printf("Tich cua hai so la: %d\n", a * b);
//printf("Thuong cua hai so la: %d", a / b);
// 
// 
//Bài 4. Nhập vào bán kính r của hình tròn. Tính chu vi và diện tích hình tròn.
//float r;
//printf("Hay nhap vao ban kinh r: ");
//scanf("%f", &r);
//printf("Chu vi cua hinh tron la: %01f\n", 2 * 3.14 * r);
//printf("Dien tich cua hinh tron la: %.1f\n", 3.14 * r * r);

//Bài 5. Nhập vào chiều dài và chiều rộng của hình chữ nhật. Tính diện tích và chu vi hình chữ nhật.
//float dai, rong;
//printf("Hay nhap vao chieu dai cua hinh chu nhat: ");
//scanf("%f", & dai);
//printf("Hay nhap vao chieu rong cua hinh chu nhat: ");
//scanf("%f", &rong);
//printf("Dien tich cua hinh chu nhat la: %.01f\n",(dai + rong )*2);
//printf("Dien tich cua hinh chu nhat la: %.01f\n", dai * rong);



//Bài 6. Nhập vào một số nguyên n.Kiểm tra n là số dương, số âm hay bằng 0.
//int n;
//printf("Hay nhap vao so n:  ");
//scanf("%d", &n);
//if (n > 0)
//{
//	printf("n la so duong");
//}
//else if (n<0)
//{
//	printf("n la so am");
//}
//else
//{
//	printf("n la so 0");
//}

//Bài 7. Nhập vào một số nguyên n. Kiểm tra n là số chẵn hay số lẻ.
//int n;
//printf("Hay nhap vao so nguyen n:  ");
//scanf("%d", &n);
//if (n % 2 == 0)
//{
//	printf("n la so chan");
//}
//else
//{
//	printf("n la so le");
//}


//Bài 8. Nhập vào hai số nguyên a và b. Tìm và in ra số lớn hơn. Nếu hai số bằng nhau thì thông báo hai số bằng nhau.
//int a, b;
//printf("Hay nhap vao so a:  ");
//scanf("%d", &a);
//printf("Hay nhap vao so b:  ");
//scanf("%d", &b);
//if (a > b)
//{
//	printf("So lon hon la so %d\n ", a);
//}
//else if (a < b)
//{
//	printf("So lon hon la so %d\n", b);
//}
//else
//{
//	printf("Hai so a va b bang nhau");
//
//}


//Bài 9. Nhập vào ba số nguyên a, b, c. Tìm số lớn nhất trong ba số.
//int max, a, b, c;
//printf("Hay nhap vao so a: ");
//scanf("%d", &a);
//printf("Hay nhap vao so b: ");
//scanf("%d", &b);
//printf("Hay nhap vao so c: ");
//scanf("%d", &c);
//
//max = b; 
//
//if (a > max)
//{
//	max = a;
//}
//
//if (c> max)
//{
//	max = c;
//}
//printf("So lon nhat trong 3 so la: %d\n", max);


//Bài 10. Nhập vào một số nguyên n. Kiểm tra n có chia hết cho cả 3 và 5 hay không.
//int n;
//printf("Hay nhap vao so nguyen n:  ");
//scanf("%d", &n);
//
//if (n % 3 == 0 && n % 5 == 0)
//{
//	printf("So nguyen n chia het cho ca 3 va 5");
//}
//else if (n%3==0)
//{
//	printf("So nguyen n chi chia het cho 3");
//}
//else if (n % 5 == 0)
//{
//	printf("So nguyen n chi chia het cho 5");
//}
//else 
//{
//	printf("So nguyen n khong chia het cho 3 cung ko chia het cho 5");
//}


//Bài 11. Nhập vào điểm của một sinh viên từ 0 đến 10. Xếp loại theo quy tắc:
//float diem;
//printf("Hay nhap vao so diem:  ");
//scanf("%f", &diem);
//
//if (diem >=8 && diem <= 10)
//{
//	printf("Hoc sinh dat loai gioi\n");
//}
//else if (diem >= 6.5 && diem <= 8)
//{
//	printf("Hoc sinh dat loai kha\n");
//}
//else if (diem >= 5 && diem <= 6.5)
//{
//	printf("Hoc sinh dat loai trung binh\n");
//}
//else
//{
//	printf("Hoc sinh dat loai yeu");
//}


//Bài 12. Nhập vào một số nguyên từ 1 đến 7. In ra tên thứ tương ứng trong tuần. Nếu nhập ngoài khoảng thì thông báo dữ liệu không hợp lệ.
//int day;
//printf("Hay nhap vao so ngay can biet:  ");
//scanf("%d", &day);
//switch (day)
//{
//case 1: 
//	printf("Hom nay la thu 2\n");
//	break;
//case 2:
//	printf("Hom nay la thu 3\n");
//	break;
//case 3:
//	printf("Hom nay la thu 4\n");
//	break;
//case 4:
//	printf("Hom nay la thu 5\n");
//	break;
//case 5:
//	printf("Hom nay la thu 6\n");
//	break;
//case 6:
//	printf("Hom nay la thu 7\n");
//	break;
//case 7:
//	printf("Hom nay la chu nhat\n");
//	break;
//default:
//	printf("Ko phai ngay trong tuan\n");
//	break;
//
//}



//Bài 13. Nhập vào tháng và năm. Cho biết tháng đó có bao nhiêu ngày. Xử lý đúng trường hợp tháng 2 của năm nhuận.
//int thang, nam;
//printf("Hay nhap vao so thang:  ");
//scanf("%d", &thang);
//printf("Hay nhap vao so nam:  ");
//scanf("%d", &nam);
//switch (thang)
//{
//case 1:
//case 3:
//case 5:
//case 7:
//case 8:
//case 10:
//case 12:
//	printf("Thang %d nam %d co 31 ngay", thang, nam);
//	break;
//case 4:
//case 6:
//case 9:
//case 11:
//	printf("Thang %d nam %d co 30 ngay", thang, nam);
//	break;
//case 2:
//	if ((nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0))
//	{
//		printf("Thang 2 nam nhuan co 31 ngay");
//	}
//	else
//	{
//		printf("Thang 2 nam thuong co 30 ngay");
//	}
//	break;
//default:
//	printf("Thang vua nhap ko hop le! Hay nhap tu 1 den 12");
//	break;
//}



//Bài 14. Nhập vào ba số a, b, c. Kiểm tra ba số có thể tạo thành ba cạnh của một tam giác hay không.
//int a, b, c;
//printf("Hay nhap vao 3 canh cua tam giac:\n ");
//scanf("%d %d %d", &a, &b, &c);
//printf(" Canh a: %d, Canh b: %d, Canh c: %d\n", a, b, c);
//if ((a + b) > c && (a + c) > b && (b + c) > a)
//{
//	printf("Du dieu kien tao thanh tam giac");
//}
//else
//{
//	printf("Khong du dieu kien de tao thanh tam giac");
//}








}
