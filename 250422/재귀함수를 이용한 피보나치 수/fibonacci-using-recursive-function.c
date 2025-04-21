#include <stdio.h>

// n = 3
int p(int n) {
	if (n == 0) return 0;
	else if (n <= 1) return 1;
	
	return p(n - 1) + p(n - 2);
}

int main() {
	int n,sum=0;
	scanf_s("%d", &n);
	
	printf("%d", p(n));

}