#include<iostream>

using namespace std;

int main(){
    int n,len;
    string palabras[100],word;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>palabras[i];
        word = palabras[i];

        if (word.size() > 10){
            len = word.size();
            cout<<"\n"<<word[0]<<len - 2<<word[len-1];
        }

        else{
            cout<<"\n"<<word;
        }
    }
}