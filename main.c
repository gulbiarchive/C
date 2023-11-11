//
//  main.c
//  array-solve
//
//  Created by 박지현 on 2023/08/21.
//

#include <stdio.h>

int main(void) {
    /* 1번
     int i;
     int a[10]; //배열 크기 5 선언
     
     for (i = 0; i < 10; i++){
         a[i] = i; //요소 값 대입
         printf("a[%d] = %d\n", i, a[i]); //요소 값 출력
     } */
     
    /* 2번
    int i;
    int a[10]; //배열 크기 5 선언
    
    for (i = 0; i < 10; i++){
        a[i] = 10 - i; //요소 값 대입
        printf("a[%d] = %d\n", i, a[i]); //요소 값 출력
    } */
    
    /* 3번
    int i;
    int x[10] = {17, 23, 36, 50, 20, 77, 22}; //나머지는 0으로 채워짐
    int y[10];
    
    for(i = 0; i < 10; i++){
        y[i] = x[9 - i]; //x의 요소를 거꾸로 복사하여 y에 저장한다.
    }
    
    printf("  a   b\n");
    printf("--------\n");
    for (i = 0; i < 10; i++) {
        printf("%4d%4d\n", x[i], y[i]); //4자리로 정렬하여 출력
    } */
    
    /* 4번
    char str[] = "xyz";
    printf("문자열 str은 \"%s\"입니다.\n", str);
    */
    
    /* 5번
    char str[] = "ABC\0DEF"; //널문자는 문자열의 끝을 알림
    printf("문자열 str은 \"%s\"입니다.\n", str);
    */
    
    return 0;
    
    
    
    
    
    
}

