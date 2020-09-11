#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	char str1[50], str2[50], * p1, * p2, check = 0;
	printf("Program compare 2 string are equal or not?\nEnter String 1 : ");
	scanf("%s", str1);
	printf("Enter String 2 : ");
	scanf("%s", str2);
	p1 = str1;
	p2 = str2;
	while (*p1 != '\0' || *p2 != '\0') {
		if (*p1 == *(p1 + 1)) {
			while (*p1 == *(p1 + 1)) {
				p1++;
			} 
		}
		if (*p2 == *(p2 + 1)) {
			while (*p2 == *(p2 + 1)) {
				p2++;
			}
		}
		
		if (*p1 != *p2) {
			check = 1;
			break;
		}
		p1++;
		p2++;
	}
	printf("\n\n2 String is : ");
	if (check == 0) {
		printf("Equal\n\n");
	}
	else
		printf("Not Equal\n\n");
	return 0;
}