#include <iostream>
using namespace std;
int main() {
    setlocale(0, "Rus");
	int a, b;
	cout << "Введите вес товара";
	cin >> a;
	cout << "Введите расстояние доставки";
	cin >> b;
    if (a < 10 && b < 50) {
        cout << "Цена 100 рублей";
    } else if (a < 10 && b >= 50) {
        cout << "Цена 200 рублей";
    } else if (a >= 10 && b < 50) {
        cout << "Цена 150 рублей";
    } else {
        cout << "Цена 250 рублей";
    }
    return 0;
}
