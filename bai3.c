/******************************************************************************
 * Họ và tên: [Đinh Minh Cường]
 * MSSV:      [PS48680]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH SẮP XẾP CHUỖI THEO CHỮ CÁI 
//  Input: Nhập 5 chuỗi bất kỳ 
//  Output: Thứ tự các chuỗi đã được sắp xếp  

// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>

int main() {
    char str[5][100];
    char temp[100];

    // Nhập 5 chuỗi
    for(int i = 0; i < 5; i++) {
        printf("Nhap chuoi %d: ", i + 1);
        scanf("%s", str[i]);
    }

    // Sắp xếp theo thứ tự alphabet (A-Z)
    for(int i = 0; i < 4; i++) {
        for(int j = i + 1; j < 5; j++) {
            if(strcmp(str[i], str[j]) > 0) {
                // Hoán đổi
                strcpy(temp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], temp);
            }
        }
    }

    // In kết quả
    printf("\nChuoi sau khi sap xep:\n");
    for(int i = 0; i < 5; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}
