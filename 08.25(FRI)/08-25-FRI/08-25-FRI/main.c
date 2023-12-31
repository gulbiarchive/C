//
//  main.c
//  08-25-FRI
//
//  Created by 박지현 on 2023/08/25.
//

#include <stdio.h>

int main(void)
{
    
    /*//student : 크기 31인 정수형 배열, 모든 요소 0으로 초기화
    //학생들의 출석 여부 저장하는 용도로 사용
    int student[31] = { 0 };
    //현재 입력으로 받은 학생 번호 저장할 변수
    int presentNum;

    //28번 반복, 28명의 학생 출석 정보 입력받음
    for (int i = 0; i < 28; i++) {
        scanf("%d", &presentNum);
        student[presentNum] = presentNum; //해당하는 위치에 학생 번호를 저장하는 방식으로 출석 여부 표시
    }
    //모든 학생을 조회하는 루프
    for (int i = 1; i < 31; i++) {
        //student 배열의 i번째 요소가 0이라면
        //즉, 출석이 표시되지 않았다면
        if (student[i] == 0)
            //해당 학생 번호 출력
            printf("%d\n", i);
    }*/
    
    /* 10811 //input : 입력받을 수를 저장하는 변수
    //result : 서로 다른 나머지의 개수를 저장할 변수
    int input, result=0;
    //ramina : 입력된 숫자를 42로 나눈 나머지를 저장하는 배열
    int remain[10];
    
    //10개의 수를 입력받고, 각 수를 42로 나눈 나머지를 remain 배열에 저장
    //이렇게 하면 각 숫자에 대한 서로 다른 나머지가 저장되게 됨
    for(int i=0; i<10; i++) {
        scanf("%d", &input);
        remain[i] = (input % 42);
    }
    
    //각 나머지를 서로 비교하여 같은 나머지가 있는지 검사하고,
    //만약 같은 나머지가 없다면 result 값 증가
    //내부의 이중 루프를 통해 모든 조합을 검사하면서 서로 다른 나머지의 개수를 세는 과정
    for(int i=0; i<10; i++) {
        int count=0; //초기화
        for(int j=i+1; j<10; j++) { //서로 같은 수일 경우
            if(remain[i] == remain[j]) count++;
        }
        if (count == 0)
            result++; // 은 수가 없을 경우 개수를 세준다
    }
    
    //최종적으로 구해진 서로 다른 나머지의 개수인 result 출력
    printf("%d", result);*/
    
    /* //basket : 바구니의 순서
    //N, M, i, j : 입력받을 변수
    //temp : 임시 변수
    int basket[101] = {0,};
    int N,M,i,j;
    int temp;

    //N : 바구니의 개수
    //M : 바구니의 순서를 역순으로 만드는 방법의 개수
    scanf("%d %d", &N, &M);

    //1 ~ N까지의 번호를 가진 바구니 초기화
    //초기 순서대로 바구니의 번호 basket 배열에 저장
    for (int a = 0; a < N; a++){
        basket[a] = a+1;
    }

    //M번의 순서 변경을 수행하는 루프
    //i ~ j까지의 바구니 순서를 역순으로 만듦
    //임시 변수 temp를 사용하여 바구니 번호를 교환하고
    //j를 감소시키면서 범위 내에서 바구니의 순서를 역순으로 만듦
    for (int b = 0; b < M; b++){
        scanf("%d %d", &i, &j);
        for (int c = i-1; c < j; c++){
            temp = basket[c];
            basket[c] = basket[j-1];
            basket[j-1] = temp;
            j--;
        }
    }

    //basket 배열에 저장된 바구니 번호를 순서대로 출력하며,
    //각 바구니 번호 뒤에 공백을 추가하여 구분
    for (int d = 0; d < N; d++){
        printf("%d ", basket[d]);
    } */
    
    /* int N; //시험 본 과목의 개수
    int max = 0; //세준이의 성적 중 최댓값을 저장할 변수
    float avg = 0; //새로운 평균을 계산할 때 사용할 변수
 
    scanf("%d", &N); //시험 본 과목의 개수 입력받음

    int score[N]; //세준이의 현재 성적 저장 배열

    //각 과목의 성적을 입력받으며,
    //동시에 세준이의 최댓값인 max 갱신
    //입력된 성적 중 가장 큰 값을 max에 저장
    for (int i = 0; i < N; i++) {
        scanf("%d", &score[i]);
        if (max < score[i]) {
            max = score[i];
        }
    }
    
    //각 과목의 성적을 max로 나눈 비율에 100을 곱하여
    //새로운 점수를 계산하고, 그 값을 avg에 더한다.
    //이렇게 해서 모든 과목의 새로운 점수를 총합을 avg에 저장
    for (int i = 0; i < N; i++) {
        avg += (float)score[i] / max * 100;
    }

    //새로운 평균을 계산하여 출력
    //avg를 과목의 개수 N으로 나누어서 평균을 구하고
    //소수점을 포함한 실수로 출력
    //문제의 출력에 나와있듯이 '실제 정답과 출력값의 절대오차 또는 상대오차가 10-2 이하이면 정답이다.'이기 때문에
    //출력 코드에 소수점 자릿수를 지정하지 않아도 된다.
    printf("%f\n", avg / N); */
    
   /* char S[1000]; //문자열을 저장할 문자형 배열
    int i; //i번째 글자 출력 변수
       
    scanf("%s",S); //사용자로부터 문자열 입력받음
    scanf("%d",&i); //몇 번째 글자 출력할 것인지 입력받음
        
    printf("%c",S[i-1]); //S[i-1] : 배열의 인덱스가 0부터 시작하기 때문에 1을 뺌*/

    /* //흰색 피스의 개수 나타내는 변수
    //각각 킹, 퀸, 룩, 비숍, 나이트, 폰의 개수
    int K, Q, R, B, N, P;
    scanf("%d %d %d %d %d %d", &K, &Q, &R, &B, &N, &P); //입력받음
     
    //흰색 피스를 더하거나 빼야하는 피스의 개수를 계산하여 출력
    //각각 피스에 대한 개수를 주어진 값에서 빼고 1을 더한 값을 출력
    //이렇게 하면 올바른 세트가 되기 위해 추가해야 하는 피스의 개수나 빼야하는 피스의 개수가 계산됨
    printf("%d %d %d %d %d %d\n", 1-K, 1-Q, 2-R, 2-B, 2-N, 8-P);
    
    //추가 설명
    //'K'가 1이면 킹이 올바른 개수(1개)를 가지고 있으므로 더 이상 추가하지 않아도 되기 때문에
    //결과는 0이 된다.
    //하지만 만약 K가 0이면 킹이 부족하므로 1을 더해야 하기 때문에
    //결과는 1이 된다.
    //나머지 피스들도 동일한 방식으로 처리된다. */
    
   /* //별 패턴의 크기
    int n;
    scanf("%d", &n);
    
    //별 윗부분 출력
    for (int i = 1; i <= n; i++) {
        //왼쪽 여백 출력
        for (int j = n-i; j > 0; j--)
            printf(" ");
        / 기호 출력
        for (int k=2*i-1; k > 0; k--)
            printf("*");
        //각 행이 끝나면 줄 바꿈
        printf("\n");
    }
    
    //별 아랫부분 출력
    for (int i = n-1; i > 0; i--) {
        //왼쪽 여백 출력
        for (int j = n-i; j > 0; j--)
            printf(" ");
        //기호 출력
        for (int k = 2*i-1; k > 0; k--)
            printf("*");
        //각 행이 끝나면 줄 바꿈
        printf("\n");
    } */
    
   /* //t : 테스트 케이스 개수
    //arr : 쿼터(25센트), 다임(10센트), 니켈(5센트), 페니(1센트)의 액수를 나타내는 배열
    //count : 각 동전의 개수를 저장하는 배열
    //c : 거스름돈
    int t, arr[]={25, 10, 5, 1}, count[4] = {0,}, c;
    scanf("%d", &t); //테스트 케이스 입력받음
    
    //각 테스트 케이스마다 거스름돈 입력받음
    for(int i=0; i<t; i++) {
        scanf("%d", &c);
        
        //각 동전 액수별로 거스름돈 계산
        //arr[j]로 나눌 수 있는 최대 개수만큼 해당 동전을 사용하고
        //count[j] 증가
        for(int j=0; j<4; j++) {
            while(c >= arr[j]) {
                c -= arr[j];
                count[j] ++;
            }
            
            //만약 거스름돈이 0이 되면 더 이상 계산할 필요 없으므로
            //반복문 종료
            if(c == 0) {
                break;
            }
        }
        
        //각 동전의 개수 출력하고, 출력한 뒤 count 배열 초기화
        //이렇게 하면 다음 테스트 케이스에서 사용될 수 있다.
        for(int j=0; j<4; j++) {
            printf("%d ", count[j]);
            count[j] = 0;
        }
        printf("\n"); //각 테스트 케이스마다 출력을 마치면 줄 바꿈
       }
    */
    
   /* //n : 과정을 몇 번 거칠 것인지 나타내는 변수
    //i : 반복문을 돌리기 위한 변수
    //k : 과정별로 생기는 추가 정사각형의 수
    //2, 3으로 초기값 설정한 이유?
    //각 과정에서 추가되는 정사각형의 개수와 총 점의 개수 사이에 규칙이 있다.
    //과정을 한 번 거칠 때마다 정사각형의 개수가 늘어나는데, 그 개수는 이전 과정에서 생긴
    //정사각형의 개수와 같게 된다. 이전 과정에서 생긴 정사각형의 각 변에 1개씩 추가하면
    //새로운 정사각형이 만들어지고, 중심에도 1개의 점이 추가되기 때문이다.
    //따라서 k = 2는 각 과정에서 새로 생긴 정사각형의 개수 의미
    //sum = 3은 초기에 4개의 점을 나타내는 것이다.
    int n, i, k = 2, sum = 3;
    scanf("%d", &n);
    
    //추가되는 정사각형의 수 계산
    //i가 1부터 시작하여 n보다 작을 동안
    //sum에 k를 더하고 k를 2배로 갱신
    //각 과정별로 생기는 정사각형의 수 누적
    //더 많은 정사각형이 추가될 수록 그 수도 지속적으로 증가
    for (i = 1; i < n; i++)
    {
        sum += k;
        k *= 2;
    }
    //sum만큼의 가로, 세로를 가진 정사각형 안에 들어가는 점의 개수 나타냄
    printf("%d", sum*sum); */
    
    //최소 방을 구하라는 문제는 1을 중심으로 주위에 숫자가 몇 개씩 생성되는지 고려하여 코드 짜면 됨
    //1부터 생각하면 첫 번째는 1개, 두 번째는 6개 세 번째는 12개의 방 생성
    //즉, n번째 방의 개수는 6*(n-1)개 -> 등차수열 활용하여 문제 해결
    
    //N : 주어진 입력으로 받은 벌집의 최종 방 번호 나타내는 변수
    //x : 벌집을 하나씩 화장할 때마다 누적된 방의 수
    //cnt : 지나가는 방의 수를 나타내는 변수
    //int N, x, cnt = 1; 경고 발생 이유
    //이렇게 작성하면 x는 초기화되지 않은 상태로 인식하기 때문에
    //아래와 같이 코드 작성
    int N, x = 1, cnt=1;
    scanf("%d",&N);
    
    //무한루프
    while(1){
        //N이 누적된 벌집의 수 x보다 작거나 같을 경우
        //반복문 종료
        if(N-x<=0)
            break;
            
        //cnt번째에 생성된 방의 개수 x 빼기
        N-=x;
            
        //다음 벌집 영역에 생성되는 방의 개수 x를 업데이트
        //벌집의 형태에 따라 방의 개수는 이전 벌집 영역의
        //방 개수에 6을 곱한 것과 같다.
        x=cnt*6;
        
        //cnt를 증가시킴으로써 새로운 층을 표현하고
        //그 층에 있는 방의 수를 나타내는 역할을 함
        cnt++;
    }
    
    //벌집 지나가는 방법 계산한 cnt 값 출력
    printf("%d\n",cnt);
    
    
    return 0;
    
    
    
    
   
}
