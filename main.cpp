/*
  Angel Odiel Treviño Villanueva
  A01336559
  1177 - Group Reverse  Fecha: 8/feb Materia: TopTec
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

string Rotate(int grupos, string number){
  int size = number.size(); //the size of the string
  int subsize = size/grupos; //este te dice cuantos characteres debe de tener el subgrupo
  int ahora = 0; //para saber en que grupo estas
  while(ahora < grupos){
      for(int j = 0, i = 0 + (subsize*ahora); i < (subsize/2) + (subsize*ahora); i++, j++){
        char aux;//esta te ayudara para cambiar
        aux = number[i];
        number[i] = number[size-subsize*(grupos-ahora-1)-1-j];
        number[size-subsize*(grupos-ahora-1)-1-j] = aux;
      }
      ahora++;
    }
    return number;
}

int main(){
  int grupos;
  string number; //el string original
  vector<string> Respuestas;
  while(cin >> grupos && grupos > 0){
      cin >> number;
      Respuestas.push_back(Rotate(grupos, number));
  }

  for(int i = 0; i < Respuestas.size(); i++){
    cout << Respuestas[i] << endl;
  }

  return 0;
}
//CBASHEHSH
