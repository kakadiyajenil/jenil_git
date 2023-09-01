#include<iostream>

using namespace std;

class BOOK
{
    int book_no;
    char book_title[20];
    float price;

    float total_cost(int n)
    {
        //float TOTAL_COST(int N) {
      return n * price;
    }

    public :

    BOOK()
    {
      cout << "Enter Book Number: ";
      cin >> book_no;
      cout << "Enter Book Title: ";
      cin.ignore();
      cin.getline(book_title, 21);
      cout << "Enter Price per Copy: ";
      cin >> price;

    }

    void PURCHASE()
    {
       int numCopies;
      cout << "Enter the number of copies to be purchased: ";
      cin >> numCopies;
      float totalCost =total_cost(numCopies);
      cout << "\nTotal cost to be paid: $" << totalCost ;
    }

};

int main()
{
    BOOK b;
   b.PURCHASE();
}