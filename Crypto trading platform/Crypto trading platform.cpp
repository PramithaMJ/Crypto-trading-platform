// Crypto trading platform.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>

void prinMenu() {
	// 1 print help
	std::cout << "1: Print help " << std::endl;
	// 2 print exchange stats
	std::cout << "2: Print exchange stats " << std::endl;
	// 3 make an offer
	std::cout << "3: Make an offer " << std::endl;
	// 4 make a bid
	std::cout << "4: Make a bid " << std::endl;
	// 5 print wallet 
	std::cout << "5: Print wallet " << std::endl;
	// 6 continue
	std::cout << "6: Continue " << std::endl;

	std::cout << "==============" << std::endl;
	std::cout << "Type in 1-6" << std::endl;
}

int getUserOption() {

	int userOption;
	std::cin >> userOption;
	std::cout << "You chose: " << userOption << std::endl;
	return userOption;
}

void processUserOption(int userOption) {
	
	switch (userOption) 
	{
		case 1:// 1 print help
			std::cout << "Help - your aim is to make money. Analyse the market and make bid and offers." << std::endl;
			break;
		case 2:// 2 print exchange stats
			std::cout << "Market looks good." << std::endl;
			break;
		case 3:// 3 make an offer
			std::cout << "Make a offer - enter the amount." << std::endl;
			break;
		case 4:// 4 make a bid
			std::cout << "Make a bid - enter the amount." << std::endl;
			break;
		case 5:// 5 print wallet 
			std::cout << "Your wallet is empty. " << std::endl;
			break;
		case 6:// 6 continue
			std::cout << "Going to next time frame." << std::endl;
			break;
		default://bad input
			std::cout << "Invald choise. Choose 1-6" << std::endl;
	}
}

int main()
{
	while (true) //when type ctrl + c then exists the console (stops)
	{
		prinMenu();
		int userOption = getUserOption();
		processUserOption(userOption);
	}

	return 0;
}

