//
//  main.cpp
//  19 october
//
//  Created by Say Artyom on 19/10/22.
//

#include <iostream>
using namespace std;


//Problem-1
//float sum_func(float,float);
//
//int main() {
//    float a,b = 0;
//    cout<<"Numbers: \n";
//    cin>>a >> b;
//    float sum = sum_func(a,b);
//    cout<<"Sum of two numbers: "<<sum << endl;
//}
//float sum_func(float b,float a){
//    return a+b;
//}

//Problem-2
//float prod_func(float,float);
//
//int main() {
//    float a,b = 0;
//    cout<<"Numbers: \n";
//    cin>>a >> b;
//    float sum = prod_func(a,b);
//    cout<<"Product of two numbers: "<<sum << endl;
//}
//float prod_func(float b,float a){
//    return a*b;
//}

//Problem-3
//float circ_func(float);
//float area_func(float);
//int main() {
//    float a = 0;
//
//    cout<<"Radius: ";
//    cin>>a;
//
//
//    cout<<"Circumference: "<< circ_func(a) << endl;
//    cout<<"Area: "<< area_func(a)<< endl;
//}
//float circ_func(float a){
//    return 3.14*2*a;
//}
//float area_func(float a){
//    return 3.14*a*a;
//}
//Problem-4
//bool checker(int);
//
//int main() {
//    int a = 0;
//
//    cout<<"Numbers: ";cin>>a;
//    cout<< (checker(a) ? "Even" : "Odd") << endl;
//}
//bool checker(int a){
//    return (a % 2 == 0);
//}

//Problem-5
//bool checker(int);
//
//int main() {
//    int n;cin>>n;
//    cout<< (checker(n) ? "Prime" : "Not Prime") <<endl;
//}
//bool checker(int n){
//    bool is_prime = true;
//    for(int i = 2; i <= n/2; i++){
//        if(n % i == 0){
//            is_prime = false;
//            break;
//        }
//    }
//    return is_prime;
//}

//Problem-6
//int checker(int);
//
//int main() {
//    int n;
//    cout<<"Number: ";cin>>n;
//    cout<<"Factorial: " << checker(n) << endl;
//}
//int checker(int n){
//    int factorial = 1;
//    for(int i = 1; i<=n; i++){
//            factorial *= i;
//    }
//    return factorial;
//}

//Problem-7
//int max(int a,int b, int c);
//int min(int a,int b, int c);
//
//int main() {
//int a,b,c = 0;
//    cin>>a>>b>>c;
//    cout<<"Minimum: "<<min(a,b,c)<<"\nMaximum: "<<max(a,b,c)<<endl;
//}
//
//int max(int a,int b, int c){
//    int max=(a>=b&&a>=c)?a:(b>=a&&b>=c)?b:c;
//
//    return max;
//}
//int min(int a, int b, int c){
//    int min=(a<=b&&a<=c)?a:(b<=a&&b<=c)?b:c;
//    return min;
//}

//Problem-8
float sum(float,float);
float subtract(float,float);
float product(float,float);
float division(float,float);

int main() {

}

float sum(int a,int b){
    return a+b;
}
float subtract(int a,int b){
    return a-b;
}
float product(int a,int b){
    return a*b;
}
float division(int a,int b){
    return a/b;
}
