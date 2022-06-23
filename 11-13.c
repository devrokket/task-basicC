/*
프로그래밍 연습 11.13
hotel을 기술하는 구조체를 정의하라. 구조체의 멤버는 이름, 주소, 등급, 평균 객 실 사용료, 객실 수를 포함하고,
다음과 같은 작업을 수행한다.
• 주어진 등급 안에서 객실 요금의 순으로 출력한다.
• 주어진 등급 안에서 주어진 가격 이하의 방들을 출력한다.
*/

#include <stdio.h>
#include <string.h>

struct Hotel { //구조체 정의
    char name[20]; //구조체 멤버 1 (name)
    char address[100]; //멤버 2
    int grade;//멤버 3
    int cost; //멤버 4
    int room; //멤버 5
};

int main() {
    int n, a, g, c, r;
    struct Hotel h1; //구조체 선언
    
    strcpy(h1.name, "조선호텔");
    strcpy(h1.address, "서울특별시 중구 소공로 106");
    h1.grade = 5;
    h1.cost = 300000;
    h1.room = 200;

    struct Hotel h2;

    strcpy(h2.name, "그랜드하얏트");
    strcpy(h2.address, "서울특별시 용산구 소월로 322");
    h2.grade = 5;
    h2.cost = 350000;
    h2.room = 150;

    struct Hotel h3;

    strcpy(h3.name, "시그니엘");
    strcpy(h3.address, "서울특별시 송파구 올림픽로 300");
    h3.grade = 5;
    h3.cost = 500000;
    h3.room = 100;

    struct Hotel h[10][10][10][10] = {
        {"그랜드워커힐", "서울특별시 광진구 워커힐로 177", 5, 180000, 200}, {"포 시즌스", "서울특별시 종로구 새문안로 97", 5, 450000, 100} 
    }
}

    /*if(g == 5) {
        for c == 5;
    }
    printf("hotel3의 주소는 %s입니다.\n", h3.address);
    return 0;

    grade가 5일 때 가격 정렬하는 부분에서 막힘. */
