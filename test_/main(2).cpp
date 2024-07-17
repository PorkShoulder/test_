
#include <iostream>
using namespace std;

//예제풀기(6)

//int square(int x);
//double square(double x);
//
//int main()
//{
//int x, sum;
//double y, sumy;
//
//
//cout << "정수를 입력 하십시오" << '\n';
//
//cin >> x;
//
//sum = square(x);
//
//cout << x << "의 제곱은" << sum << "입니다";
//
////예제 추가 
//cout << "소수를 입력하십시오" << '\n';
//
//cin >> y;
//
//sumy = square(y);
//
//cout << y << "의 제곱은" << sumy << "입니다";
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

// 예제 3번 답안

//int square(int x);
//double square(double x);
//
//int main()
//{
//	int x, sum_x;
//	double y, sum_y;
//	cout << "확인용 int" << '\n';
//	cin >> x;
//	sum_x = square(x);
//	cout << x << square(x) << '\n';
//	//double
//	cout << "확인용 double" << '\n';
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

////예제 4번 답안
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
//	cout << "확인용 int" << '\n';
//	cin >> x;
//	int sum_x = square(x);
//	cout << x << square(x) << '\n';
//	
//	//double
//	cout << "확인용 double" << '\n';
//	cin >> y;
//	double sum_y = square(y);
//	cout << y << square(y) << '\n';
//
//	return 0;
//}

// 예제 풀기(7)
// 예제 문제 1번 답안

//int main()
//{
//	int a = 5;
//	cout << "변수의 a의 주소는" << &a << "입니다 \n";
//	return 0;
//}
// 1. 다음 코드는 어떠한 컴퓨터에서도 동일하게 출력된다.						-> x
// 2. 포인터를 선언한 후, 다른 문장에서 그 포인터에 주소를 대입할 수 있다. 		-> o
// 3. 래퍼런스를 선언한 후, 다른 문장에서 그 래퍼런스에 주소를 대입할 수 있다.	-> x

// 예제 문제 2번 답안
//void add(int* pX, int a);
//
//int main()
//{
//	int num1, num2, a;
//
//	cout << "두 과목의 점수를 입력하십시오. \n";
//	cin >> num1;
//	cin >> num2;
//
//	cout << "더할 점수를 입력하십시오 \n";
//	cin >> a;
//
//	add(&num1, a);
//	add(&num2, a);
//
//	cout << a <<"점을 더 했으므로 \n";
//	cout << "과목 1은" << num1 << "점 입니다. \n";
//	cout << "과목 2은" << num2 << "점 입니다. \n";
//
//	
//	return 0;
//}
//
//void add(int* pX, int a)
//{
//	*pX = *pX + a;
//}

//예제 3번 답안

//void add(int &pX, int a);
//
//int main()
//{
//	int num1, num2, a;
//
//	cout << "두 과목의 점수를 입력하십시오. \n";
//	cin >> num1;
//	cin >> num2;
//
//	cout << "더할 점수를 입력하십시오 \n";
//	cin >> a;
//
//	add(num1, a);
//	add(num2, a);
//
//	cout << a << "점을 더 했으므로 \n";
//	cout << "과목 1은" << num1 << "점 입니다. \n";
//	cout << "과목 2은" << num2 << "점 입니다. \n";
//
//
//	return 0;
//}
//
//void add(int &pX, int a)
//{
//	pX += a;
//}