#include <stdio.h>
#include <stdlib.h>

int i,x;
int main() {
	system("title UUIDGen");
	printf("需要的UUID数量:");
	scanf("%d", &x);
	system("cls");
	if (x <= 0) { x = 1; }
	system("powershell [guid]::NewGuid() | find /v \"Guid\" | find /v \"--\" | find \"-\" > uuid.txt");
	for (i = 1; i < x; i++) {
		system("powershell [guid]::NewGuid() | find /v \"Guid\" | find /v \"--\" | find \"-\" >> uuid.txt");
	}
	printf("-------------------------------------------------------\n");
	printf("------------------------UUID---------------------------\n");
	printf("-------------------------------------------------------\n");
	system("type uuid.txt");
	printf("-------------------------------------------------------\n");
	system("pause");
	return 0;
}