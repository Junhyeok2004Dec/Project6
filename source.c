#include <stdio.h>

int f1() {
	int milliliter; //�и����� ���� �� ����
	short int short_liter; // short Int ������ ���� ������ �� �ڸ�

	float liter; // mililiter * 10^3. ���Ͱ� �� ��
	scanf_s("%d", &milliliter); // ���� �Է��� �ް� �и������� ������ ����. 204�� �Է������� �������� mililiter�� 204�� �ǹ���.
	liter = milliliter * (1 / 1000); // float������ �� ����Ͽ� ���͸� ����ϰ�(ml / 1000 -> ml * (1/1000) : ����. 1000�� ����)


	printf("%d, %f", milliliter, liter); // mililiter�� ���� �ִ� ��(����)�� %d��, liter�� ���� �ִ� ��(float�Ǽ�)�� %f�� �Ǿ� ��µȴ�.
	// ���� mililiter: 400, liter = 0.4(f)�̸� %d�� 400��, %f�� 0.4�� �ǹ��Ѵ�.

	short_liter = liter; // short_liter�� ����. ���� ���ظ� �� �� ����.
	
	printf("%lf , %lf", liter, short_liter);
	// ù ��° %lf{ long float(���� �Ǽ�)} ���� liter����, �� ��° %lf������ short_liter�� ���� ����Ǿ� ��µȴ�.
	// �׷�����  ���� ����� ��µɱ�? �ǹ��̴�.

	return 0;

}