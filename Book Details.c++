#include <iostream>
class Book{
private:
    int BookID;
    int Pages;
    double Price;
public:
    //Book(int Id,int pg,double pr): BookID(Id),Pages(pg),Price(pr){}
    void setBookID(int ID){
        BookID = ID;
    }
    void setPages(int pg){
        Pages = pg;
        
    }
    void setPrice(int pr){
        Price = pr;
        
    }
    
    int getBookId(){
        return BookID;
        
    }
    int getPages(){
        return Pages;
        
    }
    double getPrice(){
        return Price;
        
    }
    
    void showbookdetails(){
        std::cout<<"BookID :"<<BookID<<std::endl;
        std::cout<<"Pages :"<<Pages<<std::endl;
        std::cout<<"Price :"<<Price<<std::endl;
    }
};

int main(){
    Book*bobj1 = new Book();
    Book*bobj2 = new Book();
    
    bobj1->setBookID(1);
    bobj1->setPages(200);
    bobj1->setPrice(500);
    
    bobj2->setBookID(2);
    bobj2->setPages(300);
    bobj2->setPrice(700);
    
    if(bobj1->getPrice() > bobj2->getPrice()){
        std::cout<<"Book 1 is costlier."<<bobj1->getPrice()<<std::endl;
    }
    else{
        std::cout<<"Book 2 is costlier."<<bobj2->getPrice()<<std::endl;
    }
    return 0;
}
