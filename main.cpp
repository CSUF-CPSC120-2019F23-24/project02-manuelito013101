
// Name:Jose Perez
// This program calculates and displays business expenses.

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
int main()
{
  std::string location;
  double days,hotel,meal;

//the location
std::cout << "what is the \"location\" you are traveling?\n ";
getline(std::cin,location);

//Number of days
std::cout << "how many \"days\" are you staying?\n ";
std::cin >> days;

//meal cost
std::cout << "what is the \"meal\" cost?\n " ;
std::cin >> meal;

//hotel cost
std::cout << "what is the \"hotel\" cost?\n";
std::cin >> hotel;

//Total of meal and hotel
double total=meal+hotel;
//
std::stringstream sshotel, ssmeal, sstotal;
sshotel << std::setprecision(2) << std::fixed << '$' << hotel;
ssmeal << std::setprecision(2)  << std::fixed << '$' << meal;
sstotal << std::setprecision(2) << std::fixed << '$' << total;


//display overview and total cost
std::cout<<std::setw(8) << "location"
         <<std::setw(8) << "days"
         <<std::setw(8) << "meal"
         <<std::setw(8) << "hotel"
         <<std::setw(8) << "total" << std::endl;

std::cout<<std::setw(8)  << location
         <<std::setw(8) << days
         <<std::setw(8) << ssmeal.str()
         <<std::setw(8) << sshotel.str()
         <<std::setw(8) << sstotal.str() << std::endl;
return 0;
}
