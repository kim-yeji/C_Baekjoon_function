#include<stdio.h>
//���������� �ڵ����� 0���� �ʱ�ȭ�� (false)
bool selfNum[10002]; //�����ѹ����� �� ������ ���� �� �迭

bool dn(int i) {
	
	if (i > 10000) return 0;
	if (selfNum[i] == 1) return 0; //���ݱ��� �� ���̶� ȣ������� �ִ���
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