/******************************************************************************
 * Họ và tên: [lê thành phong]
 * MSSV:      [PS47422]
 * Lớp:       [CS21302]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
    // Khai báo biến
    int chieu_Dai, chieu_Rong;

    // Nhập dữ liệu
    printf("Nhap chieu dai: ");
    scanf("%d", &chieu_Dai);
    printf("Nhap chieu rong: ");
    scanf("%d", &chieu_Rong);               


    // Xử lý, tính toán 
    int chu_Vi = 2 * (chieu_Dai + chieu_Rong);
    int dien_Tich = chieu_Dai * chieu_Rong;


    // Hiển thị kết quả
    printf("Chu vi hinh chu nhat la: %d\n", chu_Vi);
    printf("Dien tich hinh chu nhat la: %d\n", dien_Tich);
    return 0;


}