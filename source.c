#include <stdio.h>

int main() {
	int milliliter; //�и�����  ����
	//short int short_liter
	int short_liter; //��Ʈ ����

	float liter; //���� ����
	scanf_s("%d", &milliliter); // ���� �Է��� �ް� �и������� ������ ����.
	liter = (float) milliliter / 1000; // float������ �� ����Ͽ� ���͸� ���.


	printf("%d ml =  %f l \n", milliliter, liter); // %d === mililiter , %f === liter
	// ���� mililiter: 400, liter = 0.4(f)�̸� %d�� 400��, %f�� 0.4�� �ǹ��Ѵ�.

	short_liter = liter; // short_liter�� ����. ���� ���ظ� �� �� ����.
	
	printf("%lf ����(liter) %lf short�ڷ���(short_liter)", liter, short_liter);
	// ù ��° %lf{ long float(���� �Ǽ�)} ���� liter����, �� ��° %lf������ short_liter�� ���� ����Ǿ� ��µȴ�.
	// �׷�����  ���� ����� ��µɱ�? �ǹ��̴�.

	return 0;

}