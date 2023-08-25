#include <iostream>
#include <ctime>

using namespace std;

void prefixMedia1(float X[], unsigned int n, float A[]) {
    float a;
    
    
    for (int i = 0; i <= (n - 1); i++) {
        a = 0;
        #include <iostream>
#include <ctime>

using namespace std;

void prefixMedia1(float X[], unsigned int n, float A[]) {
    float a;
    #include <iostream>
#include <ctime>

using namespace std;

void prefixMedia1(float X[], unsigned int n, float A[]) {
    float a;
    
    
    for (int i = 0; i <= (n - 1); i++) {
        a = 0;
        
        for (int j = 0; j <= i; j++ ) {
            a = a + X[j];
        }
        
        A[i] = a/(i+1);
        
    }
} 

int main()
{
    
    unsigned int n;
    cout<<"Digite um valor para N: ";
    cin >> n;
    float *X = new float[n];
    float *A = new float[n];
    clock_t tempo1, tempo2;
    double tempo_total;
    
    for (int i = 0; i < n; i++) {
        X[i] = 1.0;
    }
    
    tempo1=clock();
    
    prefixMedia1(X, n, A);
    
    tempo2=clock();
    
    tempo_total=difftime(tempo2,tempo1)/CLOCKS_PER_SEC;
    
    cout << "O tempo gasto foi: " << tempo_total << " segundos" << endl;
    
    return 0;
}


        
        for (int j = 0; j <= i; j++ ) {
            a = a + X[j];
        }
        
        A[i] = a/(i+1);
        
    }
} 

int main()
{
    
    unsigned int n;
    cout<<"Digite um valor para N: ";
    cin >> n;
    float *X = new float[n];
    float *A = new float[n];
    clock_t tempo1, tempo2;
    double tempo_total;
    
    for (int i = 0; i < n; i++) {
        X[i] = 1.0;
    }
    
    tempo1=clock();
    
    prefixMedia1(X, n, A);
    
    tempo2=clock();
    
    tempo_total=difftime(tempo2,tempo1)/CLOCKS_PER_SEC;
    
    cout << "O tempo gasto foi: " << tempo_total << " segundos" << endl;
    
    return 0;
}


        for (int j = 0; j <= i; j++ ) {
            a = a + X[j];
        }
        
        A[i] = a/(i+1);
        
    }
} 

int main()
{
    
    unsigned int n;
    cout<<"Digite um valor para N: ";
    cin >> n;
    float *X = new float[n];
    float *A = new float[n];
    clock_t tempo1, tempo2;
    double tempo_total;
    
    for (int i = 0; i < n; i++) {
        X[i] = 1.0;
    }
    
    tempo1=clock();
    
    prefixMedia1(X, n, A);
    
    tempo2=clock();
    
    tempo_total=difftime(tempo2,tempo1)/CLOCKS_PER_SEC;
    
    cout << "O tempo gasto foi: " << tempo_total << " segundos" << endl;
    
    return 0;
}

