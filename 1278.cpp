#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    int casos,maior,espaco,tam,flag = 0;
    vector <string> palavras;
    string aux,palavra;
    stringstream ss;

    cin>>casos;
    while(casos!=0)
    {
        getchar();
        if(flag==1)
            printf("\n");
        maior = -1;
        for(int i = 0 ; i< casos ;i++)
        {
            getline(cin,palavra);
            ss<<palavra;
            palavra.clear();
            while(ss>>aux)
            {
                palavra+=aux;
                palavra+=" ";
            }
            palavra.erase(palavra.end()-1);
            tam = palavra.size();
            ss.clear();
            if(tam>maior)
                maior = tam;
            palavras.push_back(palavra);
        }
        for(int i = 0; i < casos; i++)
        {
            espaco = maior - palavras[i].size();
            while(espaco)
            {
                printf(" ");
                espaco--;
            }
            cout<<palavras[i]<<endl;
        }
        flag = 1;
        palavras.clear();
        cin>>casos;
    }
}
