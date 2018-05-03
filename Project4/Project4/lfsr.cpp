#include "lfsr.h"

LFSR::LFSR(string seed, int tap1, int tap2){
    t1 = tap1;
    t2 = tap2;
    
    for(int k = 1; k < seed.length(); k++){
        if(seed[k] == '0')
            q.Enqueue(0);
        else if (seed[k] == '1')
            q.Enqueue(1);
    }
}
bool LFSR::XOR(int a, int b){
    return (a + b) % 2;
}
void LFSR:: NextState(){
    int temp = XOR(q.Peek(t1), q.Peek(t2));
    q.Dequeue();
    q.Enqueue(temp);
}
