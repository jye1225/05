# include <stdio.h>

int main(void){
    int a;

    printf("정수 하나를 입력해주세요: ");
    scanf("%i",&a);

    // 처음에 짰던 코드
    // if (a>=0){
    //     printf("%i",a);
    // }
    // else{
    //     printf("%i",a*-1);
    // }

    // 다시 짠 코드
    if (a<0){
        a=-a;
    }
    printf("%i",a);

    return 0;
}