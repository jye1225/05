# include <stdio.h>

int main(void){
    char c;
    int num=0;

    printf("문자열을 입력해주세요: ");

    while ((c=getchar())!='\n') {
        // scanf 대신에 쓰는 것
        // 한글자씩 읽어옴
    
        if (c >='0' && c<='9'){
            num++;
        }
    }

    printf("숫자의 개수는 %d개입니다.",num);

    return 0;
}