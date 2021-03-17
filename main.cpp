#include "Header.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <stdexcept>
#include <vector>
using namespace std;
int main() {
    int w, c, a, am, v;
    vector <int> appleWeight;
    vector <int> appleCondition;
    vector <int> tree;
    vector <int> basket;
    vector <int> picker;
    Apple ap;
    Tree tr;
    Basket bs;
    Picker pi;
    cout<<"Insert apple weight"<<endl;
    cin >> w;
    appleWeight.push_back(w);
    cout<<"Insert apple condition(1-good, 0-bad"<<endl;
    cin >> c;
    appleCondition.push_back(c);
    cout<<"Insert how many apple produces tree per day"<<endl;
    cin >> a;
    tree.push_back(a);
    cout<<"Insert how many apple fits to basket"<<endl;
    cin >> am;
    basket.push_back(am);
    cout<<"Insert how many picker picks apple per day"<<endl;
    cin >> v;
    picker.push_back(v);
   try
    {
        ap.setWeight(appleWeight[0]);
    }
    catch (invalid_argument &error)
    {
        cerr << error.what() << endl;
    }
    try
    {
        ap.setCondition(appleCondition[0]);
    }
    catch (invalid_argument &error)
    {
        cerr << error.what() << endl;
    }
    try
    {
        tr.setApple(tree[0]);
    }
    catch (invalid_argument &error)
    {
        cerr << error.what() << endl;
    }
    
    return 0;
}
