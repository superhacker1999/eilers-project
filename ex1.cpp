// Если выписать все натуральные числа меньше 10, кратные 3 или 5, то получим 3, 5, 6 и 9. Сумма этих чисел равна 23.

// Найдите сумму всех чисел меньше 1000, кратных 3 или 5.

#include <iostream> 
#define NMAX 1000
using namespace std;

int main () {
    int sum = 0;
    
    
    for (int i = 3; i < NMAX;i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum = sum + i;
        }
    }
    cout << sum << "\n";
    return 0;
}