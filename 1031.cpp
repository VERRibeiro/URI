#include <stdio.h>
#include <iostream>
#include <vector>

using namespace std;
int menor_pulo(vector<int> vetor,int n);
int main()
{
    int n,pessoas,pulos,cont,y;
    vector <int> vetor;
    scanf("%d",&n);
    while(n!=0)
    {
        printf("%d\n",menor_pulo(vetor,n));
        scanf("%d",&n);

    }
    return 0;
}

int menor_pulo(vector<int> vetor,int n)
{
    int pulo = 1,aux,cont = 0,contfinal = 0,contaux = 1111111111;
            while(pulo<=n*4)
            {
            vetor.clear();
            for(int t = 0; t < n; t++)
            {
                vetor.push_back(t+1);
            }
                vetor[12] = 13;
                aux = 0;
                cont = 0;
                vetor.erase(vetor.begin());
                for(int j = 0;;j++)
                {
                    if(j>=vetor.size())
                    {
                        j = 0;
                    }
                    cont++;
                    if(cont==pulo)
                    {
                        if(vetor[j]==13)aux=2;
                        vetor.erase(vetor.begin()+j);
                        cont = 0;
                        j--;
                    }
                    if(aux==2)break;
                    if(vetor.size()==1)
                    {
                        contfinal = pulo;
                        break;
                    }
             }
            pulo++;
            if(contfinal<contaux&&contfinal!=0)
            {
                contaux = contfinal;
            }
        }
    return contaux;
}
