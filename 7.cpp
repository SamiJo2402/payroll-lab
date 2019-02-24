#include <iostream>
using namespace std;
//wasssup
void displayTime(int hour, int minute);
int main() {
	int hour, minute;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "\nEnter the number of minutes: ";
	cin >> minute;
	displayTime(hour, minute);

	while (1) getchar();
	return 0;
}
void displayTime(int hour, int minute)
{
	cout << "\nTime: " << hour << ":" << minute;
}
