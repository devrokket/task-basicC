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
    int g[10], c[10];
    int i, j = 0;
    struct Hotel h1; //구조체 선언
    
    strcpy(h1.name, "조선호텔");
    strcpy(h1.address, "서울특별시 중구 소공로 106");
    h1.grade = 5;
    h1.cost = 300000;
    h1.room = 200;
    g[1] = h1.grade;
    c[1] = h1.cost;

    struct Hotel h2;

    strcpy(h2.name, "그랜드하얏트");
    strcpy(h2.address, "서울특별시 용산구 소월로 322");
    h2.grade = 5;
    h2.cost = 350000;
    h2.room = 150;
    g[2] = h2.grade;
    c[2] = h2.cost;
    struct Hotel h3;

    strcpy(h3.name, "시그니엘");
    strcpy(h3.address, "서울특별시 송파구 올림픽로 300");
    h3.grade = 5;
    h3.cost = 500000;
    h3.room = 100;
    g[3] = h3.grade;
    c[3] = h3.cost;

    printf("%d", g[1]);

    if(g[i] == 5) {
        for(i=1;i<=3;i++) {
            if(c[i] < c[i+1]) {
                printf("%d", c[i]);
            }
        }
    }
    
}