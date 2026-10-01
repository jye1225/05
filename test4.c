# include <stdio.h>

int main(void){
    int a;
    int sum=0;

    printf("숫자를 입력해주세요: ");
    scanf("%i",&a);

    for (int i=1;i<=a;i++){
        sum=sum+i;
    }

    printf("%d",sum);
    return 0;
    
}