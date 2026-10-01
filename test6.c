# include <stdio.h>

int main(void){
    int answer = 59;
    int i;
    int count=0;

    printf("답은 정수입니다.\n");

    do
    {
        printf("정답을 맞춰주세요: ");
        scanf("%d",&i);

        count++;

        if (i>answer){
            printf("정답보다 큽니다.");
        }
        else if (i<answer){
            printf("정답보다 작습니다.");
        }

    } while (i!=answer);

    printf("정답입니다.\n");
    printf("시도 횟수는 %d번입니다.\n", count);

    return 0;

}