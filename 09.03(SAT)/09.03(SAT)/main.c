//
//  main.c
//  09.03(SAT)
//
//  Created by 박지현 on 2023/09/03.
//

#include <stdio.h>

int main(void) {
   /* int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    //문제의 출력에서 요구하는 대로 작성
    printf("%d\n", (a + b) % c);
    printf("%d\n", (a % c + b % c) % c);
    printf("%d\n", (a * b) % c);
    printf("%d\n", (a % c * b % c) % c);*/
    
    /*//n1: 첫 번째 세 자리수, n2: 두 번째 세자리 수
    int n1, n2;
    scanf("%d %d", &n1, &n2);

    //두 번째 자리에서 계산되는 값을 나타냄
    //두 번째 세자리 수 n2를 10으로 나눈 나머지를 구하고,
    //이를 첫 번째 세 자리 수 n1과 곱하여 n3에 저장
    int n3 = n1 * (n2 % 10);
    //세 번째 자리에서 계산되는 값
    //두 번째 세 자리 수 n2를 10으로 나눈 몫을 다시 10으로 나눈 나머지를 구하고
    //이를 첫 번째 세 자리수 n1과 곱하여 n4에 저장
    int n4 = n1 * (n2 / 10 % 10);
    //첫 번째 자리에서 계산되는 값
    //두 번째 세자리 수 n2를 100으로 나눈 몫을 구하고
    //이를 첫 번째 세 자리 수 n1과 곱하여 n5에 저장
    int n5 = n1 * (n2 / 100);

    //세 자리 수를 각 자릿수 별로 계산한 결과 값 출력
    printf("%d\n", n3);
    printf("%d\n", n4);
    printf("%d\n", n5);
    //모든 자릿수를 조합하여 결과 값 출력
    //n5: 첫 번째 자리, n4: 두 번째 자리, n3: 세 번째 자리
    printf("%d\n", n5 * 100 + n4 * 10 + n3);*/
    
    int a;
    scanf("%d", &a);
    
    //'%'기호 출력하고 싶다면 '%%' 연속으로 사용
    printf("%d%%", a);
    
    return 0;
}




/*//k: 테스트 케이스의 개수 저장하는 변수
//n: 서쪽 사이트의 개수
//m: 동쪽 사이트의 개수
//dam: 다리를 지을 수 있는 경우의 수를 저장하는 변수
int k,n,m,dam;
scanf("%d", &k);

//k번의 테스트 케이스를 반복하는 루프 시작
for(int z=0; z<k; z++){
    dam=1;
    //서쪽, 동쪽 사이트 개수 입력받기
    scanf("%d %d", &n, &m);
    //n번의 반복을 시작하여, 서쪽 사이트의 개수만큼 반복
    for(int i=0; i<n; i++){
        //서쪽 사이트에서 다리를 선택할 때마다 동쪽 사이트에서
        //선택할 수 있는 다리의 수를 감소시키는 것을 의미
        dam*=m-i;
        //현재까지 선택한 다리의 수를 서쪽 사이트의 개수만큼 나누는 것을 의미
        dam/=1+i;
    }
    //dam 출력
    printf("%d\n", dam);
}*/
