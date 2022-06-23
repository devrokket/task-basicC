
/*프로그래밍 연습 9.5
문자열을 입력 받아서 문자열내의 문자를 알파벳순으로 다시 출력하는 프로 그램을 작성하라.
예로 STRING 이라는 단어를 입력하면 GINRST 라는 출력이 나오도록 한다.*/

# include <stdio.h>
# include <string.h>

int main() {
    int k, i, length;
    char word[50], temp;
    printf("Enter a any word: \n");
    scanf("%s", word);
   
    
   //str의 길이 구하기.
    length = strlen(word);
    
    for(k = 0; k < length-1; k++) {
        for(i = 0; i < length-1-k;i++) {
            if (word[i] > word[i+1]) {
                temp = word[i];
                word[i] = word[i+1];
                word[i+1] = temp;
            }
        }
     }
    

    printf("알파벳 순으로 정리된 문자열: ");
    printf("%s\n", word);
    return 0;
}