//
//  main.c
//  pointer-solve
//
//  Created by 박지현 on 2023/08/22.
//

#include <stdio.h>

int main(void) {
    /* int t; //테스트 케이스의 개수
    char a[80]; //문자열을 저장할 배열(문자열의 최대 길이가 80으로 제한)
    
    scanf("%d", &t); //사용자로부터 테스트 케이스의 개수 입력받음
    
    for(int i=0; i<t; i++) //테스트 케이스의 개수만큼 반복 수행
    {
        int s=0,c=1,z=0;
        //s : 점수 계산하는 데 사용할 변수, c : 연속된 'O'의 개수 저장할 변수, z : 문자열을 순회하는 데 사용할 변수
        scanf("%s", a);
        //문자열 형식으로 사용자로부터 입력을 받아 'a' 배열에 저장
        //입력은 각 테스트 케이스의 결과인 'O', 'X'의 조합을 나타냄
        
        while(a[z]!='\0') //'a'배열의 끝을 나타내는 널문자가 나올 때까지 반복
        {
            if(a[z]=='O') //현재 위치의 문자가 'O'일 경우 변수 s에 c 값 더하고 c 값 1 증가
                s+=c++; //c는 연속된 'O'의 개수, 이를 점수에 누적하여 계산
            else
                c=1; //현재 위치의 문자가 'X'일 경우, 연속된 'O'의 개수 초기화
                     //'X'가 나온 경우 연속된 'O'의 구간이 끝났기 때문에 초기화함
            z++; //반복문 내에 순회한 문자열의 위치를 1 증가 시킴
        }
        printf("%d\n",s); //각 테스트 케이스마다 계산된 점수 's'를 출력
    } //반복문 끝, 다음 테스트 케이스로 넘어감 */
    
    /* int arr[8];
    //'arr'라는 크기가 8인 정수 배열 선언
    //이 배열은 입력받은 8개의 음을 저장
    
    int as = 0, des = 0;
    //이 변수들은 각각 ascending(오름차순), descending(내림차순) 조건이 만족되는 경우를 세기 위해 사용
    
        for(int i = 0; i < 8; i++)
            scanf("%d", &arr[i]);
        //사용자로부터 8개의 정수 값을 입력받아 'arr'배열에 저장
        //이 값들은 주어진 음에 해당하는 숫자를 나타냄
    
        for(int i = 0; i < 4; i++){
            //for 반복문을 사용하여 배열의 앞과 뒤에서 동시에 원소를 비교하며 오름차순, 내림차순의 조건 체크
            //반복문은 배열의 앞쪽 반만을 순회한다.
            //배열의 앞쪽 반만 순회하는 이유, 음계 특성상 반복되는 패턴이 있기 때문에, 절반만 비교하면 충분하다.
            //이렇게 반복 횟수를 절반으로 줄이면 연산량을 줄이는 효과가 있어 효율적이다.
            //as : 연속된 오름차순의 원소 개수, des: 연속된 내림차순의 원소 개수
            if(arr[i] == i+1 && arr[i] + arr[7 - i] == 9)
                //현재 위치의 원소와 해당 위치에서 뒤쪽 원소의 합이 9인 경우를 확인하여 오름차순 조건을 만족하는지 체크
                as++; //만족하면 as 증가
            else if(arr[7-i] ==  i+1 && arr[i] + arr[7-i] == 9)
                //현재 위치 뒤쪽 원소와 해당 위치에서 앞쪽 원소의 합이 9인 경우를 확인하여 내림차순 조건을 만족하는지 체크
                des++; //만족하면 des wmdrk
        }

        
        if(as == 4) //as변수가 4인 경우 오름차순 조건이 만족
            printf("ascending");
        else if(des == 4) //des변수가 4인 경우 내림차순 조건 만족
            printf("descending");
        else //둘 다 아닌 경우 mixed 출력
            printf("mixed"); */
    
        /* int m,n; //사용자로부터 입력받을 정수 변수
        int sum=0, min=10000; //sum : 제곱수의 합 저장하는 변수, min : 최소 제곱수를 저장하는 변수
        int a[10000]; //최대 10000개의 정수를 저장할 수 있는 배열
        scanf("%d %d",&m,&n);
     
        for(int i=0; i<=n; i++) { //i를 0부터 n까지 반복하는 반복문
            a[i]=i*i;
            //i의 제곱 값을 배열 a의 i번 째 위치에 저장
            //즉, a[0]에는 0의 제곱, a[1]에는 1의 제곱, ..., a[n]에는 n의 제곱이 저장
     
            if(m<=a[i]&&a[i]<=n){ //m보다 크거나 같고, 동시에 n보다 작거나 같은 a[i]의 값이라면
            sum+=a[i]; //sum에 a[i]의 값을 더한다. -> 범위 내의 제곱수들의 합을 구할 수 있다.
            if(min>a[i])
                min=a[i];
                //a[i] 값이 현재까지의 최소 제곱수인 min보다 작다면, min을 a[i] 값으로 업데이트
                //이렇게 해서 범위 내에서 가장 작은 제곱수를 찾을 수 있다.
            }
        }
        if(sum==0)
            printf("-1");
        else
            printf("%d\n%d", sum,min);
    //만약 sum이 0이라면, 범위 내의 제곱수가 없으므려 "-1" 출력
    //그렇지 않다면, sum과 min 값을 출력, 즉 범위 내의 제곱수의 합과 가장 작은 제곱수를 출력
    */
    /*
    //가정 : 피보나치 수열의 첫 번째 값은 0, 두 번째 값은 1인 것을 각각
    //변수 a, b에 저장한 후 for문으로 c = a + b라는 식을 이용해 피보나치 수열을 풀이했다.
    
    //a, b, c는 피보나치 수열 계산에 사용되는 변수
    int a = 0;
    int b = 1;
    int c = 0;
    
    //사용자로부터 정수 num 입력받음
    //이 값은 피보나치 수열에서 몇 번째 항을 계산할 것인지를 나타냄
    int num;
    scanf("%d", &num);
    
    //입력받은 값이 2보다 작다면(0 또는 1일 경우), 피보나치 수열의 첫 번째와 두 번쨰 항은 각각 0과 1이므로
    //num이 0이면 "0", num이 1이면 "1"을 출력
    if(num<2){
        if(num == 0)
            printf("0");
        else
            printf("1");
    }
    //그렇지 않으면 피보나치 수열을 계산하는 부분으로 넘어간다.
    //즉 num이 2이상인 경우, for문을 통해 피보나치 수열을 계산한다.
    else {
        for (int i = 1; i < num; i++) { //for문은 1부터 num-1까지 반복
            c = a + b; //각 반복만다 c에 a와 b의 합을 저장하고,
            a = b; //a에는 이전 b 값을,
            b = c; //b에는 새로운 c 값을 할당한다.
        } //이 과정을 반복하면서 피보나치 수열의 num-1번째 항까지 계산된다.
        printf("%d", c); //계속된 피보나치 수열의 num-1번째 항인 c를 출력한다.
    }*/
    
    int n;
        scanf("%d", &n);

        int points[n][2];  // 배열로 좌표 저장
        for (int i = 0; i < n; i++) {
            scanf("%d %d", &points[i][0], &points[i][1]);
        }

        int q1 = 0, q2 = 0, q3 = 0, q4 = 0, axis = 0;

        for (int i = 0; i < n; i++) {
            int *point = points[i];  // 포인터로 현재 점 참조
            int x = point[0];
            int y = point[1];

            if (x > 0 && y > 0)
                q1++;
            else if (x < 0 && y > 0)
                q2++;
            else if (x < 0 && y < 0)
                q3++;
            else if (x > 0 && y < 0)
                q4++;
            else
                axis++;
        }

        printf("Q1: %d\n", q1);
        printf("Q2: %d\n", q2);
        printf("Q3: %d\n", q3);
        printf("Q4: %d\n", q4);
        printf("AXIS: %d\n", axis);
    
    return 0;
    
}


