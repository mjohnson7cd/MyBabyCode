#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Invoice
{
private:
    // This is blasphemy
public:
    // BLASPHEMY
    string partNumber;
    string description;
    int quantity;
    double price;

    double getInvoiceAmount(){
        double invAmount=0;
        invAmount = price * quantity;
        return invAmount;
    }

};

int main(){
    Invoice myInvoice;
    double invoiceAmount=0;

    myInvoice.partNumber = "123456789";
    myInvoice.description = "Hammer";
    myInvoice.quantity = 2;
    myInvoice.price = 9.99;

    invoiceAmount = myInvoice.getInvoiceAmount();


    cout << fixed << setprecision(2) << "Invoice amount: $" << invoiceAmount << endl;

    return 0;
}



