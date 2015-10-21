#include "Enum.h"
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

STATE mainMenu()
{
	system("cls");
	cout << "main menu" << endl;
	cout << "1: start new game" << endl;
	cout << "2: splash" << endl;
	cout << "3: exit game" << endl;
	
	switch (getValidNum(1, 3))
	{
	case 1: return PLAY;
	case 2: return INIT;
	case 3: return EXIT;
	}
}

void splash()
{
	system("cls");
	cout << endl;
	cout << endl;
	cout << "#  #  #   #  #   #  #####   #####  #  #  ####" << endl;
	cout << "#  #  #   #  ##  #    #       #    #  #  #   " << endl;
	cout << "####  #   #  # # #    #       #    ####  ### " << endl;
	cout << "#  #  #   #  #  ##    #       #    #  #  #   " << endl;
	cout << "#  #  #####  #   #    #       #    #  #  ####" << endl;
	cout << endl;
	cout << "#         #  #   #     #   #     ###   #   #  ####" << endl;
	cout << " #   #   #   #   #    # # # #    #  #  #   #  #  " << endl;
	cout << "  # # # #    #   #   #   #   #   ###   #   #   #" << endl;
	cout << "   #   #     #   #  #         #  #     #   #     #" << endl;
	cout << "             #####               #     #####  ####" << endl;
	cout << endl;
	cout << "Triston Vaskey, triston.vaskey@aie.edu.au, 10/28/2015" << endl;
	system("pause");
	system("cls");
}

void fareTheWell()
{
	system("cls");
	cout << "#####   #      #####  #####  #         # #####  #      #"    << endl;
	cout << "#      # #     #   #  #       #   #   #  #      #      #"    << endl;
	cout << "###   #   #    ###    ####     # # # #   ####   #      #"    << endl;
	cout << "#    #######   #  #   #         #    #   #      #      #"    << endl;
	cout << "#   #       #  #   #  #####              #####  #####  #####" << endl;
	system("pause");
}

int getNumValid(int min, int max)
{
	int select;

	do
	{
		cout << "Enter a valid number (" << min << "-" << max << "):";
		cin >> select;

		if (cin.fail() || select <min || select>max)
		{
			cin.clear();
			cin.ignore(80, '\n');
			cout << "invalid entry" << endl;
		}
		else break;
	} while (true);

	return select;
}
 

 