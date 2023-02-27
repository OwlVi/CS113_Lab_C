#include <iostream>
#include <sstream>
using namespace std;

// define class
class Book
{
private: // data hiding (Encapsulation)
    // attribute (data member)
    string title;
    int page;
    int readPage;
    
public:
// metod (data func)
    // Constuctor (ผู้ก่อสร้าง)
    Book(string title ,int page){ // ตัวที่ไม่เหมือนกันรับเป็น parameter
        this->title = title;
        this->page  = page;
        readPage    = 0;
    }
    // Getter
    string getTitle(){
        return title;
    }

    int getPage(){
        return page;
    }

    int getReadPage(){
        return readPage;
    }

    // Setter
    void setTitle(string name){
        this->title = name;
    }

    void read(int nPage){
        if (page > 0){
            readPage += nPage;
        }

        if (readPage >= page){
            readPage = page;
        }
    }


    string toString(){
        stringstream output;
        output  << "Title : " << title << endl
                << "Page : " << readPage << "/" << page << endl;
        return output.str();
    }


};

int main ()
{   //declare
/*    string name;
    int allPage;
    cin >> name;
    cin >> allPage;
*/
    Book book("Programing",40);
    Book pythonBook("Introduction to Python",268);
    Book* books[10];
    books[0] = &book;
    books[1] = &pythonBook;
    books[2] = new Book("vtwi",20);
    books[3] = new Book("git basic",1);

    book.read(1);
    pythonBook.read(200);
    book.read(50);
    pythonBook.read(200);
    for (int i = 0; i<4; i++){
        cout << books[i]->getTitle() << " | " 
             << books[i]->getPage() << " | " 
             << books[i]->getReadPage() << endl     ;
    }
    

}