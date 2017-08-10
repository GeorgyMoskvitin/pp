#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int count = 0;
    string file_name;
    cout << "enter file name: ";
    getline(cin,file_name);

    ifstream fin;
    fin.open(file_name.c_str());

    if(!fin.is_open()){
        cout <<  "Not found name file" << endl;
    }
    else{
        string str;
        while(!fin.eof()){
            getline(fin,str);
            cout << str << endl;
            if(str != "")
                count++;
        }
        cout << "number of strings : " << count << endl;
    }
    fin.close();


    return 0;
}

