#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d);
	    cout << a << " " << b << " " << c << " " << d << endl;
	}
	
	return 0;
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 

void shuffle(int *a, int *b, int *c, int *d) {
    
    int randIndex1 = rand() % 4;  
    int randIndex2 = rand() % 4;  

    
    while (randIndex1 == randIndex2) {
        randIndex2 = rand() % 4;
    }

    
    if ((randIndex1 == 0 && randIndex2 == 1) || (randIndex1 == 1 && randIndex2 == 0)) {
        swap(*a, *b);
    }
    else if ((randIndex1 == 0 && randIndex2 == 2) || (randIndex1 == 2 && randIndex2 == 0)) {
        swap(*a, *c);
    }
    else if ((randIndex1 == 0 && randIndex2 == 3) || (randIndex1 == 3 && randIndex2 == 0)) {
        swap(*a, *d);
    }
    else if ((randIndex1 == 1 && randIndex2 == 2) || (randIndex1 == 2 && randIndex2 == 1)) {
        swap(*b, *c);
    }
    else if ((randIndex1 == 1 && randIndex2 == 3) || (randIndex1 == 3 && randIndex2 == 1)) {
        swap(*b, *d);
    }
    else if ((randIndex1 == 2 && randIndex2 == 3) || (randIndex1 == 3 && randIndex2 == 2)) {
        swap(*c, *d);
    }
}