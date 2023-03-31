#include <stdio.h> //파일 입.출력 라이브러리 import :: 참고 :: https://www.ibm.com/docs/ko/i/7.3?topic=files-stdioh
int r6main(void/*받는 인자가 없음을 '명시적으로' 정의함*/)
/* entry point */
{
	printf("HELLO!I am so happy because this is my first C program.\n\r"); // msg printf 이후 다음줄의 맨 앞으로 이동
	printf("최준혁: 국립제주대학 기계시스템공학과 학번 2023108316 goes for a great C programmer.\n\r");
	return(0); // exit stage 0 -> 정상종료  int로 받았으면 int로 return을 해야 함.
}