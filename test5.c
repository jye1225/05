# include <stdio.h>

int main(void){
    int a;
    int b;
    char c;

    printf("계산식을 입력하세요: ");
    scanf("%i %c %i", &a, &c, &b);

    if (c=='+'){
        printf("계산된 결과는 %i입니다.",a+b);
        
    }
    else if (c=='-'){
        printf("계산된 결과는 %i입니다.",a-b);
    }
    else if (c=='*'){
        printf("계산된 결과는 %i입니다.",a*b);
    }    
    else if (c == '/'){
        printf("계산된 결과는 %i입니다.", a/b);
    }

    return 0;
}
