#include <stdio.h>
int main() {
    int i, j; //array 행, 열 좌표 변수 선언
    int sum = 0; //합계 점수 변수 선언
    int sum_array[20];
    int max = 0;
    int score_array[20][4] = {
        {1, 10, 20, 30},
        {2, 100, 20, 30},
        {3, 10, 60, 99},
        {4, 10, 20, 30},
        {5, 10, 20, 30},
        {6, 10, 20, 30},
        {7, 10, 20, 30},
        {8, 10, 20, 30},
        {9, 10, 70, 30},
        {10, 10, 20, 30},
        {11, 10, 20, 30},
        {12, 10, 20, 30},
        {13, 10, 20, 30},
        {14, 10, 20, 30},
        {15, 10, 20, 30},
        {16, 10, 20, 30},
        {17, 10, 20, 30},
        {18, 10, 20, 30},
        {19, 10, 20, 30},
        {20, 10, 20, 30},
    };    
    //세 과목 합계 구하기
    printf("(a) 각 학생의 합계 점수: \n");
    for(int i=0;i<=19;i++) {
        for(int j=1;j<4;j++) {
            sum = sum + score_array[i][j];
        }
        printf("%d학생의 세 과목 합계 점수는 %d입니다.\n", i+1, sum);
        
        sum = 0;
    }
    //과목별 최고점 구하기.. but 몇 번째 학생의 점수인지 나타낼 때 오류 발생.
    printf("(b) 각 과목에 대하여 최고 점수와 해당 학생의 Roll number: \n");
    for(int j=1;j<4;j++) {
        for(int i=0;i<20;i++) {
            if(max < score_array[i][j]) {
                max = score_array[i][j];
            }
            }
        printf("%2d", max);
        }
        
        max = 0;
    
    //최고합계점수를 기록한 학생 번호 출력
    for(int i=0;i<20;i++) {
        for(int j=1;j<4;j++) {
            sum = sum + score_array[i][j];
        }
        int sum_array[20] = {sum}; // sum_array배열에 합게점수 추가해서 i 번째 학생 찾으려고 했지만 잘 안됨..
        printf("%d", sum_array[i]);
        sum = 0;
    }

}