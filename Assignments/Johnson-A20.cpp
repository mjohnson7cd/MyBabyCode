#include <iostream>
#include <string>

using namespace std;

class Invoice
{
private:
    string partNumber;
    string description;
    int quantity;
    double price;

public:
    //Constructors 
    Invoice(){
        setAmountPurchased(0);
        setPrice(0);
        setPartNumber("default");
        setDescription("default");
    }

    Invoice(string mainPartNumber, string mainDescription, int mainQuantity, double mainPrice){
        setPartNumber(mainPartNumber);
        setDescription(mainDescription);
        setAmountPurchased(mainQuantity);
        setPrice(mainPrice);
    }

    // setter functions
    void setPartNumber(string pn){
        if(pn != " "){// Unnecessary if cin is used. Would be needed for getline. (cin skipps whitespaces)
            partNumber = pn;
        }else{
            partNumber = "default";
            cout << "Invalid value entered for part number." << endl << "Value has been set to " << partNumber << endl;
        }
    }

    void setDescription(string d){
        if(d != " "){// Unnecessary if cin is used. Would be needed for getline. (cin skipps whitespaces)
            description = d;// use getline for multi-word descriptions. 
        }else{
            description = "default";
            cout << "Invalid value entered for description." << endl << "Value has been set to " << description << endl;
        }
    }

    void setAmountPurchased(int q){
        if (q>0){
            quantity = q;
        }else if(q<0){
            quantity = 0;
            cout << "Invalid amount entered for amount purchased." << endl << "Value has been set to " << quantity << endl;
        }
    }

    void setPrice(double p){
        if (p>0){
            price = p;
        }else if(p<0){
            price = 0;
            cout << "Invalid amount entered for price." << endl << "Value has been set to " << price << endl;
        }
    }

    // getter functions
    string getPartNumber(){
        return partNumber;
    }

    string getDescription(){
        return description;
    }

    int getAmountPurchased(){
        return quantity;
    }

    double getPrice(){
        return price;
    }

    double getInvoiceAmount(){
        double invAmount=0;
        invAmount = price * quantity;
        return invAmount;
    }

};
// I know you said not to modify the main function, but it contained several syntax errors.
int main(){// had missing return type
  Invoice inv1;
  Invoice inv2("pd495", "Purple Widget", 15, .43);

  string stemp;
  int count;
  double price;

  cout<<"Enter a part number."<<endl;
  cin>>stemp;
  inv1.setPartNumber(stemp);

  cout<<"Enter a description."<<endl;
  cin>>stemp;
  inv1.setDescription(stemp);

  cout<<"Enter the amount purchased."<<endl;
  cin>>count;
  inv1.setAmountPurchased(count);

  cout<<"Enter the price."<<endl;
  cin>>price;
  inv1.setPrice(price);

  cout<<"****First Invoice Record****"<<endl;// had missing quotations 
  cout<<inv1.getPartNumber()<<endl;
  cout<<inv1.getDescription()<<endl;
  cout<<inv1.getAmountPurchased()<<endl;
  cout<<inv1.getPrice()<<endl;
  cout<<"*******"<<endl<<endl;// had missing quotations 

  cout<<"****Second Invoice Record****"<<endl;// had missing quotations 
  cout<<inv2.getPartNumber()<<endl;
  cout<<inv2.getDescription()<<endl;
  cout<<inv2.getAmountPurchased()<<endl;
  cout<<inv2.getPrice()<<endl;
  cout<<"*******"<<endl<<endl;// had missing quotations 
  
  cout<<endl;
  cout<<inv1.getInvoiceAmount()<<endl;
  cout<<inv2.getInvoiceAmount()<<endl;

  return 0;
}




