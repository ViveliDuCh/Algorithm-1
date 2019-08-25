#include <iostream>
using namespace std;
//seguramente se puede bajar la complejidad de O(n) a O(1)con una f[ormula matematica universal 
class Circulo{
  public:
    int spaceCalc(int r,int x,int y, int xP, int yP){
        int counter=0;
        int d=r*2;
        int i=0,j=0;
        if(x==xP && y==yP){
          counter=0;
        }else if(y==yP){
          //for(i=x;i<xP;i+=diameter){
            //counter++;
          //}
          //Para incluir casos en los que sean negativos
          if(counter<0){
           counter=((xP-x)/d)*(-1);
          }else{
            counter=((xP-x)/d);
          }
        }else if(x==xP){
          //for(i=y;i<yP;i+=diameter){
            //counter++;
          //}
          //Para incluir casos en los que sean negativos
          if(counter<0){
           counter=((yP-y)/d)*(-1);
          }else{
            counter=((yP-y)/d);
          }
          
        }else{
          for(i=x;i<xP;i+=r){
            counter++;
          }
        }
        return counter;
    }
};



int main() {
  int r,x,y,xP,yP;
  Circulo cir1;

  cin>>r;
  cin>>x;
  cin>>y;
  cin>>xP;
  cin>>yP;
  
  cout<<cir1.spaceCalc(r,x,y,xP,yP);


}

