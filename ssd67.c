#include <stdio.h>

int main() {
	int id, passwrd;

	printf("Print four number each time, for ID, PW");

	printf("id:____\b\b\b\b");
	scanf("%d", &id);

	printf("pw:____\b\b\b\b");
	scanf("%d", &passwrd);

	printf("'\a입력된 아이디는 \"%d\"이고 비밀번호는 \"%d\"입니다. ", id, passwrd);

}