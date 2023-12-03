//
//  main.c
//  12-03-SUN
//
//  Created by 박지현 on 2023/12/03.
//

//#include <stdio.h>
//
//struct myclass {
//    int number; // 학생 번호
//    double weight;
//};
//
//int main(void) {
//    struct myclass a; // 학생 1번
//    struct myclass b; // 학생 2번
//
//    a.number = 12;
//    a.weight = 55.3;
//
//    b.number = 27;
//    b.weight = 57.6;
//
//    printf("1번 학생 번호는 %d이고 몸무게는 %.1lf\n", a.number, a.weight);
//    printf("2번 학생 번호는 %d이고 몸무게는 %.1lf\n", b.number, b.weight);
//    return 0;
//}

//#include <stdio.h>
//#include <math.h> // 수학 관련 함수 헤더파일
//
//struct Point2D {
//    int x;
//    int y;
//};
//
//int main(void){
//    struct Point2D p1; // 점1
//    struct Point2D p2; // 점2
//
//    // 점1 x, y 위치
//    p1.x = 30;
//    p1.y = 20;
//
//    // 점2 x, y 위치
//    p2.x = 60;
//    p2.y = 50;
//
//    int a = p2.x - p1.x; // 선 a의 길이
//    int b = p2.y - p1.y; // 선 b의 길이
//
//    /* 제곱근은 소수로 반환되므로 double형 사용*/
//    double c = sqrt((a * a) + (b * b));
//    // double c sqrt(pow(a, 2) + pow(b, 2));
//    // pow(n1, n2) : n1의 n2 거듭제곱 값 반환하는 함수
//
//    printf("%lf\n", c); // 42.426407
//    return 0;
//}

#include <stdio.h>

// 학생 정보를 담는 구조체 정의
struct Student{
    int age;
    double gpa;
};

//int main(void) {
//    // 학생 구조체 배열 선언 및 초기화
//    struct Student students[3];  // 3명의 학생 정보를 담을 배열
//
//    // 각 학생 정보에 값 할당
//    students[0].age = 21;
//    students[0].gpa = 3.9;
//
//    students[1].age = 22;
//    students[1].gpa = 3.5;
//
//    students[2].age = 20;
//    students[2].gpa = 3.7;
//
//    // 배열을 순회하며 학생 정보 출력
//    for (int i = 0; i < 3; i++) {
//        printf("나이: %d\n", students[i].age);
//        printf("평균 성적: %.2f\n", students[i].gpa);
//        printf("\n");
//    }
//
//    /* 출력
//     나이: 21
//     평균 성적: 3.90
//
//     나이: 22
//     평균 성적: 3.50
//
//     나이: 20
//     평균 성적: 3.70
//
//     */
//    return 0;
//}


//#include <stdio.h>
//
//// 공용체 정의
//union Data {
//    int i;
//    float f;
//};
//
//int main(void) {
//    union Data data;
//
//    // 공용체 멤버에 값 할당
//    data.i = 10;
//    printf("정수: %d\n", data.i); // 10
//
//    data.f = 3.14;
//    printf("실수: %f\n", data.f); // 3.140000
//
//    return 0;
//}

//#include <stdio.h>
//
//// 열거형 정의
///* 상수 지정하지 않으면 0부터 시작*/
//enum Day {
//    SUNDAY,    // 0
//    MONDAY,    // 1
//    TUESDAY,   // 2
//    WEDNESDAY, // 3
//    THURSDAY,  // 4
//    FRIDAY,    // 5
//    SATURDAY   // 6
//};
//
//int main(void) {
//    // 열거형 변수 선언 및 초기화
//    enum Day today = WEDNESDAY;
//
//    // 열거형 변수 사용
//    if (today == WEDNESDAY) {
//        printf("오늘은 수요일입니다.\n");
//    } else {
//        printf("오늘은 수요일이 아닙니다.\n");
//    }
//
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h> // 동적 메모리 할당과 관련된 함수 사용하기 위한 헤더 파일
//
//int main(void) {
//    /* 정수형 포인터 : ㅈ동적으로 할당된 정수 배열 가리킴*/
//    int *dynamicArray;
//    int size; // 배열의 크기
//    scanf("%d", &size);
//
//    /* malloc 함수를 사용하여 동적으로 size * sizeof(int) 바이트 크기만큼 메모리 할당
//     sizeof(int)는 int 타입의 크기를 바이트 단위로 반환
//     할당된 메모리 주소를 dynamicArray 포인터에 저장*/
//    dynamicArray = (int *)malloc(size * sizeof(int));
//
//    /* 메모리 할당에 실패하면 NULL이기 때문에,
//    이 경우 프로그램 종료 */
//    if(dynamicArray == NULL){
//        printf("Memory allocation failed.\n");
//        return 1;
//    }
//
//    // 동적 배열에 값 할당 및 출력
//    for(int i = 0; i < size; i++){
//        dynamicArray[i] = i * 10;
//        printf("%d ", dynamicArray[i]);
//    }
//
//    free(dynamicArray); // 할당한 메모리 해제
//
//    return 0;
//}

//#include <stdio.h>
//
///* ADD라는 이름으로 두 개의 매개변수 x, y를 받아서 그 합 반환*/
//#define ADD(x, y) ((x) + (y))
//
//int main(void){
//    int n1 = 5, n2 = 7;
//    int result = ADD(n1, n2); // 매크로 호출
//
//    printf("Result: %d\n", result); // 12
//    return 0;
//}

#include <stdio.h>
#include <stdarg.h>

// 가변 인자를 받아들여 합계를 계산하는 함수
/*
 첫 번째 매개변수로 count는 명시적으로 전달된 인자의 개수
 ... : 가변 인자, 함수 내에서 이 부분을 통해 가변 인자 처리*/
int sum(int count, ...) {
    int total = 0; // 가변 인자들의 합 저장할 변수

    // va_list 선언 및 초기화
    va_list args; // 가변 인자 목록 저장하는 변수
    /* va_start 함수 호출하여 args 초기화
     args를 현재 함수의 첫 번째 가변 인자의 위치로 설정*/
    va_start(args, count);

    /* 가변 인자 처리
    count가 전달된 인자의 개수를 나타내므로,
    이 개수만큼 반복하면 가변 인자를 total에 더함 */
    for (int i = 0; i < count; ++i) {
        total += va_arg(args, int);
    }

    /* 가변 인자 목록 정리
    메모리 누수 방지 기능 */
    va_end(args);

    return total; // 계산된 합계 반환
}

int main(void) {
    // 다양한 개수의 인자를 전달하여 sum 함수 호출
    int result1 = sum(3, 10, 20, 30);
    int result2 = sum(5, 5, 10, 15, 20, 25);

    // 결과 출력
    printf("Result 1: %d\n", result1); // 60
    printf("Result 2: %d\n", result2); // 75

    return 0;
}

