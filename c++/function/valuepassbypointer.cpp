#include<iostream>
#include<string>

using namespace std;

void printzstring(const string* name){
    cout << *name << endl;
}

int main(){
    string name = "Nilu";

    printzstring(&name);
    return 0;
}