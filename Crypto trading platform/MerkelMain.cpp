#include<iostream>
#include "MerkelMain.h"


MerkelMain::MerkelMain() {

}

void MerkelMain::init() {

}

void MerkelMain::prinMenu() {

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

void MerkelMain::printHelp() {
	std::cout << "Help - your aim is to make money. Analyse the market and make bid and offers." << std::endl;
}

void MerkelMain::printMarketStats() {
	std::cout << "Market looks good." << std::endl;
}

void MerkelMain::enterOffer() {
	std::cout << "Make a offer - enter the amount." << std::endl;
}

void MerkelMain::enterBid() {
	std::cout << "Make a bid - enter the amount." << std::endl;
}

void MerkelMain::printWallet() {
	std::cout << "Your wallet is empty. " << std::endl;
}

void MerkelMain::gotoNextTimeFrame() {
	std::cout << "Going to next time frame." << std::endl;
}

int MerkelMain::getUserOption() {

	int userOption;
	std::cin >> userOption;
	std::cout << "You chose: " << userOption << std::endl;
	return userOption;
}

void MerkelMain::processUserOption(int userOption) {

	switch (userOption)
	{
	case 1:// 1 print help
		printHelp();
		break;
	case 2:// 2 print exchange stats
		printMarketStats();
		break;
	case 3:// 3 make an offer
		enterOffer();
		break;
	case 4:// 4 make a bid
		enterBid();
		break;
	case 5:// 5 print wallet 
		printWallet();
		break;
	case 6:// 6 continue
		gotoNextTimeFrame();
		break;
	default://bad input
		std::cout << "Invald choise. Choose 1-6" << std::endl;
	}
}