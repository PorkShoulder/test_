
#include <iostream>
using namespace std;

//����Ǯ��(6)

//int square(int x);
//double square(double x);
//
//int main()
//{
//int x, sum;
//double y, sumy;
//
//
//cout << "������ �Է� �Ͻʽÿ�" << '\n';
//
//cin >> x;
//
//sum = square(x);
//
//cout << x << "�� ������" << sum << "�Դϴ�";
//
////���� �߰� 
//cout << "�Ҽ��� �Է��Ͻʽÿ�" << '\n';
//
//cin >> y;
//
//sumy = square(y);
//
//cout << y << "�� ������" << sumy << "�Դϴ�";
//
//return 0;
//
//}
//
//int square(int x)
//{
//	return x * x;
//}
//
//double square(double x)
//{
//	return x * x;
//}

// ���� 3�� ���

//int square(int x);
//double square(double x);
//
//int main()
//{
//	int x, sum_x;
//	double y, sum_y;
//	cout << "Ȯ�ο� int" << '\n';
//	cin >> x;
//	sum_x = square(x);
//	cout << x << square(x) << '\n';
//	//double
//	cout << "Ȯ�ο� double" << '\n';
//	cin >> y;
//	sum_y = square(y);
//	cout << y << square(y) << '\n';
//
//	return 0;
//
//}
//
//inline int square(int x) { return x * x; }
//inline double square(double x) { return x * x; }

////���� 4�� ���
//template <typename T>
//T square(T x)
//{
//	return x * x;
//}
//
//int main()
//{
//	int x;
//	double y;
//	
//	//int
//	cout << "Ȯ�ο� int" << '\n';
//	cin >> x;
//	int sum_x = square(x);
//	cout << x << square(x) << '\n';
//	
//	//double
//	cout << "Ȯ�ο� double" << '\n';
//	cin >> y;
//	double sum_y = square(y);
//	cout << y << square(y) << '\n';
//
//	return 0;
//}