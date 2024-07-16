#include <iostream>
using namespace std;



int main()
{	//예제풀기(1)
	//1번 예제 
	/*cout << "안녕하세요\n";
	cout << "안녕\n";*/
	//2번 예제
	//cout << 1 << 2 << 3 << '\n' // 123과 45 줄은 변경점.
	//	 << 4 << 5 << '\n'
	//3번 예제
	/*cout << 123 << '\n'
		 << '\\' << 100 << " 받았다" << '\n'
		 << "내일 또 만나요";*/

//예제풀기(2)
//1번 예제
/*float f = 0;

cout << "원주율의 값은 얼마 입니까?" << '\n';
cin >> f;
cout << "원주율의 값은" << f << "입니다.";*/
//2번 예제
/*char c = 0;

cout << "알파벳 첫 글자는 무엇입니까" << '\n';
cin >> c;
cout << "알바벳 첫 글자는" << c << "입니다.";*/
//3번 예제
/*float cm, kg = 0;
cout << "키와 몸무게를 입력하십시오." << '\n';
cin >> cm;
cin >> kg;
cout << "키는" << cm << "cm 입니다.";
cout << "몸무게는" << kg << "kg 입니다.";*/

//예제 풀기 (3)
//1번 예제
/*cout << 0 - 4 << "\n";
cout << 3.14 * 2 << "\n";
cout << 5 / 3 << "\n";
cout << 30 % 7 << "\n";
cout << (7 + 32) / 5 << "\n";*/
//2번 예제
/*float h, l = 0;
cout << "삼각형의 높이를 입력하시오." << '\n';
cin >> h;
cout << "삼각형의 밑변을 입력하시오." << '\n';
cin >> l;
cout << "삼각형의 넓이는" << (h * l) / 2 << "입니다.";*/
//3번 예제 답안 (1)
/*float num1, num2, num3, num4, num5 = 0;
cout << "과목 1의 점수를 입력하십시오" << '\n';
cin >> num1;
cout << "과목 2의 점수를 입력하십시오" << '\n';
cin >> num2;
cout << "과목 3의 점수를 입력하십시오" << '\n';
cin >> num3;
cout << "과목 4의 점수를 입력하십시오" << '\n';
cin >> num4;
cout << "과목 5의 점수를 입력하십시오" << '\n';
cin >> num5;
cout << "5과목의 합계는" << (num1 + num2 + num3 + num4 + num5) << "입니다." << '\n';
cout << "5과목의 평균은" << (num1 + num2 + num3 + num4 + num5) / 5 << "입니다.";*/
//3번 예제 답안 (2)
/*float num = 0;
float sum = 0;
cout << "과목 1의 점수를 입력하십시오" << '\n';
cin >> num;
sum += num;
cout << "과목 2의 점수를 입력하십시오" << '\n';
cin >> num;
sum += num;
cout << "과목 3의 점수를 입력하십시오" << '\n';
cin >> num;
sum += num;
cout << "과목 4의 점수를 입력하십시오" << '\n';
cin >> num;
sum += num;
cout << "과목 5의 점수를 입력하십시오" << '\n';
cin >> num;
sum += num;
cout << "5과목의 합계는" << sum << "입니다." << '\n';
cout << "5과목의 평균은" << sum / 5 << "입니다.";*/

//예제 풀기(4)
//1번 예제
//int num;
//cout << "정수를 입력하십시오" << '\n';
//cin >> num;
//	//짝수조건
//if (num % 2 == 0)
//{
//	cout << num << "은 짝수입니다." << '\n';
//}
//else
//{
//	cout << num << "은 홀수입니다." << '\n';
//}
//2번 예제 답안(1) - else if
/*float num1, num2;
cout << "2개의 정수를 입력하십시오" << '\n';
cin >> num1;
cin >> num2;

if (num1 == num2)
{
 cout << "두 숫자는 같습니다." << '\n';
}
else if (num1 > num2)
{
 cout << num1 << "의 값이" << num2 << "보다 높습니다.";
}
else if (num1 < num2)
{
 cout << num2 << "의 값이" << num1 << "보다 높습니다.";
}*/
//2번 예제 답안 (2) switch
//float num1, num2;
//int a;

//cout << "두개의 정수를 입력해 주십시오." << '\n';
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

////if문 구분 후 switch에서 선택
//switch (a) //float형 a로 선언시 문제 발생함.
//{
//case 1: 
//	cout << "동일함";
//	break;
//case 2:
//	cout << "num1큼";
//	break;
//case 3:
//	cout << "num2큼";
//	break;
//default:
//	break;
//}

//3번 예제 답안
/*int num;
cin >> num;

switch (num)
{
case 1:
 cout << "1입니다 노력합시다." << '\n';
 break;
case 2:
 cout << "2입니다 부족합니다." << '\n';
 break;
case 3:
 cout << "3입니다 보통입니다." << '\n';
 break;
case 4:
 cout << "4입니다 잘했습니다." << '\n';
 break;
case 5:
 cout << "5입니다 우수합니다." << '\n';
 break;
default:
 break;
}*/
//int i;
//for (i = 1; i < 5; i++)
//{
//	cout << i << "반복";
//}
//cout << i << "반복했음";
//예제풀기(5)
//예제 1번답안
//cout << "1~10까지의 짝수를 출력합니다" << '\n';
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
//예제 2번 답안
//
//int num = 0;
//int sum = 0;
//
//do 
//{
//	cout << "시험점수를 입력하십시오 (0으로 종료)" << '\n';
//	cin >> num;
//	sum += num;
//} while (num);
//cout << sum;
//예제풀기(6)
//예제 1번 답안

int x, sum;

cout << "정수를 입력 하십시오" << '\n';

cin >> x;

sum = square(x);


cout << x << "의 제곱은" << sum << "입니다";


	return 0;
}

int square(int x)
{
	return x*x;
}




