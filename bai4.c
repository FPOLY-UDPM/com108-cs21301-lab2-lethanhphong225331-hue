/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main(){
    // Khai báo biến
    int diem_Toan, diem_Ly, diem_Hoa;

    // Nhập dữ liệu
    printf("Nhap diem Toán: ");
    scanf("%d", &diem_Toan);
    printf("Nhap diem Lý: ");
    scanf("%d", &diem_Ly);
    printf("Nhap diem Hoá: ");
    scanf("%d", &diem_Hoa);


    // Xử lý, tính toán
    float diem_Trung_Binh = (diem_Toan * 3 + diem_Ly * 2 + diem_Hoa * 1) / 6.0;


    // Hiển thị kết quả
    printf("Diem trung binh la: %.2f\n", diem_Trung_Binh);
    return 0;


}