#include <stdio.h>

int main() {
	int id, passwrd;

	printf("Print four number each time, for ID, PW");

	printf("id:____\b\b\b\b");
	scanf("%d", &id);

	printf("pw:____\b\b\b\b");
	scanf("%d", &passwrd);

	printf("'\a�Էµ� ���̵�� \"%d\"�̰� ��й�ȣ�� \"%d\"�Դϴ�. ", id, passwrd);

}