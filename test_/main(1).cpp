#include <iostream>
using namespace std;



int main()
{	//����Ǯ��(1)
	//1�� ���� 
	/*cout << "�ȳ��ϼ���\n";
	cout << "�ȳ�\n";*/
	//2�� ����
	//cout << 1 << 2 << 3 << '\n' // 123�� 45 ���� ������.
	//	 << 4 << 5 << '\n'
	//3�� ����
	/*cout << 123 << '\n'
		 << '\\' << 100 << " �޾Ҵ�" << '\n'
		 << "���� �� ������";*/

//����Ǯ��(2)
//1�� ����
/*float f = 0;

cout << "�������� ���� �� �Դϱ�?" << '\n';
cin >> f;
cout << "�������� ����" << f << "�Դϴ�.";*/
//2�� ����
/*char c = 0;

cout << "���ĺ� ù ���ڴ� �����Դϱ�" << '\n';
cin >> c;
cout << "�˹ٺ� ù ���ڴ�" << c << "�Դϴ�.";*/
//3�� ����
/*float cm, kg = 0;
cout << "Ű�� �����Ը� �Է��Ͻʽÿ�." << '\n';
cin >> cm;
cin >> kg;
cout << "Ű��" << cm << "cm �Դϴ�.";
cout << "�����Դ�" << kg << "kg �Դϴ�.";*/

//���� Ǯ�� (3)
//1�� ����
/*cout << 0 - 4 << "\n";
cout << 3.14 * 2 << "\n";
cout << 5 / 3 << "\n";
cout << 30 % 7 << "\n";
cout << (7 + 32) / 5 << "\n";*/
//2�� ����
/*float h, l = 0;
cout << "�ﰢ���� ���̸� �Է��Ͻÿ�." << '\n';
cin >> h;
cout << "�ﰢ���� �غ��� �Է��Ͻÿ�." << '\n';
cin >> l;
cout << "�ﰢ���� ���̴�" << (h * l) / 2 << "�Դϴ�.";*/
//3�� ���� ��� (1)
/*float num1, num2, num3, num4, num5 = 0;
cout << "���� 1�� ������ �Է��Ͻʽÿ�" << '\n';
cin >> num1;
cout << "���� 2�� ������ �Է��Ͻʽÿ�" << '\n';
cin >> num2;
cout << "���� 3�� ������ �Է��Ͻʽÿ�" << '\n';
cin >> num3;
cout << "���� 4�� ������ �Է��Ͻʽÿ�" << '\n';
cin >> num4;
cout << "���� 5�� ������ �Է��Ͻʽÿ�" << '\n';
cin >> num5;
cout << "5������ �հ��" << (num1 + num2 + num3 + num4 + num5) << "�Դϴ�." << '\n';
cout << "5������ �����" << (num1 + num2 + num3 + num4 + num5) / 5 << "�Դϴ�.";*/
//3�� ���� ��� (2)
/*float num = 0;
float sum = 0;
cout << "���� 1�� ������ �Է��Ͻʽÿ�" << '\n';
cin >> num;
sum += num;
cout << "���� 2�� ������ �Է��Ͻʽÿ�" << '\n';
cin >> num;
sum += num;
cout << "���� 3�� ������ �Է��Ͻʽÿ�" << '\n';
cin >> num;
sum += num;
cout << "���� 4�� ������ �Է��Ͻʽÿ�" << '\n';
cin >> num;
sum += num;
cout << "���� 5�� ������ �Է��Ͻʽÿ�" << '\n';
cin >> num;
sum += num;
cout << "5������ �հ��" << sum << "�Դϴ�." << '\n';
cout << "5������ �����" << sum / 5 << "�Դϴ�.";*/

//���� Ǯ��(4)
//1�� ����
//int num;
//cout << "������ �Է��Ͻʽÿ�" << '\n';
//cin >> num;
//	//¦������
//if (num % 2 == 0)
//{
//	cout << num << "�� ¦���Դϴ�." << '\n';
//}
//else
//{
//	cout << num << "�� Ȧ���Դϴ�." << '\n';
//}
//2�� ���� ���(1) - else if
/*float num1, num2;
cout << "2���� ������ �Է��Ͻʽÿ�" << '\n';
cin >> num1;
cin >> num2;

if (num1 == num2)
{
 cout << "�� ���ڴ� �����ϴ�." << '\n';
}
else if (num1 > num2)
{
 cout << num1 << "�� ����" << num2 << "���� �����ϴ�.";
}
else if (num1 < num2)
{
 cout << num2 << "�� ����" << num1 << "���� �����ϴ�.";
}*/
//2�� ���� ��� (2) switch
//float num1, num2;
//int a;

//cout << "�ΰ��� ������ �Է��� �ֽʽÿ�." << '\n';
//cin >> num1;
//cin >> num2;

//if (num1 == num2)
//{
//	a = 1;
//}
//else if(num1 > num2)
//{
//	a = 2;
//}
//else if (num1 < num2)
//{
//	a = 3;
//}

////if�� ���� �� switch���� ����
//switch (a) //float�� a�� ����� ���� �߻���.
//{
//case 1: 
//	cout << "������";
//	break;
//case 2:
//	cout << "num1ŭ";
//	break;
//case 3:
//	cout << "num2ŭ";
//	break;
//default:
//	break;
//}

//3�� ���� ���
/*int num;
cin >> num;

switch (num)
{
case 1:
 cout << "1�Դϴ� ����սô�." << '\n';
 break;
case 2:
 cout << "2�Դϴ� �����մϴ�." << '\n';
 break;
case 3:
 cout << "3�Դϴ� �����Դϴ�." << '\n';
 break;
case 4:
 cout << "4�Դϴ� ���߽��ϴ�." << '\n';
 break;
case 5:
 cout << "5�Դϴ� ����մϴ�." << '\n';
 break;
default:
 break;
}*/
//int i;
//for (i = 1; i < 5; i++)
//{
//	cout << i << "�ݺ�";
//}
//cout << i << "�ݺ�����";
//����Ǯ��(5)
//���� 1�����
//cout << "1~10������ ¦���� ����մϴ�" << '\n';
//
//	for (int i = 1; i <= 10; i++)
//	{
//		if (i % 2 == 0)
//		{
//			cout << i << '\n';
//		}
//		else
//		{
//			continue;
//		}
//	}
//���� 2�� ���
//
//int num = 0;
//int sum = 0;
//
//do 
//{
//	cout << "���������� �Է��Ͻʽÿ� (0���� ����)" << '\n';
//	cin >> num;
//	sum += num;
//} while (num);
//cout << sum;
//����Ǯ��(6)
//���� 1�� ���

int x, sum;

cout << "������ �Է� �Ͻʽÿ�" << '\n';

cin >> x;

sum = square(x);


cout << x << "�� ������" << sum << "�Դϴ�";


	return 0;
}

int square(int x)
{
	return x*x;
}




