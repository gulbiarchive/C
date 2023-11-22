//
//  main.c
//  11_22_WED
//
//  Created by 박지현 on 2023/11/22.
//

#include <stdio.h>

double circle(int r){
    return r * r * 3.14;
}

int main(void){
    int r; // 반지름
    scanf("%d", &r);

    // 함수 호출하여 원의 넓이 구한뒤 출력
    printf("%.2lf", circle(r));

    return 0;
}


//void f(int N){
//    int result = 0; // 약수 개수 누적 변수
//
//    for(int i = 1; i <= N; i++){
//        if(N % i == 0){
//            result++;
//        }
//    }
//
//    printf("%d\n", result); // 약수 출력
//
//    return; // 생략 가능
//}
//
//int main(void){
//    // 입력 받기
//    int n;
//    scanf("%d", &n);
//
//    f(n); // 함수 호출
//
//    return 0;
//}

//void f(int N){
//    // 호출 후 전달받은 n만큼 반복
//    for(int i = 0; i < N; i++)
//        printf("love\n");
//
//    return; // 생략 가능
//}
//
//int main(void){
//    // 입력 받기
//    int n;
//    scanf("%d", &n);
//
//    f(n); // 함수 호출
//
//    return 0;
//}

//void f(int N){
//    if(N == 1)
//        printf("hello\n");
//    else if(N == 2)
//        printf("wolrd\n");
//
//    return;
//}
//
//int main(void){
//    // 입력 받기
//    int n;
//    scanf("%d", &n);
//
//    f(n); // 함수 호출
//
//    return 0;
//}

//void min(int x, int y){
//    x < y ? printf("%d", x) : printf("%d", y);
//
//    return;
//}
//
//int main(void){
//    // 입력 받기
//    int x, y;
//    scanf("%d %d", &x, &y);
//
//    min(x, y); // 함수 호출
//
//    return 0;
//}



// 에러 발생 예제
//int a = 1; // 전역 변수
//
//void f(void){
//    printf("f()함수에서 a 값은 %d이다.\n", a);
//    // main() 함수에서만 사용할 수 있는 b를 사용하려고 하기 때문에 오류
//    printf("f()함수에서 b 값은 %d이다.\n", b);
//}
//
//int main(void){
//    int b = 2; // 지역 변수
//    printf("main()함수에서 a 값은 %d이다.\n", a);
//    printf("main()함수에서 b 값은 %d이다.\n", b);
//    f();
//}

//int cube(int x){
//    return x * x *x;
//}
//
//int main(void){
//    int n;
//    scanf("%d", &n);
//
//    printf("%d의 세제곱 값은 %d이다.\n", n, cube(n));
//}

// 입력 값 없는 함수
//int f(void){
//    return 1; // 반환 값 정수 1
//}
//
//int main(void){
//    printf("%d", f()); // 함수 호출
//    return 0; // 프로그램 정상 종료
//}

//// 입력 값, 반환 값 없는 함수
//void f(void){
//    printf("%c", '*'); // 호출되면 문자 * 출력
//    return; // 반환 값 없음
//}
//
//int main(void){
//    f(); // 함수 호출
//    return 0; // 프로그램 정상 종료
//}

//void test2(void){
//    printf("hello");
//    return;
//}
//
//int main(void){
//    test2();
//}

//int test1(void){
//    return 10;
//}
//
//int main(void){
//    int result = test1();
//    printf("%d\n", result); // 10 출력
//}

//double add(int value1, int value2){
//    return  value1 + value2 + 3.14;
//}
//
//int main(void){
//    int x, y;
//    scanf("%d %d", &x, &y);
//
//    double result = add(x, y); // 함수 호출
//    printf("%.2lf\n", result);
//
//    return 0;
//}


//int sum(int value1, int value2){
//    return value1 + value2; // 결과 반환
//}
//int main(void) {
//    int x = 10, y = 20;
//    int result = sum(x, y); // 함수 호출
//    printf("%d + %d = %d\n", x, y, result);
//    return 0;
//}

