
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

//int main()
//{
//	const int num = 5; //const가 붙는 이유는 배열에서 요소를 받는게 고정된, 미리 지정된 값이어야함 이는 변해선 안되기 때문에 상수로 받아야함.
//	int test[num];
//
//	cout << num << "확인\n";
//	for (int i = 0; i < num; i++)
//	{
//		cin >> test[i]; // 여기서 오해가 있음 내가 입력한 값은 5개의 배열의 값임
//						// 이미 초기에 [5]가 되어있음 
//	}
//
//	for (int j = 0; j < num; j++)
//	{
//		cout << j + 1 << "확인2" << test[j] << "끝\n";
//	}
//
//	return 0;
//}

//int main()
//{
//	const int num = 5;
//	int test[num];
//
//	cout << num << "명의 점수를 입력해주세요\n";
//
//	for (int i = 0; i < num; i++)
//	{
//		cin >> test[i];
//	}
//
//	for (int s = 0; s < num - 1; s++)
//	{
//		for(int t=s+1; t<num; t++) // t=s+1인 이유는 배열이 s다음번째와 비교하기 위해서 그리고 총 배열의 크기 5를 넘지 않는 선에서 여기서는 배열 순서임
//		{	//if문은 스왑용임. 그리고 이아래는 배열 크기값임.
//			if (test[t] > test[s]) // s는 test[]배열에서 첫번째이고t는 그 다음
//			{					   // t와s의 크기를 비교함
//				int tmp = test[t]; // 비교후 if조건이 성립시 tmp에 t를 보관 
//				test[t] = test[s]; // s의 값을 t에 전달
//				test[s] = tmp;	   // 이후 기존tmp에 있던 값을 s에 전달 ->t와 s의 값이 서로 스왑
//			}	
//		}
//	}
//	for (int j = 0; j < num; j++)
//	{
//		cout << j + 1 << "번 점수는" << test[j] << "입니다\n";
//	}
//	return 0;
//
//}

// 예제 풀기 (8)
// 예제 1번 답안

// 5개의 요소를 가진 배열을 받아서 최댓값을 리턴하기 -> 값5개 입력 후 최댓값 출력

//int max(int x[], int y);
//
//int main()
//{
//	const int num = 5;
//	int array[num];
//	cout << num <<"명의 시험 점수를 입력하십심오.\n";
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
//// max정의
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
