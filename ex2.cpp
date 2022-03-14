// Каждый следующий элемент ряда Фибоначчи получается при сложении двух предыдущих. Начиная с 1 и 2, первые 10 элементов будут:

// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

// Найдите сумму всех четных элементов ряда Фибоначчи, которые не превышают четыре миллиона.

#include <iostream>
#define NMAX 4000000
using namespace std;

int main () {
    int sum = 0;
    int array[100];
    int length = 2;
    array[0] = 1;
    array[1] = 2;
    int i = 2;
    int temp;
    while (1) {
            temp = array[i-1] + array[i-2];
            if (temp < NMAX) {
            array[i] = temp;
            length++;
            i++;
        } else {
            break;
        }
    }
    for (int i = 0; i < length; i++) {
        if (array[i] % 2 == 0) {
            sum = sum + array[i];
        }
    }
    cout << sum << "\n";

    return 0;
}