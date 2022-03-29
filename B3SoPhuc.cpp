#include<iostream> 

using namespace std; 



class SoPhuc {
    private: 
            int thuc; 
            int ao; 
    public : 
            SoPhuc(int a = 0 , int b = 0 ) {
                thuc = a; 
                ao = b; 
            }
            ~SoPhuc(){} 

            void outPut(){
                cout<< "\nSo Phuc: " << thuc ; 
                if( ao < 0 ){
                    cout<< ao << "*j"; 
                }
                else {
                    cout<< " + " << ao << "*j" ; 
                }
            }


            int getThuc(){
                return thuc; 
            }
            int getAo(){
                return ao; 
            }

            SoPhuc tong2SP(SoPhuc p1){
                int e , g, h ; 
                e = thuc + p1.getThuc(); 
                g = ao + p1.getAo(); 
                SoPhuc sp(e,g); 
                return sp; 
            }

}; 



int main(){

    SoPhuc P1(4,6); 
    SoPhuc P2(2,8); 

    SoPhuc P = P2.tong2SP(P1); 
    P.outPut(); 
    



    return 0; 
}