/******************************************************************************
 * Họ và tên: [lê thành phong]
 * MSSV:      [PS47422]
 * Lớp:       [CS21302]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main(){
    // Khai báo biến
    int ban_Kinh;


    // Nhập dữ liệu
    printf("Nhap ban kinh hinh tron: ");
    scanf("%d", &ban_Kinh);


    // Xử lý, tính toán
    const float PI = 3.14;
    float chu_Vi = 2 * PI * ban_Kinh;
    float dien_Tich = PI * ban_Kinh * ban_Kinh;

    // Hiển thị kết quả
    printf("Chu vi hinh tron la: %.2f\n", chu_Vi);
    printf("Dien tich hinh tron la: %.2f\n", dien_Tich);
    return 0;


}