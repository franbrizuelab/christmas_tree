#include <iostream>
#include <string>
using namespace std;
int fin;
int main() {
string input {};
string quit {'q'};
do {
        cout<<"Hello, welcome to the letter piramyd maker: "<<endl;
        cout<<"Please insert a bunch of characters to make a pyramid of: ";
        getline(cin,input);
        string output{};
        string palabra {"chispas"};
        string space {" "};
        string mirror {};

                for (size_t letter{}; letter<=input.length(); ++letter) {
                    double space_times = ((input.length()+mirror.length())-(2*letter));
                    for (int i{}; i<=space_times; i++){
                        cout<<space;
                    }
                    cout<<input.substr(0,letter);
                    char xd = input[letter];
                    mirror.insert(0,1,xd);
                    cout<<mirror;
                    cout<<endl;
                }
        cout<<"\n\n";
    }

while (input!=quit);
        input.erase(0,input.size());


cout<<"goodbye!";
 cin>>fin;
return 0;    
    
}

