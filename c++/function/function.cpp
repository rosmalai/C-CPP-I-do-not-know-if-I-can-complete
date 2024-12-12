#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void sayHello(){// here we have declared a functio 
    cout << "Hello fuck world" << endl;


}; 

void goodBye(string name, int age){ //with aparameters
    cout << "goodbye " << age << " years old " << name
<< endl;
};


int main(){

    sayHello(); //call th function
    goodBye("nilu", 20); //argument
    //user input
    string name;
    int age;

    cout << "Enter the name of the user" << endl;
    getline(cin, name);
    cout << "Enter the age of the user" << endl;
    cin >> age;
    goodBye(name, age);

    return 0;
}