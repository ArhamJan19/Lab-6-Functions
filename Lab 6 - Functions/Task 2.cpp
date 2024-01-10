//#include<iostream>
//using namespace std;
//double Power(double num, int pow = 2);
//int main()
//{
//	double number, result;
//	int Pow;
//	char choice;
//	cout << "\n\nEnter a Number: ";
//	cin >> number;
//	cout << "\n\nDo you want to enter the Exponential (Y/N)? ";
//	cin >> choice;
//	if (choice == 'Y' || choice == 'y')
//	{
//		cout << "\n\nEnter Exponential: ";
//		cin >> Pow;
//		result = Power(number, Pow);
//	}
//	else
//	{
//		result = Power(number);
//	}
//	cout << "\n\nRESULT: " << result;
//	cout << endl << endl;
//	system("pause");
//	return 0;
//}
//double Power(double num, int pow)
//{
//	double result = 1;
//	for (int i = 0; i < pow; i++)
//	{
//		result *= num;
//	}
//	return result;
//}