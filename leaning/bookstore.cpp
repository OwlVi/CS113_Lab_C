#include <iostream>
using namespace std;

class Book
{
private:
    string name;
    float price;

public:
    Book(string name, float price);
    string getName();
    float getPrice();
};

class Bookstore
{
private:
    string name;
    int size;
    Book **books;

public:
    Bookstore(string name, int size);
    ~Bookstore();
    string getName();
    int getSize();
    void addBook(Book book);
    void showBooks();
};

Book::Book(string name, float price)
    : name(name), price(price)
{
}

string Book::getName()
{
    return name;
}

float Book::getPrice()
{
    return price;
}

Bookstore::Bookstore(string name, int size)
    : name(name), size(size)
{
    books = new Book*[size]; // จองพื้นที่หน่วยความจำสำหรับเก็บข้อมูลหนังสือ
    for (int i = 0; i < size; i++) {
        books[i] = nullptr;
    }
}

Bookstore::~Bookstore()
{
    for (int i = 0; i < size; i++) {
        delete books[i]; // ลบหนังสือทุกเล่ม
    }
    delete[] books; // คืนค่าหน่วยความจำ
}


void Bookstore::addBook(Book book)
{
    if (size > 0 && books[size-1] != nullptr) // ตรวจสอบว่าร้านเต็มหรือยัง
    {
        cout << "The store is full" << endl;
        return;
    }
    
    for (int i = 0; i < size; i++) {
        if (books[i] == nullptr) {
            books[i] = new Book(book); // สร้างเล่มหนังสือใหม่
            break;
        }
    }
}



void Bookstore::showBooks()
{
    for (int i = 0; i < size; i++)
    {
        if (books[i] != nullptr) {
            cout << books[i]->getName() << " " << books[i]->getPrice() << endl;
        }
    }
}



int main()
{
    Book python("python", 100);
    Book Cpp("C++", 200);
    Book C("C", 300);

    Bookstore store("My Bookstore", 3);
    store.addBook(python);
    store.addBook(Cpp);
    store.addBook(C);
    store.showBooks();

    return 0;
}
