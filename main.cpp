#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int remove(const string filename, const string word){
    string fileconts;
    ifstream fread;
    fread.open(filename);
    fread>>fileconts;
    fread.close();
    int wordlen = word.size();
    int counter = 0;
    while (fileconts.find(word)>0 and fileconts.find(word)<fileconts.size()){
        fileconts.erase(fileconts.find(word),wordlen);
        counter++;
    }
    ofstream fwrite;
    fwrite.open(filename);
    fwrite<<fileconts;
    return counter;
}

int main() {
    cout << remove("test.txt","test") << endl;
    return 0;
}
