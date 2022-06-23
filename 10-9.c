/*프로그래밍 연습 10.9
계산기 역할을 하는 프로그램을 톱다운 모듈화 형식으로 작성하라. 프로그램에서 두개의숫자를입력받아사용자가다음과같은선택을할수있도록하라.
(a) 두 숫자의 합
(b) 두 숫자의 차이 (c) 두숫자의곱
(d) 두 숫자의 나누기
숫자입력, 계산, 출력 등 각 기능에 대하여 독립적인 함수를 작성해야 한다.
계산 모듈은 둘째 모듈화 단계에서 구현하여 각 종류의 계산을 수행하도록 한다. Main 함수에서는 단 한 번의 함수 호출을 하도록 한다.*/
#include <stdio.h>

void menu();
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
float div(float num1, float num2);

int main() {
    int set, num1, num2;
    menu();
    scanf("%d", &set);
    
    printf("숫자 두 개를 입력하시오.\n");
    scanf("%d %d", &num1, &num2);

    if(set==1) {
        printf("연산 결과는 %d입니다.", add(num1, num2));
    }
    else if(set==2) {
        printf("연산 결과는 %d입니다.", sub(num1, num2));
    }
    else if(set==3) {
        printf("연산 결과는 %d입니다.", mul(num1, num2));
    }
    else if(set ==4) {
        printf("연산 결과는 %f입니다.", div(num1, num2));
    }
    
}

void menu() {
    printf("==========\n");
    printf("1.+, 2,-, 3.*, 4./ \n 필요한 연산을 선택하시오.\n");
    printf("==========\n");  
}

int add(int num1, int num2) {
    return num1 + num2;
}

int sub(int num1, int num2) {
    return num1 - num2;
}

int mul(int num1, int num2) {
    return num1 * num2;
}

float div(float num1, float num2) {
    return num1 / num2 ;
}
