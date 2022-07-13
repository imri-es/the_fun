#include <iostream>

using namespace std;
struct Order {};
struct Supplier {};
struct Product {};
struct Customer {};

class SalesMenu_NewPurchase{
public:
    void addNewPurchaseDetails(Order odr, Supplier spl, Product prd, Customer csr){}
};

class SalesMenu_ViewOrders{
public:
    void openData(Order odr){};
    void displayData(Order odr){};
    void updateOrder(Order odr){
        //function of order updating
    };
    void sortOrders(Order odr){
        //sorting algorithms used there
    };
    void searchOrders(Order odr){
        //searching algorithms used there
    };
};

class AdminMenu_ReportGen{
public:
    string report;
    void generateReport(string report){};
    void displayGeneratedData(string report){};
    void sortGeneratedReport(string report){};
};




class MenuItems{
    SalesMenu_NewPurchase SMN;
    SalesMenu_ViewOrders SMV;
    AdminMenu_ReportGen AMR;
    Order odr;
    Supplier spl;
    Product prd;
    Customer csr;
public:
    void SalesPage_NewPurchase(){
        SMN.addNewPurchaseDetails(odr, spl, prd, csr);
    }
    void SalesPage_ViewOrders(){
        SMV.openData(odr);
        SMV.displayData( odr);
        SMV.updateOrder( odr);
        SMV.sortOrders( odr);
        SMV.searchOrders( odr);
    }
    void AdminPage_ReportGen(){
        string report;
        AMR.generateReport(report);
        AMR.displayGeneratedData(report);
        AMR.sortGeneratedReport(report);
    };

};


class SalesPage{
    MenuItems MI;
public:
    void SalesMenu(){
        MI.SalesPage_NewPurchase();
        MI.SalesPage_ViewOrders();
    }
};

class AdminPage{
    MenuItems MI;
public:
    void AdminMenu(){
        MI.SalesPage_NewPurchase();
        MI.SalesPage_ViewOrders();
        MI.AdminPage_ReportGen();
    }
};

class LoginPage{
    SalesPage SP;
    AdminPage AP;
public:
    void getLogin(string password, string login){}
    int checkLogin(string, string){
        int checkResult;
        return checkResult;
    }
    void LoginMenu(){
        string login, password;
        getLogin(login, password);
        int accountType = checkLogin(login, password);
        switch (accountType) {
            case 1: SP.SalesMenu();
                break;
            case 2: AP.AdminMenu();
                break;
        }
    }
};

int main() {
    LoginPage LP;
    LP.LoginMenu();
}
