#include <iostream>
using namespace std;

int main()
{
	int day;
	cout << "day";
	cin >> day;

	switch (day)
	{

	case 1:
		cout << "sturday";
		break;

	case 2:
		cout << "sunday";
		break;

	case 3:
		cout << "munday";
			break;

	case 4:
		cout << "tuesday";
		break;

	case 5:
		cout << "wednesday";
		break;

	case 6:
		cout << "thursday";
		break;

	case 7:
		cout << "friday";
		break;

	default:
		cout << "elkhodary";
		break;
	}
	return 0;
}