/******************************************************************************
 * Họ và tên: [Đinh Minh Cường]
 * MSSV:      [PS48680]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH ĐẾM NGUYÊN ÂM VÀ PHỤ ÂM CỦA 1 CHUỖI 
//  Input: nhập vào 1 chuỗi 
//  Output: Số lượng nguyên âm và phụ âm trong chuỗi 
//  Biết rằng: Nguyên âm gồm: a,e,i,o,y,u


// VIẾT CODE Ở ĐÂY
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int nguyenAm = 0, phuAm = 0;

    printf("Nhap vao chuoi: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; i < strlen(str); i++) {
        char c = tolower(str[i]);   // đổi về chữ thường

        // kiểm tra nếu là chữ cái
        if(isalpha(c)) {
            if(c == 'a' || c == 'e' || c == 'i' || 
               c == 'o' || c == 'u' || c == 'y') {
                nguyenAm++;
            } else {
                phuAm++;
            }
        }
    }

    printf("So nguyen am: %d\n", nguyenAm);
    printf("So phu am: %d\n", phuAm);

    return 0;
}
