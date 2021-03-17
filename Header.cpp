#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>
#include "Header.hpp"
using namespace std;
Apple::Apple(int weight, int condition){
    //Constructor
    this->weight=weight;
    this->condition=condition;
}
    //Destructor
    Apple::~Apple(){
        cout<<"Destructor called from class Apple."<<endl;
    }
    //Setters
    void Apple::setWeight(int w){
        if(w<=0)
            throw invalid_argument("Invalid weight!");
        else    weight=y;
    }
    void Apple::setCondition(int c){
        if(c!=0 || c!=1)
            throw invalid_argument("Invalid condition!");
        else    condition=c;
    }
    //Getters
    int Apple::getWeight(){
        return weight;
    }
    int Apple::getCondition(){
        return condition;
    }

//Constructor
Tree::Tree(int apple){
    this->apple=apple;
}
    //Destructor
Tree::~Tree(){
    cout<<"Destructor called from class Tree."<<endl;
}
    //Setters
    void Tree::setApple(int a){
        if(a<0)
            throw invalid_argument("Invalid produces per day!");
        else    apple=a;
}
    //Getters
    int Tree::getApple(){
        return apple;
    //Methods
        void Tree::growFruit(){
            
            
        }
        void Tree:removeFruit(){
            
            
        }
}

    //Constructor
    Basket::Basket(int amount){
        this->amount=amount;
}
    //Destructor
    Basket::~Basket(){
        cout<<"Destructor called from class Basket."<<endl;
}
    //Setter
    void Basket::setAmount(int am){
        if(am<0)
            throw invalid_argument("Invalid amount!");
        else    amount=am;
}
    //Getter
    int Basket::getAmount(){
        return amount;
}
    //Methods
    void Basket::addFruit(){
    
}
    void Basket::emptyFruit(){

}
        //Constructor
        Picker::Picker(int value){
            this->value=value;
    }
        //Destructor
        Picker::~Picker(){
            cout<<"Destructor called from class Picker."<<endl;
    }
        //Setter
        void Picker::setValue(int v){
            if(v<0)
                throw invalid_argument("Invalid value!");
            else    value=v;
    }
        //Getter
        int Picker::getValue(){
            return value;
    }
        //Methods
        void collectFruit(){
            
        }
#endif /* Header_h */
