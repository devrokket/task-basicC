#include <stdio.h>

void main() {
    char name[100][10];
    int score[100][3];
    int n, m, total, tot = 0;

    for(n=1;n<100;n++) {
        printf("%d번쨰 학생의 세 과목 점수를 입력하세요.\n", n);
        scanf("%d %d %d", &score[n][0], &score[n][1], &score[n][2]);
    }

    for(n=1;n<100;n++) {
        tot = score[n][0] + score[n][1] + score[n][2];
    }
}