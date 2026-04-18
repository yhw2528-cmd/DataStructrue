#include <stdio.h>

/*
int main() {
	int a = 10;
	int* p = &a;
	printf("p가 가리키는 값: %d\n", *p);
	*p = 99;
	printf("값: %d\n", a);
	return 0;
}
*/
/*
void add_one(int *a) {
	*a = *a+ 1;
}
int main() {
	int a = 10;
	add_one(&a);
	printf("%d", a);
}
*/
/*
void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int a = 3, b=7;
	printf("a=%d, b=%d", a,b);
	swap(&a, &b);
	printf("a=%d, b=%d", a, b);
	return 0;
}*/
/*
int main() {
	int arr[5] = { 10,20,30,40,50 };
	int* p = arr;
	printf("%d\n", *p);
	printf("%d\n", *(p + 1));
	printf("%d\n", *(p + 2));

}*/

/*
int main() {
	int arr[5] = { 10,20,30,40,50 };
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n; i++) {
		printf("%d  ", arr[i]);
	}
	printf("\n");
	
	

	int* p = arr;
	for (int i = 0; i < n; i++) {
		printf("%d  ", *p);
		p++;
	}
	return 0;
}
*/
/*
void min_max(const int* arr, int n, int* min, int* max) {
	*min = *max = arr[0];
	for (int i = 1; i < n; i++) {
		if (arr[i] < *min) {
			*min = arr[i];
		}
		else if (arr[i] > *max) {
			*max = arr[i];
		}
	}
}
int main() {
	int arr[] = { 5,2,9,1,5,6 };
	int lo;
	int hi;
	min_max(arr, sizeof(arr) / sizeof(arr[0]), &lo, &hi);
	printf("min= %d max=%d", lo, hi);
}
*/
/*
void double_all(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		arr[i] *= 2;
	}
}
int main() {
	int arr[] = { 5,2,9,1,5,6 };
	double_all(arr, sizeof(arr) / sizeof(arr[0]));
	for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {
		printf("%d", arr[i]);
	}
	return 0;
}*/
/*
struct Student {
	int id; char name[20]; double gpa;
};

struct Student s1 = { 101,"홍길동",3.8 };
struct Student* p = &s1;
*/
/*
typedef struct { char name[30]; int age; }Person;

int main() {
	Person alice = { "Alice",20 }; //alice는 여러 개의 자료형을 가지고 있는 변수라고 생각!!
	Person *p = &alice;
	printf("%s ,%d\n", p->name, p->age);
	printf("%s ,%d\n", alice.name, alice.age);
	p->age = 10;
	printf("%d\n", alice.age);
	printf("%d\n",p->age);
	return 0;
}*/
/*
typedef struct { char name[30]; int age; double gpa; }Person;
int main() {
	Person class[] = { {"Alice",20,3.5},{"Bob",22,3.8},{"Charlie",19,3.2} };

	for (int i = 0; i < 3; i++) {
		printf("name=%s, age=%d,gpa=%.2f \n", class[i].name, class[i].age, class[i].gpa);
	}

	Person* ptr = class;
	for (int i = 0; i < 3; i++) {
		printf("name=%s, age=%d,gpa=%.2f \n", class->name, class->age, class->gpa);
		ptr++;
	}
	return 0;
}
*/