
#include<iostream>
using namespace std; 

class PhanSo{
    private: 
            double tuSo; 
            double mauSo; 
    public : 
            PhanSo( double ts = 0 , double ms = 0 ){
                tuSo = ts; 
                mauSo = ms; 
            }
            ~PhanSo(){} 

            void display(){
                cout<<"Phan So: " << tuSo << "/" << mauSo << endl ; 
            }

            double getTuSo(){
                return tuSo; 
            }
            double getMauSo(){
                return mauSo; 
            }

            double UCLN( int a , int b ){
                if (a == 0 || b == 0){
                    return a + b;
                }
                while (a != b){
                    if (a > b){
                        a -= b; 
                    }else{
                        b -= a;
                    }
                }
                return a;
            }
    
            void rutgonPhanso(){
                double k = UCLN(tuSo , mauSo ); 
                tuSo = tuSo / k; 
                mauSo = mauSo / k;
            }

            PhanSo tong( PhanSo p1 ){
                double a = tuSo*p1.getMauSo() + p1.getTuSo()*mauSo; 
                double b = mauSo * p1.getMauSo(); 
                double temp = UCLN(a,b); 
                double tu = a / temp; 
                double mau = b / temp; 
                PhanSo p2(tu,mau);
                return p2; 
            }

}; 

int main(){

    PhanSo p1(12,36); 
    PhanSo p2(4,4); 

    PhanSo P = p2.tong(p1); 
    P.display();

    

    return 0; 
}