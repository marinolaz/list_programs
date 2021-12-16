//MARINO LACANO ARMANDO
//EXAMEN ESTRAORDINARIO PROGRAMACION EN C
//PARTE 2:3
//16/12/2021
#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int formas = 0;
void Cambiar(char *x, char *y)
{
   char pivote;
   pivote = *x;
   *x = *y;
   *y = pivote;
}

void permutar(char *Ar, int izq, int der)
{

int i;

if (izq == der)
{
    if (formas < 10)
    {
        cout << "0" << formas << ".\t" << Ar << endl;
    }
    else
    {
        cout << formas << ".\t" << Ar << endl;
    }

    formas++;
}
else
{
    for (i = izq; i <= der; i++)
    {
        Cambiar((Ar + izq), (Ar + i));
        permutar(Ar, izq + 1, der);
        Cambiar((Ar + izq), (Ar + i));
    }
}
}

int main()
{
int n = 0;
char cadena[] = "AEBCD";


n = strlen(cadena);

permutar(cadena, 0, n - 1);
cout << "\nSe realizo " << formas << " permutaciones.en total\n"<< endl;
return 0;
}
