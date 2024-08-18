#include <iostream>
#include <string>
#include <cmath>

using namespace std;
class CeasarCypher{
    private:
    int rot;
    string phrase;
    
    public:
    void setrot(int movement);
    int getrot();
    void setphrase(string sentence);
    string getphrase();
    char cypherlowerCase(char c,int rot);
    char cypherupperCase(char c, int rot);
    void ceasarCypherfunc(int rot);
    void ceasarCypher(string &phrase,int rot);
};



    
int main()
{
   
   
    int rot;
   CeasarCypher cipher;
 string words;
 char choice;

 do{
 cout<<"\a\n****************Ceasar Cipher*******************"<<endl;

cout<<"\n\nPick a phrase to Cipher:";
getline( cin,words);

cout<<"\nChoose a ROT: ";
cin>>rot;
cin.ignore();

cipher.setphrase(words);
cipher.ceasarCypherfunc(rot);


cout<<"\nEncrypted Value: "<<cipher.getphrase()<<endl;
cout<<"\nDo you want to run again? (y/n): ";
cin>>choice;
cin.ignore();
}while (choice=='y'||choice=='Y');

    return 0;
}

void CeasarCypher::setrot(int movement){
    rot=movement;
}

int CeasarCypher::getrot(){
    return rot;
}

 void CeasarCypher::setphrase(string sentence){
     phrase=sentence;
 }

string CeasarCypher:: getphrase(){
    return phrase;
}

char CeasarCypher::cypherlowerCase(char c,int rot){
    return 'a'+((c-'a'+rot)%26);
}

char CeasarCypher:: cypherupperCase(char c, int rot){
    return 'A'+((c-'A'+rot)%26);
}

void CeasarCypher::ceasarCypherfunc(int rot){
    for(int i=0; i<phrase.length(); i++){
        if(phrase[i]>='a'&& phrase[i]<='z'){
            phrase[i]=cypherlowerCase(phrase[i], rot);
            }else if(phrase[i]>='A' && phrase[i]<='Z'){
                phrase[i]=cypherupperCase(phrase[i], rot);
            }
        }
    }
