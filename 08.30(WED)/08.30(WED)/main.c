//
//  main.c
//  08.30(WED)
//
//  Created by 박지현 on 2023/08/30.
//

//#include <stdio.h>

//int main(void) {
    /*코드업 1226번
    //로또 당첨 번호와 지혜의 로또 번호를 저장할 배열
    int a[30],b=0,c,d,e,f,bonus;
    int aa[30],bb,cc,dd,ee,ff,bo;
    //지혜의 로또 번호와 당첨 번호를 비교하여 일치하는 숫자의 개수를 저장하는 변수
    int num = 0;
    //당첨 번호, 지혜의 로또 번호 입력받기
    scanf("%d %d %d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&bonus);
    scanf("%d %d %d %d %d %d",&aa[0],&aa[1],&aa[2],&aa[3],&aa[4],&aa[5]);
        
    //이중 반복문을 사용하여 지혜의 로또 번호와 당첨 번호 비교
    //지혜의 로또 번호의 인덱스를 순차적으로 증가
    for(c = 0; c < 6; c++){
        //당첨 번호의 인덱스를 순차적으로 증가
        for(b =0; b<6; b++){
        //만약 지혜의 로또 번호와 당첨 번호가 일치한다면
        //num에 2를 더해준다.
        if(a[b] == aa[c]){
                num += 2;
            }
        }
        //지혜의 로또 번호가 보너스 번호와 일치하면
        //num에 1을 더해준다,
        if(aa[c] == bonus){
            num += 1;
        }
    }
    //num 값에 따라 지혜의 로또 번호의 당첨 결과를 판단하여 출력
    if(num == 12) printf("1");
    else if(num == 11) printf("2");
    else if(num == 10) printf("3");
    else if(num >=8) printf("4");
    else if(num >=6) printf("5");
    else printf("0"); */
    
    /* 코드업 1228번//희윤이의 키와 몸무게 저장하기 위한 변수
    double stature, weight;
    scanf("%lf %lf" , &stature, &weight);
     
    //비만도 계산하여 저장할 변수
    double ratio;
    
    //비만도 계산 공식
    ratio = (weight - ( (stature -100)*0.9 ))*100/( (stature -100)*0.9 );
    
    //비만도 값에 따라 등급 판정하여 출력
    if(ratio<=10)printf("정상");
    else if(ratio<=20)printf("과체중");
    else printf("비만"); */
    
    /*코드업 1173번
    //입력된 시간과 분을 저장하기 위한 변수 선언
    int a,b;
    scanf("%d %d",&a,&b);
    
    //입력된 분이 30보다 작은 경우, 큰 경우 나누어 처리
    //입력된 분이 30보다 작은 경우,
    //시간을 1시간 감소 시키고,
    if(b<30){
        a--;
        //이때 시간이 음수가 된 경우
        //24를 더해 하루를 돌려준다.
        if(a<0){
        a=a+24;
    }
        //그리고 분에 30을 더해준다
        b=b+30;
        printf("%d %d",a,b);
    }else{
        //입력된 분이 30이상인 경우에는
        //분에서 30을 뺀 값을 사용한다.
        b=b-30;
        printf("%d %d",a,b);
    } */
    
    /*코드업 1272번
    //존(k)과 밥(h)의 번호를 저장하고
    //나중에 큰 값을 결정하는데 사용할 변수 temp 선언
    int k,h,temp;
    scanf("%d %d",&k, &h);
    
    //존과 밥의 번호 중 큰 값을 temp 변수에 저장
    if(k>=h)
        temp = k;
    else
        temp = h;
    
    //money 변수에는 규칙에 따라 각 번호별로 받는 기부금을 저장
    //k_money, h_money 변수에는 존과 밥이 받는 기부금 저장
    int money,k_money = 0,h_money = 0;
    
    //반복문을 통해 1 ~ temp까지의 번호에 대해 기부금 계산하고,
    //각 번호에 맞는 기부금을 해당 변수에 저장
    for(int i = 1; i<= temp; i++){
        //홀수 번호인 경우
        if(i%2 == 1)
            money = (i+1)/2;
        else //짝수 번호인 경우
            money = (i/2)*10;
        
        //현재 순번 i가 존의 번호와 같다면
        //해당 기부금을 k_money에 저장
        if(i == k)
            k_money = money;
        //현재 순번 i가 밥의 번호와 같다면
        //해당 기분금을 h_money에 저장
        if(i == h)
            h_money = money;
            
    }
    
    //기부금 출력
    printf("%d",k_money + h_money); */
    
    /*코드업 1283번
    //a : 투자한 액수를 나타내는 변수
    //b : 투자 일 수를 나타내는 변수
    float a;
    int b;
    scanf("%f", &a);
    scanf("%d", &b);
    
    //a2 : a의 정수 부분만을 저장하는 변수
    int a2;
    a2 = a;
    
    //반복문을 통해 투자 일 수만큼의 일별 변동폭을 입력받고,
    //그에 따른 수익을 계산하여 a에 더해준다.
    //변동폭인 rate를 퍼센트 단위로 받기 때문에
    //a에 (a * rate * 0.01)를 더해주어 수익을 업데이트한다.
    float rate;
    for (int i = 1; i <= b; i++) {
        scanf("%f", &rate);
        a = a + (a * rate * 0.01);
    }
    
    //최종적인 순수익을 정수로 계산한다.
    //(a - a2)는 실수형 순수익이며, 이를 정수로 변환하면서
    //소수점 첫째자리까지 반올림한다.
    //0.5를 더하거나 빼줌으로써 반올림을 수행한다.
    int sum;
    if ((a - a2) > 0) sum = a - a2 + 0.5;
    else sum = a - a2 - 0.5;
    //최종 순수익인 sum을 출력
    printf("%d\n", sum);
    
    //이후에는 순수익이 양수인지, 0인지, 음수인지
    //판단하고 그에 따른 결과 출력
    if(sum > 0) printf("good");
    else if(sum == 0) printf("same");
    else printf("bad"); */
    
    /*코드업 1284번*/
    
    
    //return 0;
//}

/*코드업 1284번 */
# include <stdio.h>

/*//PrimeNum: 주어진 숫자 num이 소수인지 판별하는 함수
//소수인 경우 1을 반환, 소수가 아닌 경우 0 반환
int PrimeNum(int num) {
    //함수 내부에서 for문을 사용하여 2부터 num의 절반까지의
    //숫자로 나눠 보면서 나누어떨어지는지 검사
    //나누어 떨어지는 순간 소수가 아니므로 0을 반환
    for(int i = 2; i <= num/2; ++i)
        if(num%i == 0)
            return 0;
    //그렇지 않은 경우 소수로 간주하여 1 반환
    return 1;
}

int main(void) {
    //사용자로부터 num 입력받기
    int num;
    scanf("%d", &num);

    //for 반복문을 사용하여 2부터 num까지의 숫자 중에서
    //num으로 나누어 떨어지는 숫자들을 검사
    for(int i = 2; i <= num; ++i) {
        //num이 i로 나누었을 때 나머지가 0인 경우
        //i와 num/i가 모두 소수인지 검사
        //두 수가 소수이고, num/i가 1인 아닌 경우
        //(즉, num이 소수가 아닌 경우)에는 해당 두 수를 출력하고
        //프로그램 종료
        if(num%i == 0) {
            if (PrimeNum(i) && PrimeNum(num/i) && num/i != 1) {
                printf("%d %d", i, num/i);
                return 0;
            }
        }
    }
    //만약, 어떤 조건도 만족하지 않으면
    //"wrong number" 출력
    printf("wrong number");
    return 0;
} */

int main(void){
    
    /*1402번//사용자로부터 입력받은 구구단의 단수를 저장하는 변수
    int num;
    scanf("%d",&num);
    
    //num이 1이상 9이하의 범위에 속하는지 검사
    //조건을 만족한다면 아래 코드 실행
    if(num>=1 && num<=9){
        int sum;
        //i의 반복은 1부터 9까지 반복하면서 구구단의 행을 나타냄
        for(int i = 1; i<=9; i++){
            sum = i*num;
            //i에 num을 곱한 수만큼 반복하면서 해당 행에
            //문자 출력
            for(int j = 1; j<=sum;j++){
                printf("*");
            }
            //한 행이 끝날 때마다 줄을 바꿔 출력
            printf("\n");
            
        }
    }*/
    
    /* 1402번
    //num: 사용자로부터 입력받은 데이터의 개수를 저장하는 변수
    //buf: 입력된 데이터를 저장할 배열
    //데이터의 개수가 최대 1000개까지 가능하므로, 배열을 충분한 크기로 선언
    int num;
    int buf[1000] = {};
    scanf("%d",&num);
    
    //입력된 데이터의 개수만큼 반복하여 데이터를 입력받아
    //buf 배열에 저장
    //반복문을 통해 사용자로부터 데이터를 입력받아
    //배열에 순서대로 저장
    for(int i =0; i<num; i++){
        scanf("%d", &buf[i]);
    }
    
    //입력된 데이터의 개수만큼 반복하여 배열을 거꾸로 출력
    //거꾸로 출력하기 위해 먼저 배열의 마지막 요소부터 출력하고,
    //앞으로 이동하면서 순서대로 출력
    for(int j = num-1; j >= 0; j--){
        //배열의 요소를 공백을 기준으로 출력
        printf("%d ",buf[j]);
    }*/
    
    /*1405
    //num: 사용자로부터 입력받은 숫자의 개수 저장하는 변수
    //buf: 입력된 숫자를 저장할 배열
    int num;
    int buf[1000] = {};
    scanf("%d",&num);
    
    //입력된 숫자의 개수만큼 반복하여 숫자들을 입력받아
    //buf 배열에 저장
    //반복문을 통해 사용자로부터 숫자를 입력받아
    //배열에 순서대로 저장
    for(int i =0; i<num; i++){
        scanf("%d", &buf[i]);
    }
    
    //입력된 숫자의 개수만큼 반복하여 숫자를 왼쪽으로
    //로테이션하여 출력
    //왼쪽으로 로테이션하면서 배열의 값을 순서대로 출력
    int index = 0;
    for(int k = 0; k < num; k++){
        //왼쪽으로 로테이션하기 위해 index 변수 사용
        index = k;
        for(int j = 0; j <num; j++){
            printf("%d ",buf[index]); //배열의 값 출력
            index++; //index를 증가시키면서 순서대로 값 출력
            //만약 배열의 크기를 초과하면 다시 처음으로 돌아가도록 조정
            if(index == num){
                index = 0;
            }
        }
        printf("\n"); //한 줄 출력이 끝날 때마다 줄바꿈 추가
    }*/
    
    /*1408번*/
    //buf: 크기가 10인 정수형 배열
    int buf[10] = {};
    
    //사용자로부터 10개의 숫자를 입력받아
    //배열 buf에 순서대로 저장
    for (int i = 0; i<10; i++){
        scanf("%d",&buf[i]);
    }
    
    //사용자로부터 k의 값을 입력받음
    int index;
    scanf("%d",&index);
    
    //입력받은 k 값에서 1을 빼서 배열 인덱스로 변환한 뒤,
    //해당 인덱스의 배열 요소를 출력
    printf("%d",buf[index-1]);
    return 0;
}
