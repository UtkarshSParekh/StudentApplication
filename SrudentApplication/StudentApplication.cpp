#include <iostream>
#include <string>
using namespace std;

class StudentApplication
{
public: void mainMenuList()
	{
		cout << "1 - Create Student Class" << endl;
		cout << "2 - Create Undergraduate Student Class" << endl;
		cout << "3 - Create Graduate Student Class" << endl;
		cout << "4 - Create Employee Class" << endl;
		cout << "5 - Create Course Class" << endl;

		cout << "6 - Print Student Class" << endl;
		cout << "7 - Print Undergraduate Student Class" << endl;
		cout << "8 - Print Graduate Student Class" << endl;
		cout << "9 - Create Employee Class" << endl;
		cout << "10 - Print Course Class" << endl;
		cout << "0 - Exit" << endl;
	}
};
int main()
{

	StudentApplication sa;
	//Mainmenu Listing.
	sa.mainMenuList();
	


	int chooseMenu;
	int subChooseMenu;
	cin >> chooseMenu;

	do
	{
		switch (chooseMenu)
		{
		case 1:

			cout << "1.1 - Create non-parameterized student class[1]" << endl;
			cout << "1.2 - Create parameterized student class[2]" << endl;
			cout << "1.3 - Return to main menu[3]" << endl;

			do
			{
				cin >> subChooseMenu;

				switch (subChooseMenu)
				{
				case 1:
					cout << "1.1 - Create non-parameterized student class[1]" << endl;
					break;
				case 2:
					cout << "1.2 - Create parameterized student class[2]" << endl;
					break;
				case 3:
					cout << "1.3 - Return to main menu[3]" << endl;
					sa.mainMenuList();
					break;
				default:
					break;
				}

			} while (subChooseMenu != 3);

			break;
		default:
			break;
		}
	} while (chooseMenu != 0);
	
	return 0;
}