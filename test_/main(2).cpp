
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

// ���� Ǯ��(7)
// ���� ���� 1�� ���

//int main()
//{
//	int a = 5;
//	cout << "������ a�� �ּҴ�" << &a << "�Դϴ� \n";
//	return 0;
//}
// 1. ���� �ڵ�� ��� ��ǻ�Ϳ����� �����ϰ� ��µȴ�.						-> x
// 2. �����͸� ������ ��, �ٸ� ���忡�� �� �����Ϳ� �ּҸ� ������ �� �ִ�. 		-> o
// 3. ���۷����� ������ ��, �ٸ� ���忡�� �� ���۷����� �ּҸ� ������ �� �ִ�.	-> x

// ���� ���� 2�� ���
//void add(int* pX, int a);
//
//int main()
//{
//	int num1, num2, a;
//
//	cout << "�� ������ ������ �Է��Ͻʽÿ�. \n";
//	cin >> num1;
//	cin >> num2;
//
//	cout << "���� ������ �Է��Ͻʽÿ� \n";
//	cin >> a;
//
//	add(&num1, a);
//	add(&num2, a);
//
//	cout << a <<"���� �� �����Ƿ� \n";
//	cout << "���� 1��" << num1 << "�� �Դϴ�. \n";
//	cout << "���� 2��" << num2 << "�� �Դϴ�. \n";
//
//	
//	return 0;
//}
//
//void add(int* pX, int a)
//{
//	*pX = *pX + a;
//}

//���� 3�� ���

//void add(int &pX, int a);
//
//int main()
//{
//	int num1, num2, a;
//
//	cout << "�� ������ ������ �Է��Ͻʽÿ�. \n";
//	cin >> num1;
//	cin >> num2;
//
//	cout << "���� ������ �Է��Ͻʽÿ� \n";
//	cin >> a;
//
//	add(num1, a);
//	add(num2, a);
//
//	cout << a << "���� �� �����Ƿ� \n";
//	cout << "���� 1��" << num1 << "�� �Դϴ�. \n";
//	cout << "���� 2��" << num2 << "�� �Դϴ�. \n";
//
//
//	return 0;
//}
//
//void add(int &pX, int a)
//{
//	pX += a;
//}

//int main()
//{
//	const int num = 5; //const�� �ٴ� ������ �迭���� ��Ҹ� �޴°� ������, �̸� ������ ���̾���� �̴� ���ؼ� �ȵǱ� ������ ����� �޾ƾ���.
//	int test[num];
//
//	cout << num << "Ȯ��\n";
//	for (int i = 0; i < num; i++)
//	{
//		cin >> test[i]; // ���⼭ ���ذ� ���� ���� �Է��� ���� 5���� �迭�� ����
//						// �̹� �ʱ⿡ [5]�� �Ǿ����� 
//	}
//
//	for (int j = 0; j < num; j++)
//	{
//		cout << j + 1 << "Ȯ��2" << test[j] << "��\n";
//	}
//
//	return 0;
//}

//int main()
//{
//	const int num = 5;
//	int test[num];
//
//	cout << num << "���� ������ �Է����ּ���\n";
//
//	for (int i = 0; i < num; i++)
//	{
//		cin >> test[i];
//	}
//
//	for (int s = 0; s < num - 1; s++)
//	{
//		for(int t=s+1; t<num; t++) // t=s+1�� ������ �迭�� s������°�� ���ϱ� ���ؼ� �׸��� �� �迭�� ũ�� 5�� ���� �ʴ� ������ ���⼭�� �迭 ������
//		{	//if���� ���ҿ���. �׸��� �̾Ʒ��� �迭 ũ�Ⱚ��.
//			if (test[t] > test[s]) // s�� test[]�迭���� ù��°�̰�t�� �� ����
//			{					   // t��s�� ũ�⸦ ����
//				int tmp = test[t]; // ���� if������ ������ tmp�� t�� ���� 
//				test[t] = test[s]; // s�� ���� t�� ����
//				test[s] = tmp;	   // ���� ����tmp�� �ִ� ���� s�� ���� ->t�� s�� ���� ���� ����
//			}	
//		}
//	}
//	for (int j = 0; j < num; j++)
//	{
//		cout << j + 1 << "�� ������" << test[j] << "�Դϴ�\n";
//	}
//	return 0;
//
//}

// ���� Ǯ�� (8)
// ���� 1�� ���

// 5���� ��Ҹ� ���� �迭�� �޾Ƽ� �ִ��� �����ϱ� -> ��5�� �Է� �� �ִ� ���

//int max(int x[], int y);
//
//int main()
//{
//	const int num = 5;
//	int array[num];
//	cout << num <<"���� ���� ������ �Է��Ͻʽɿ�.\n";
//
//	for (int i = 0; i < num; i++)
//	{
//		cin >> array[i];
//	}
//
//	int _max = max(array, num);
//
//	cout << _max;
//
//	return 0;
//}
//// max����
//int max(int x[], int y)
//{
//	int a = x[0];
//	for (int j = 1; j < y; j++)
//	{
//		if (x[j] > a)
//		{
//			a = x[j];
//		}
//	}
//	return a;
//}
