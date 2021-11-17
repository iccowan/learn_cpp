#include <iostream>

int main() {
    // Get the inputs
    std::cout << "What is your name (the tutor)? ";
    std::string tutorName;
    std::cin >> tutorName;

    std::cout << "How long did you tutor for? ";
    float tutorTimeNum;
    std::cin >> tutorTimeNum;

    std::cout << "What is your tutoring rate? $";
    float tutorRateNum;
    std::cin >> tutorRateNum;

    float taxRate = 11.2 / 100;
    float subtotal = tutorTimeNum * tutorRateNum;
    float totalTax = taxRate * subtotal;
    float total = subtotal + totalTax;
    
    std::cout << std::endl;
    std::cout << "Receipt:" << std::endl;
    std::cout << "Tutor: " << tutorName << std::endl;
    std::cout << "Tutoring ($" << tutorRateNum << "/hr): $" << subtotal << std::endl;
    std::cout << "Tax: $" << totalTax << std::endl;
    std::cout << "TOTAL: $" << total << std::endl;
    std::cout << "Thank you for chosing Roger's Tax Inc!" << std::endl;
    std::cout << "100 Not A Partnership Ln. Danville, KY 40422" << std::endl;
}
