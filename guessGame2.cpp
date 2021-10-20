#include <iostream>
using namespace std;

int main()
{
// Guess game where user1 enters a number, and user2 attempts to guess it.

int hostUserNum, guestUserNum;
cout << "Host: ";
cin >> hostUserNum; 
system("cls");		// Clears screen so that guest user can't see the number
	
cout << "Guest: ";
cin >> guestUserNum;

(hostUserNum == guestUserNum) ? cout << "Correct!": "False!";

system("pause>0");
}
