// Crypto trading platform.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>

int main()
{
	while (true) { //when type ctrl + c then exists the console (stops)

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

		int userOpinon;
		std::cin >> userOpinon;
		std::cout << "You chose: " << userOpinon <<std::endl;

		if (userOpinon == 0) { //bad input
			std::cout << "Invald choise. Choose 1-6" << std::endl;
		}
		if (userOpinon == 1) { // 1 print help
			std::cout << "Help - your aim is to make money. Analyse the market and make bid and offers." << std::endl;
		}
		if (userOpinon == 2) { // 2 print exchange stats
			std::cout << "Market looks good." << std::endl;
		}
		if (userOpinon == 3) { // 3 make an offer
			std::cout << "Make a offer - enter the amount." << std::endl;
		}
		if (userOpinon == 4) { // 4 make a bid
			std::cout << "Make a bid - enter the amount." << std::endl;
		}
		if (userOpinon == 5) { // 5 print wallet 
			std::cout << "Your wallet is empty. " << std::endl;
		}
		if (userOpinon == 6) { // 6 continue
			std::cout << "Going to next time frame." << std::endl;
		}

	}

	return 0;
}

