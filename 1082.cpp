#include <bits/stdc++.h>

using namespace std;


int main()
{
    bool visitados[50];
    int grafo[50][50] = {};
    int vertices, arestas,casos,topo,adja,flag,j,master,cont;
    char v1, v2;
    vector <char> print;
    stack <int> pilha;
    cin>>casos;
    for(int i = 1 ; i <= casos ; i++)
    {
        cont = 0;
        cin>>vertices>>arestas;
        while(arestas--)
        {
            cin>>v1>>v2;
            grafo[(int)v1-'a'][(int)v2-'a'] = 1;
            grafo[(int)v2-'a'][(int)v1-'a'] = 1;
        }
        for(int x = 0; x < vertices ; x++)
            visitados[x] = false;
        pilha.push(0);
        visitados[0] = true;
        printf("Case #%d:\n",i);
        master = 0;
        while(!pilha.empty())
        {
            flag = 0;
            topo = pilha.top();

            for(j = 0 ; j < vertices ; j++)
            {
                if(grafo[topo][j]==1)
                {
                    flag = 1;
                    break;
                }
            }
            if(master == 0)
            {
                print.push_back((char)(topo + 'a'));
                master = 1;
                cont++;
            }
            if(j!=vertices)
            {
                adja = j;
                grafo[topo][j] = 0;
                if(visitados[adja] == false)
                {
                    print.push_back((char)(adja + 'a'));
                    visitados[adja] = true;
                    pilha.push(adja);
                }
            }else
            {
                pilha.pop();
            }
            if(pilha.empty())
            {
                int tam = print.size();
                sort(print.begin(),print.end());
                for(int x = 0; x < tam; x++)
                {
                    printf("%c,",print[x]);
                }
                print.clear();
                printf("\n");
                master = 0;
                for(int i = 0; i < vertices; i++)
                {
                    if(visitados[i]==false)
                    {
                        visitados[i] = true;
                        pilha.push(i);
                        break;
                    }
                }
            }
        }
        printf("%d connected components\n\n",cont);
    }

    return 0;
}
