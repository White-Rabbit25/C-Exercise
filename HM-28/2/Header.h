#pragma once

/*2.���������� �������� ������� Ordering("�������������"), � ������ ���������� ����������� ���������� ����,
��� � �������������� ��������� �� ����������. �������: ���� � < b < c, �� ������ Ordering(a, b, c)
����� �� �����, ������ � ���� ���������� a, b, c ���, ��� �������� ���� �����.*/



template < typename U >
void Ordering(U &a, U &b, U &c) {

	if (!(a < b && b < c)) {
		
		if (a > b) {
			U tmp = a;
			a = b;
			b = tmp;
		}

		if (a > c) {
			U tmp = a;
			a = c;
			c = tmp;
		}

		if (c < b) {
			U tmp = c;
			c = b;
			b = tmp;
		}
	}
}