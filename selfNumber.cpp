#include<stdio.h>
//전역변수는 자동으로 0으로 초기화됨 (false)
bool selfNum[10002]; //셀프넘버인지 참 거짓을 저장 할 배열

bool dn(int i) {
	
	if (i > 10000) return 0;
	if (selfNum[i] == 1) return 0; //지금까지 한 번이라도 호출된적이 있느냐
	selfNum[i] = 1;

	int copy = i;
	while (i) {
		copy += i % 10; 
		i /= 10;
	}
	dn(copy);
	return 1;

}
int main() {
	for (int i = 1; i <= 10000; i++) {
		if (dn(i)==1) {
			printf("%d\n", i);
		}
	}
	return 0;
}