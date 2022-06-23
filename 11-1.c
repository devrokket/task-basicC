/*
프로그래밍 연습 11.1
time_struct 라는 이름으로 구조체를 정의하라. 이 구조체는 int형 hour, int형 minutes, 그리고 int형 second를 멤버로 갖는다.
각 멤버에 값을 할당하고, 다음 형 태로 출력하는 프로그램을 작성하라.
16:40:51
*/
#include <stdio.h>

struct Time_struct {
    int hour;
    int minutes;
    int second;
};

int main() {
    struct Time_struct t1;
    
    t1.hour = 16;
    t1.minutes = 40;
    t1.second = 51;

    printf("%d:%d:%d\n", t1.hour, t1.minutes, t1.second);
    return 0;
}
