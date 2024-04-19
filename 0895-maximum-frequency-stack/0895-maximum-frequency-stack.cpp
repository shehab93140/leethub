		
class FreqStack {
public:
  
    map<int,int> freqMap;

    map<int,stack<int> > setMap;
    
 
    int maxfreq = 0;
    
    FreqStack() {
        
    }
    
    // insert
    void push(int val) {
        // frequency of x
        int freq = freqMap[val] + 1;
        

        freqMap[val] = freq;
        

        if(freq > maxfreq)
            maxfreq = freq;
        
     
        setMap[freq].push(val);
    }
    

    int pop() {

        int top = setMap[maxfreq].top();
        setMap[maxfreq].pop();
        
    
        --freqMap[top];
     
        if(setMap[maxfreq].size() == 0)
            --maxfreq;
        return top;
    }
};