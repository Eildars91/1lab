#include "complex.h"

int main() 
{
	setlocale(LC_ALL, "RUS");
	bool end = true;
	bool changeNumber = true;
	Complex c1, c2, c3;
	double x, y;
	int c;
	while (end) {
		if (changeNumber) {
			cout << "������� �������������� � ������ ��� ������� ������������ �����: ";
			cin >> x >> y;
			c1.in(x, y);
			cout << "������� �������������� � ������ ��� ������� ������������ �����: ";
			cin >> x >> y;
			c2.in(x, y);
		}
		do {
			cout << endl << "��������� ��������:\n1. ��������\n2. ���������\n3. ���������\n4. �������\n\n������� ��������: ";
			cin >> c;
			if (c > 4 | c < 1)
				cout << endl << "�������� �������! ����������� ��� ���:\n";
		} while (c > 4 | c < 1);
		switch (c) {
		case 1:
			c3.sum(c1, c2);
			c3.out();
			break;
		case 2:
			c3.vi4it(c1, c2);
			c3.out();
			break;
		case 3:
			c3.ym(c1, c2);
			c3.out();
			break;
		case 4:
			if (c2.ch())
			{
				c3.del(c1, c2);
				c3.out();
			}
			break;
		}
		do {
			cout << endl << "��������� ��������:\n1. �������� ������ ��������\n2. �������� ������ �����\n3. �����\n\n �������� ��������: ";
			cin >> c;
			if (c > 3 | c < 1)
				cout << endl << "�������� �������! ����������� ��� ���:\n";
		} while (c > 3 | c < 1);
		switch (c) {
		case 1:
			changeNumber = false;
			break;
		case 2:
			changeNumber = true;
			break;
		case 3:
			end = false;
			break;
		}
	}
	return 0;
}