
//Implement the class Box  
//l,b,h are integers representing the dimensions of the box

// The class should have the following functions : 

class Box { 
    private: 
    long l,b,h;

    public:
    Box(){
        l=0;
        b=0;
        h=0;
        BoxesCreated++;
    }
    Box(int length,int breadth,int height){
        l=length;
        b=breadth;
        h=height;
        BoxesCreated++;

    }
    Box(Box &B){
        l=B.l;
        b=B.b;
        h=B.h;
        BoxesCreated++;
    }
    ~Box(){
        BoxesDestroyed++;
    }
    int getLength(){
        return l;

    }
    int getBreadth()
    {
        return b;

    }
    int getHeight()
    {
        return h;

    }

    long long CalculateVolume(){ 
        long long volume;
        volume=(long long)l*(long long)b*(long long)h; 
        return volume; 
    }

bool operator <(const Box& B)
    {
    if(l<B.l)
        return true;
    else if(b<B.b && l==B.l)
        return true;
    else if(h<B.h && b==B.b && l==B.l)
        return true;
    else
        return false;
}
friend ostream &operator<<( ostream &output,Box D)
  { 
     output << D.getLength()<<" " <<D.getBreadth() << " " << D.getHeight();
     return output;            
  }

};


