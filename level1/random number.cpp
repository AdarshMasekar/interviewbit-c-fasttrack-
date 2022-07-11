rand()
rand() function is used to generate random numbers. If we generate a sequence of random number with rand() function, it will create the same sequence again and again every time program runs. 
Say if we are generating 5 random numbers in C with the help of rand() in a loop, then every time we compile and run the program our output must be the same sequence of numbers.

Syntax

int rand(void): 
returns a pseudo-random number in the range of 0 to RAND_MAX.
RAND_MAX: is a constant whose default value may vary between implementations but it is granted to be at least 32767.

cout<<rand()<<endl; // Outputs any random number
srand()
The srand() function sets the starting point for producing a series of pseudo-random integers. If srand() is not called, the rand() seed is set as if srand(1) were called at program start. Any other value for seed sets the generator to a different starting point.

Syntax

void srand( unsigned seed ): 
Seeds the pseudo-random number generator used by rand() 
with the value seed.
Note: The pseudo-random number generator should only be seeded once, before any calls to rand(), and the start of the program. It should not be repeatedly seeded, or reseeded every time you wish to generate a new batch of pseudo-random numbers.
Standard practice is to use the result of a call to srand(time(0)) as the seed. 

int main(){ 
    // This program will create different sequence of  
    // random numbers on every program run  
  
    // Use current time as seed for random generator 
    srand(time(0)); 
  
    for(int i = 0; i<4; i++) 
        cout<<rand()<<" "; 
    return 0; 
} 
Answer the question below:

What will be the output of the following code?

int main(){
    cout<< rand()%1 <<endl;
}

right answer is 
0
