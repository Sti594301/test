#include <iostream>
using namespace std;
int main() {
    setlocale(0, "Rus");
	int a, b;
	cout << "������� ��� ������";
	cin >> a;
	cout << "������� ���������� ��������";
	cin >> b;
    if (a < 10 && b < 50) {
        cout << "���� 100 ������";
    } else if (a < 10 && b >= 50) {
        cout << "���� 200 ������";
    } else if (a >= 10 && b < 50) {
        cout << "���� 150 ������";
    } else {
        cout << "���� 250 ������";
    }
    return 0;
}
