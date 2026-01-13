/******************************************************************************
 * Họ và tên: [lê thành phong]
 * MSSV:      [PS47422]
 * Lớp:       [CS21302]
 *****************************************************************************/

 // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ 
// Input: Nhập vào từ bàn phím 2 số  
// Output: Hiển thị ra màn hình tổng, hiệu 2 số 

#include <stdio.h>

int main(){
    // Khai báo biến
    int a, b;

    // Nhập dữ liệu
    printf("Nhap so thu nhat: ");
    scanf("%d", &a);

    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    // Xử lý, tính toán
    int tong = a + b;
    int hieu = a - b;

    // Hiển thị kết quả
    printf("tổng hai so la: %d\n", tong);
    printf("hiệu hai so la: %d\n", hieu);
    return 0;
}