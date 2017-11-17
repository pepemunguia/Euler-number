#include <iostream>
using namespace std;
#include <iomanip>

double factorial (double presicion){
  if (presicion>0){
          double result1=factorial (presicion-1);
          double result2=result1*presicion;
          return result2;
        }
        else{
          return 1;
        }
      }

      double calculate_e (double presicion){
        double e=0;
        for (double copia=presicion; copia>=0;copia--){
          double result=1/factorial(copia);
          e=e+result;
        }
        return e;
      }

int main (){
  double presicion;
  cout<<"Please enter the presicion for e you like to calcule"<<endl;
  cin>>presicion;
  cout<< "The result of e with "<<presicion<< " decimals is: "<<setprecision(presicion+1)<<calculate_e(presicion)<<endl;
  return 0;
}
