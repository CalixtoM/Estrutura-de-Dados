#include <cstdlib>
#include <iostream>

using namespace std;

class Calendario{
      
      public:
             int ano, mes, dia;
             
             Calendario(int a, int b, int c){
                    
                    ano = a;
                    mes = b;
                    dia = c;  
             
             }
             
             bool Bissexto(int ano){

                  if( ( (ano % 4 == 0) && (ano % 100 != 0) ) || (ano % 400 == 0) ){
                      return true;
                  }
     
                  else{
                       return false;
                  
                  }
             }

             int DiaDaSemana(int dia, int mes, int ano){

                 int f = ano + dia + 3 * (mes - 1) - 1; 

                 if (mes < 3){
                    ano--;      
                 }

                 else{
      
                      f -= int(0.4 * mes + 2.3); 
         
                 } 

                 f += int (ano / 4) - int ((ano / 100 + 1) * 0.75); 

                 f %= 7;

   	             return f+1; 

    
             }
             
             void imprimir(){
             
                  cout <<"DOM\tSEG\tTER\tQUA\tQUI\tSEX\tSAB\n\n"; 

 

  	              short TamanhoDoMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 


  			      if (Bissexto(ano) == true){ 

                     TamanhoDoMes[1] = 29; 

                  }  

                  for(int j = 1; j < DiaDaSemana(1, mes, ano); j++){
                          
                          cout <<'\t';
                          
                  } 

  			      for(int dia = 1; dia <= TamanhoDoMes[mes - 1]; dia++){ 

    			          if(dia < 10) cout << '0' <<dia <<'\t'; 

                          else cout <<dia <<'\t'; 	 

                          if(DiaDaSemana(dia, mes, ano) == 7) cout <<'\n'; 

                  } 

             } 
                  
};




int main(int argc, char *argv[])
{
    int a, b, c;
    cout << "Digite ano: ";
    cin >> a;
    cout << "Digite mes: ";
    cin >> b;
    cout << "Digite dia: ";
    cin >> c;
    Calendario obj(a, b, c);
    obj.Bissexto(a);
    obj.DiaDaSemana(c, b, a);
    obj.imprimir();
    system("PAUSE");
    return EXIT_SUCCESS;
}
