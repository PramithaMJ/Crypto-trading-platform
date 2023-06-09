// Crypto trading platform.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>
#include<vector>

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

void printHelp() {
	std::cout << "Help - your aim is to make money. Analyse the market and make bid and offers." << std::endl;
}

void printMarketStats() {
	std::cout << "Market looks good." << std::endl;
}

void enterOffer() {
	std::cout << "Make a offer - enter the amount." << std::endl;
}

void enterBid() {
	std::cout << "Make a bid - enter the amount." << std::endl;
}

void printWallet() {
	std::cout << "Your wallet is empty. " << std::endl;
}

void gotoNextTimeFrame() {
	std::cout << "Going to next time frame." << std::endl;
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

int main()
{
	enum class OrderBookType { bid, ask };

	//double price = 5319.450228;
	//double amount = 0.00020075;
	//std::string timestamp{ "2020/03/17 17:01:24.884492" };
	//std::string product{ "BCT/USDT" };
	//OrderBookType orderType = OrderBookType::ask;

	std::vector<double> prices;
	std::vector<double> amounts;
	std::vector<std::string> timestamps;
	std::vector<std::string> products;
	std::vector<OrderBookType> orderTypes;

	prices.push_back(500.01);
	amounts.push_back(0.001);
	timestamps.push_back("2020/03/17 17:01:24.884492");
	products.push_back("BTC/USDT");
	orderTypes.push_back(OrderBookType::bid);

	prices.push_back(10.01);
	amounts.push_back(0.001);
	timestamps.push_back("2020/03/17 17:01:24.884492");
	products.push_back("BTC/USDT");
	orderTypes.push_back(OrderBookType::bid);

	std::cout << "prices: " << prices[0] << std::endl;
	std::cout << "prices: " << prices[1] << std::endl;




	//while (true) //when type ctrl + c then exists the console (stops)
	//{
	//	prinMenu();
	//	int userOption = getUserOption();
	//	processUserOption(userOption);
	//}

	return 0;
}

