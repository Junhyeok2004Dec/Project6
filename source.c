#include <stdio.h>

int main() {
	int milliliter; //밀리리터  변수
	//short int short_liter
	int short_liter; //쇼트 리터

	float liter; //리터 정의
	scanf_s("%d", &milliliter); // 정수 입력을 받고 밀리리터의 값으로 삼음.
	liter = (float) milliliter / 1000; // float형식을 잘 고려하여 리터를 계산.


	printf("%d ml =  %f l \n", milliliter, liter); // %d === mililiter , %f === liter
	// 값이 mililiter: 400, liter = 0.4(f)이면 %d는 400을, %f는 0.4를 의미한다.

	short_liter = liter; // short_liter에 대입. 뭔가 손해를 볼 것 같다.
	
	printf("%lf 리터(liter) %lf short자료형(short_liter)", liter, short_liter);
	// 첫 번째 %lf{ long float(넓은 실수)} 에는 liter값을, 두 번째 %lf에서는 short_liter의 값이 적용되어 출력된다.
	// 그렇지만  과연 제대로 출력될까? 의문이다.

	return 0;

}