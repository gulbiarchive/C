//
//  main.c
//  09.27(WED)
//
//  Created by 박지현 on 2023/09/27.
//

#include <stdio.h>

int main(void){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    int n3 = n1 * (n2 % 10); // (3)
    int n4 = n1 * ((n2 / 10) % 10); // (4)
    int n5 = n1 * ((n2 / 10) / 10); // (5)
    int n6 = n1 * n2; //(6)
    
    printf("%d\n", n3);
    printf("%d\n", n4);
    printf("%d\n", n5);
    printf("%d\n", n6);
    
    return 0;
}











