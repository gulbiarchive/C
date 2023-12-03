//
//  main.c
//  12-02-SAT
//
//  Created by 박지현 on 2023/12/02.
//

//#include <stdio.h>
//
//struct Student {
//    int age;
//    double gpa;
//};
//
//int main(void) {
//    // 학생 구조체 변수 생성
//    struct Student student1;
//
//    // 멤버 변수에 값 할당
//    student1.age = 20;
//    student1.gpa = 3.8;
//
//    // 학생 정보 출력
//    printf("나이: %d\n", student1.age);
//    printf("평균 성적: %.2f\n", student1.gpa);
//
//    return 0;
//}

//#include <stdio.h>
//
//struct Student {
//    int age;
//    double gpa;
//};
//
//int main(void) {
//    // 학생 구조체 변수 생성
//    struct Student student1;
//
//    // 구조체 포인터 선언 및 초기화
//    struct Student *ptrStudent = &student1;  // 구조체 변수의 주소를 포인터에 할당
//
//    // 참조 연산자를 사용하여 멤버 변수에 값 할당
//    (*ptrStudent).age = 21;
//    (*ptrStudent).gpa = 3.9;
//
//    // 참조 연산자를 사용하여 학생 정보 출력
//    printf("나이: %d\n", (*ptrStudent).age);
//    printf("평균 성적: %.2f\n", (*ptrStudent).gpa);
//
//    return 0;
//}

#include <stdio.h>

struct Student {
    int age;
    double gpa;
};

int main(void) {
    // 학생 구조체 변수 생성
    struct Student student1;

    // 구조체 포인터 선언 및 초기화
    struct Student *ptrStudent;
    ptrStudent = &student1;  // 구조체 변수의 주소를 포인터에 할당

    // 화살표 연산자를 사용하여 멤버 변수에 값 할당
    ptrStudent->age = 21;
    ptrStudent->gpa = 3.9;

    // 화살표 연산자를 사용하여 학생 정보 출력
    printf("나이: %d\n", ptrStudent->age);
    printf("평균 성적: %.2f\n", ptrStudent->gpa);

    return 0;
}


