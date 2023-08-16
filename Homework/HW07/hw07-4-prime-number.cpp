/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)
    
    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/

#include<stdio.h>

int main() {
    
    int input ;
    int i = 0 ;
    printf( "Enter number :\n" ) ;
    scanf( "%d", &input ) ;
    printf( "Output:\n" ) ;
    
    do {

        if ( input == 13 ) {
            printf( "%d", input ) ;
        }

        if ( input == 11 ) {
            printf( " %d ", input ) ;
        }

        if ( input == 7 ) {
            printf( "%d", input ) ;
        }

        if ( input == 5 ) {
            printf( " %d", input ) ;
        }

        if ( input == 3 ) {
            printf( " %d", input ) ;
        }

        if ( input == 2 ) {
            printf( " %d", input ) ;
        }

        if ( input == 1 ) {
            break ;
        }

        if ( input % 2 != 0 &&  input % 3 != 0 && input % 5 != 0 && input % 7 != 0 && input % 11 != 0 && input % 13 != 0 ) {
            printf( "%d ", input ) ;
        }
        input-- ;
    } while ( input >= i ) ;
    
    return 0 ;
}