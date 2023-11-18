//
//  main.c
//  09.01(FRI)
//
//  Created by 박지현 on 2023/09/01.
//

#include<stdio.h>

int main(void) {

        /*int t;
        char a[80];
        scanf("%d", &t);
        for(int i=0; i<t; i++)
        {
            int s=0,c=1,z=0;
            scanf("%s", a);
            while(a[z]!='\0')
            {
                if(a[z]=='O')
                    s+=c++;
                else
                    c=1;
                z++;
            }
            printf("%d\n",s);
        }*/
    
    /*int arr[8];
        int as = 0, des = 0;
        for(int i = 0; i < 8; i++)
            scanf("%d", &arr[i]);
        for(int i = 0; i < 4; i++){
            if(arr[i] == i+1 && arr[i] + arr[7 - i] == 9)
                as++;
            else if(arr[7-i] ==  i+1 && arr[i] + arr[7-i] == 9)
                des++;
        }
        
        if(as == 4)
            printf("ascending");
        else if(des == 4)
            printf("descending");
        else
            printf("mixed");
    */
    
    int n, v;
    int sum = 0;
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &v);
    for (int j = 0; j < n; j++) {
        if (v == a[j])
                sum++;
    }
    printf("%d", sum);
    return 0;
}
