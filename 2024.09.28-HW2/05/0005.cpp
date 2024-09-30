#include<cstdio>

int main(int argc, char argv[]) {
	int l1 = 0, w1 = 0, h1 = 0;
	int l2 = 0, w2 = 0, h2 = 0;
	int lc = 0, wc = 0, hc = 0;
	scanf_s("%d %d %d", &l1, &w1, &h1);
	scanf_s("%d %d %d", &l2, &w2, &h2);
	scanf_s("%d %d %d", &lc, &wc, &hc);
	if ((h1 + h2) <= hc) {
		if ((l1 > l2 ? l1 : l2) <= lc && (w1 > w2 ? w1 : w2) <= wc) {
			printf("YES");
			return 0;
		}
		else if ((l1 > w2 ? l1 : w2) <= lc && (l2 > w1 ? l2 : w1) <= wc) {
			printf("YES");
			return 0;
		}
		else if ((l1 > w2 ? l1 : w2) <= wc && (l2 > w1 ? l2 : w1) <= lc) {
			printf("YES");
			return 0;
		}
		else if ((l1 > l2 ? l1 : l2) <= wc && (w1 > w2 ? w1 : w2) <= lc) {
			printf("YES");
			return 0;
		}
	}
	if ((h1 > h2 ? h1 : h2) <= hc) {
		if ((l1 + l2) <= lc && (w1 > w2 ? w1 : w2) <= wc) {
			printf("YES");
			return 0;
		}
		else if ((w1 + w2) <= lc && (l1 > l2 ? l1 : l2) <= wc) {
			printf("YES");
			return 0;
		}
		else if ((l1 + w2) <= lc && (w1 > l2 ? w1 : l2) <= wc) {
			printf("YES");
			return 0;
		}
		else if ((l2 + w1) <= lc && (l1 > w2 ? l1 : w2) <= wc) {
			printf("YES");
			return 0;
		}
	}
	if ((h1 > h2 ? h1 : h2) <= hc) {
		if ((l1 + l2) <= wc && (w1 > w2 ? w1 : w2) <= lc) {
			printf("YES");
			return 0;
		}
		else if ((w1 + w2) <= wc && (l1 > l2 ? l1 : l2) <= lc) {
			printf("YES");
			return 0;
		}
		else if ((l1 + w2) <= wc && (w1 > l2 ? w1 : l2) <= lc) {
			printf("YES");
			return 0;
		}
		else if ((l2 + w1) <= wc && (l1 > w2 ? l1 : w2) <= lc) {
			printf("YES");
			return 0;
		}
	}
	printf("NO");

	return 0;
}