//
//  main.c
//  12-01-FRI
//
//  Created by 박지현 on 2023/12/01.
//

//#include <stdio.h>
//
//int add(int a, int b){
//    return a + b;
//}
//
//int main(void) {
//    // 'operation'이라는 함수 포인터 선언
//    int (*operation)(int, int);
//
//    // operation을 add 함수로 설정
//    operation = add;
//
//    /* operation은 add함수이기 때문에
//    add 함수 호출하여 (5, 3)을 더한 결과를 반환*/
//    int result = operation(5, 3);
//    printf("%d\n", result); // 8
//
//    return 0;
//}

#include <stdio.h>

int main(void) {
    // 정수형 변수
    int integerValue = 42;

    // 실수형 변수
    float floatValue = 3.14;

    // 문자형 변수
    char charValue = 'A';

    // void 포인터 선언
    void *genericPointer;

    // 각 변수의 주소를 void 포인터에 할당
    genericPointer = &integerValue;
    printf("정수형 변수: %d\n", *(int*)genericPointer); // 42

    genericPointer = &floatValue;
    printf("실수형 변수: %.2f\n", *(float*)genericPointer); // 3.14

    genericPointer = &charValue;
    printf("문자형 변수: %c\n", *(char*)genericPointer); // A

    return 0;
}
