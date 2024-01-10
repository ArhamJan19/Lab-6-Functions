//#include<iostream>
//using namespace std;
//
//int Swap(int Number);
//
//int main()
//{
//	int num;
//
//	cout << "\n\nEnter A Number: ";
//	cin >> num;
//	cout << "\n\nBEFORE SWAP: " << num;
//	cout << "\n\nAFTER SWAP: " << Swap(num);
//
//	cout << endl << endl;
//	return 0;
//}
//
//int Swap(int Number)
//{
//	int remainder_num = 0;
//	while (Number > 0)
//	{
//		int digit = Number % 10;
//		
//		remainder_num = remainder_num * 10 + digit;
//		Number = Number / 10;
//	}
//	return remainder_num;
//}