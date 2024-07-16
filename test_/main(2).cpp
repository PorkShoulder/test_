
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