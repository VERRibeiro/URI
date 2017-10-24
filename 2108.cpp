#include <bits/stdc++.h>
#define TAM 20
using namespace std;

int main()
{
    int maiortam,palavratam,i;
    vector <int> qtde;
    string palavra, aux,maior,frase;
    stringstream ss;
    maiortam = -1;
    getline(cin,frase);
    while(frase!="0")
    {
        ss<<frase;
        while(ss>>palavra)
        {
            palavratam = palavra.size();
            qtde.push_back(palavratam);
            if(palavratam>=maiortam)
            {
                maiortam = palavratam;
                maior = palavra;
            }
        }
        ss.clear();
        palavratam = qtde.size();
        for(i = 0; i < palavratam - 1; i++)
        {
            cout<<qtde[i]<<'-';
        }
        cout<<qtde[i]<<endl;
        qtde.clear();
        getline(cin,frase);
    }
    printf("\n");
    cout<<"The biggest word: "<<maior<<endl;
}
