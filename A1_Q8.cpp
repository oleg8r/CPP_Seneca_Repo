/*============================================================
|
| File Name: Q8.cpp
| Purpose: To display all credit card information in the printout.
|   (OOP Assignment #1 Q-08).
| Documentation: This program uses a class named ClPayment that
|   contains a member variable of type float that stores the amount
|   of the payment and appropriate accessor and mutator methods.
|
|   A member function named paymentDetails outputs an English sentence
|   that describes the amount of the payment.
|
|   A class named CashPayment is derived from ClPayment. This class
|   redefines the paymentDetails function to indicate that the payment
|   is in cash. Appropriate constructor is included.
|
|   A class named CreditCardPayment is derived from ClPayment. This
|   class contains member variables for the name on the card,
|   expiration date, and credit card number. Appropriate constructor
|   is included.
|
|   Finally, the paymentDetails function is redefined
|   to include all credit card information in the printout.
|
|   A main method creates at least two CashPayment and two
|   CreditCardPayment objects with different values and calls
|   paymentDetails for each.
| 
| Revision History:
| Date               Name                  Revision
| --------------     -----------------     ---------------------
| 2020-10-30         Oleg Savelev          created
|
|============================================================*/

// Pre-processor Directives:
#include <iostream>
#include <iomanip>

class ClPayment // This class contains a member variable of type float that stores the amount of the payment and appropriate accessor and mutator methods.
{
    protected:
        float paymentAmt;   // A member variable of type float that stores the amount of the payment.
        ClPayment()
        {
            paymentAmt = 0;
        }
        ClPayment(float amountPar)
        {
            paymentAmt = amountPar;
        }
        void paymentDetails()   // This member function outputs the amount of the payment.
        {
        }
};

class CashPayment : ClPayment   // This sub-class redefines the paymentDetails function to indicate that the payment is in cash
{
    public:
        CashPayment() : ClPayment()
        {
        }
        CashPayment(float amountPar) : ClPayment(amountPar)
        {
        }
        void paymentDetails()   // This function is redefined to include all credit card information in the printout
        {
            std::cout << "Payment in cash: " << paymentAmt << "$";
        }
};

class CreditCardPayment:ClPayment   // This sub-class contains member variables for the name on the card, expiration date, and credit card number
{
    private:
        std::string clientName;
        std::string expirDate;
        std::string cardNum;
    public:
        CreditCardPayment():ClPayment()
        {
            clientName = "  ";
            expirDate = "  ";
            cardNum = "  ";
        }
        CreditCardPayment(std::string clientName, std::string cardNum, std::string expirDate, float amountPar):ClPayment(amountPar)
        {
            this -> clientName = clientName;
            this -> expirDate = expirDate;
            this -> cardNum = cardNum;
        }
        void paymentDetails()   // This function is redefined to include all credit card information in the printout
        {
            std::cout << "Client name: " << clientName << std::endl;
            std::cout << "Card number: " << cardNum << std::endl;
            std::cout << "Date of expiry: " << expirDate << std::endl;
            std::cout << "Credit card payment amount: " << paymentAmt << "$" << std::endl;
        }
};

int main()    // Don't return anything if void main() is specified.
{   // This main method creates two CashPayment and two CreditCardPayment objects with different values and calls paymentDetails for each.

    printf("\e[1;1H\e[2J");     // It clears the screen. No special library is required.
    // write(0,"\e[1;1H\e[2J",12); // It can also clear the creen. No special library is required.
    
    std::cout << "-----------------Payment Display--------------------\n"<< std::endl; // The program starts below the dashed line

    std::cout << "Client No 1" << std::endl;   // Client No 1
    CashPayment cp_Obj1(655);
    cp_Obj1.paymentDetails();
    CreditCardPayment ccp_Obj1 ("John Doe", "1234567890", "20.10.2021", 1000.25);
    std::cout << std::endl;
    ccp_Obj1.paymentDetails();

    std::cout << std::endl;

    std::cout << "Client No 2" << std::endl;   // Client No 2
    CashPayment cp_Obj2(433);
    cp_Obj2.paymentDetails();
    std::cout << std::endl;
    CreditCardPayment ccp_Obj2 ("Peter Green", "0987654321", "01.01.2022", 2520.55);
    ccp_Obj2.paymentDetails();

    std::cout << std::endl; // Brake a line
    std::cout << "--------------End of Payment Display-----------------\n"<< std::endl; // The program ends above the dashed line.
    
    return 0;   // It terminates the program. Don't return anything if void main() is specified.
}
