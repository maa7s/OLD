#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double ma,id,sb,sbr,sbg,sl;//sbr=salario reajustado e sbg=salario gratificado
  cout<<"Digite sseu numero de matricula,idade,e salario bruto ,respectivamente"<<endl;cin>>ma>>id>>sb;
  double reaj=0.38,grat=1.20,desc=0.85;
 
  sbr=(sb*reaj)+sb;  
  sbg=sbr*grat;
  sl=sbg*desc;
  
  cout<<"Numero de Matricula "<<ma<<endl;cout<<"Salario Bruto "<<sbg<<endl;cout<<"Salario Liquido"<<sl;

return 0;
