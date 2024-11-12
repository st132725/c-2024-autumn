#include<iostream>
#include<ctime>

int random(int start = 0, int end = 9) {
	return rand() % (end - start + 1) + start;
}

int* createArray(int len) {
	int* arr = (int*)malloc(sizeof(int) * len);

	for (int i = 0; arr != nullptr && i < len; ++i) {
		*(arr + i) = random();
	}

	return arr;
}

void outArray(int* arr, int len) {
	for (int i = 0; i < len; ++i) {
		std::cout << *(arr + i) << " ";
	}
	printf("\n");
}

void deleteArray(int* arr) {
	delete[] arr;
}

void printMenu(int*& arr, int& len) {
	system("cls");
	std::cout << "Now your array is: ";
	outArray(arr, len);
	std::cout << "\n" << "print 0 to end";
	std::cout << "\n" << "print 1 to add element to start";
	std::cout << "\n" << "print 2 to add element to end";
	std::cout << "\n" << "print 3 to remove element from start";
	std::cout << "\n" << "print 4 to remove element from end";
	std::cout << "\n" << "print here: ";

}

void addToStart(int*& arr, int& len) {
	int newElement = random();
	int* newArr = (int*)malloc(sizeof(int) * (len + 1));

	*(newArr) = newElement;

	for (int i = 0; i < len; ++i) {
		*(newArr + i + 1) = *(arr + i);
	}

	deleteArray(arr);

	arr = newArr;
	++len;
}

void addToEnd(int*& arr, int& len) {
	int* newArr = (int*)malloc(sizeof(int) * (len + 1));
	for (int i = 0; i < len; ++i) {
		*(newArr + i) = *(arr + i);
	}
	*(newArr + len) = random();

	deleteArray(arr);

	arr = newArr;
	++len;
}

void removeFromStart(int*& arr, int& len) {
	for (int i = 0;  arr != nullptr && i < len - 1; ++i) {
		*(arr + i) = *(arr + i + 1);
	}

	--len;
}

void removeFromEnd(int*& arr, int& len) {
	--len;
}

int main(int argc, char* argv[]) {
	srand(time(0));
	int len = 0;
	std::cout << "Enter yhe initial size of the array: ";
	std::cin >> len;

	int* array = createArray(len);

	bool yn = true;
	while (yn) {
		int numm = 0;
		printMenu(array, len);
		std::cin >> numm;
		switch (numm) {
		case (0): 
			yn = false;
			break;
		case (1): 
			addToStart(array, len);
			break;
		case (2): 
			addToEnd(array, len);
			break;
		case (3): 
			removeFromStart(array, len);
			break;
		case (4): 
			removeFromEnd(array, len);
			break;
		}
	}

	deleteArray(array);

	return 0;
}