// Ex composition ( has a )

#include <iostream>
using namespace std;

class Bankacc{
private:
      string id;
      double balance;
public:
      Bankacc(string id,double balance);
      string getId();
      double getBalance();
};

Bankacc::Bankacc(string id,double balance)
      :id(id),balance(balance){}
string Bankacc::getId(){
      return id;
}
double Bankacc::getBalance(){
      return balance;
}

class Bank{
private:
      Bankacc **acc;
      int size;
public:
      Bank();
      void addAccount(Bankacc *account);
      void showAccounts();
};

Bank::Bank(){
      this->size = 5;
      acc = new Bankacc*[size];
      for (int i = 0; i < size; i++) {
            acc[i] = nullptr;
      }

}

void Bank::addAccount(Bankacc *account){
      for (int i = 0; i < size; i++){
        if (acc[i] == nullptr) {
            acc[i] = account;
            return;
        }
      }
}

void Bank::showAccounts(){
      for(int i=0; i<size; i++){
            if(acc[i] != nullptr){ // ตรวจสอบ pointer ว่าไม่เป็น nullptr
                  cout 
                  << "id " << acc[i]->getId() 
                  << " have " << acc[i]->getBalance() 
                  << endl; // เรียกใช้ method ของ class Bankacc ผ่าน pointer
            }
      }
}

int main(){
      Bank myBank;
      Bankacc *scb = new Bankacc("6145123" , 123.002);
      Bankacc *ktb = new Bankacc("6145156" , 456.030);
      Bankacc *kbb = new Bankacc("6145189" , 789.50);
      myBank.addAccount(scb);
      myBank.addAccount(ktb);
      myBank.addAccount(kbb);
      
      myBank.showAccounts();
}