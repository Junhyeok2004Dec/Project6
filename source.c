#include <stdio.h>

int f1() {
	int milliliter; //밀리리터 값이 들어갈 변수
	short int short_liter; // short Int 형식의 리터 변수가 들어갈 자리

	float liter; // mililiter * 10^3. 리터가 들어갈 곳
	scanf_s("%d", &milliliter); // 정수 입력을 받고 밀리리터의 값으로 삼음. 204를 입력했으면 이제부터 mililiter는 204를 의미함.
	liter = milliliter * (1 / 1000); // float형식을 잘 고려하여 리터를 계산하고(ml / 1000 -> ml * (1/1000) : 리터. 1000배 차이)


	printf("%d, %f", milliliter, liter); // mililiter가 갖고 있는 값(정수)는 %d로, liter가 갖고 있는 값(float실수)는 %f가 되어 출력된다.
	// 값이 mililiter: 400, liter = 0.4(f)이면 %d는 400을, %f는 0.4를 의미한다.

	short_liter = liter; // short_liter에 대입. 뭔가 손해를 볼 것 같다.
	
	printf("%lf , %lf", liter, short_liter);
	// 첫 번째 %lf{ long float(넓은 실수)} 에는 liter값을, 두 번째 %lf에서는 short_liter의 값이 적용되어 출력된다.
	// 그렇지만  과연 제대로 출력될까? 의문이다.

	return 0;

}