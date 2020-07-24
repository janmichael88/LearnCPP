#include <iostream>
#include <string>

/*

struct AdvertisingMetrics{
	int adsShown;
	double percentAdsClicked;
	double avgEarnedPerClick;
};

//print value and calc from user defined input
void printDetails(AdvertisingMetrics data){
	std::cout << " Number of ads Shown " << data.adsShown << "\n";
	std::cout << " Percent of ads clicked " << data.percentAdsClicked << "\n";
	std::cout << " Earning Per Click: " << data.avgEarnedPerClick << "\n";

	std::cout << " Total Earnings is: " << data.adsShown*data.percentAdsClicked*data.avgEarnedPerClick << "\n";
}

//function to get advertisgin details

AdvertisingMetrics getMetrics(){
	AdvertisingMetrics example;
	std::cout << " How many ads were show? ";
	std::cin >> example.adsShown;
	std::cout << " What percent of ads were clicked?";
	std::cin >> example.percentAdsClicked;
	std::cout << " Whats is the average earned per click?";
	std::cin >> example.avgEarnedPerClick;
	return example;
}

int main(){
	AdvertisingMetrics ad = getMetrics();
	printDetails(ad);
}

*/

struct Fraction{
	int num;
	int denom;
};

Fraction getNumbers(){
	Fraction example;
	std::cout << " Enter a numerator: ";
	std::cin >> example.num;
	std::cout << " Enter a denominator: ";
	std::cin >> example.denom;
	return example;
}

void multiply(Fraction f1, Fraction f2){
	std::cout << static_cast<double>(f1.num*f2.num) / (f1.denom*f2.denom) << "\n";
}

int main(){
	std:: cout << " Creating first fraction....." << "\n";
	Fraction f1 = getNumbers();
	std::cout << " Creating second fraction...." << "\n";
	Fraction f2 = getNumbers();

	multiply(f1,f2);
}




