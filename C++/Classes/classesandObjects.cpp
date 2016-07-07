// Write your Student class here
class Student{
    private:
    int scores[5];
    public:
    void input();
    int calculateTotalScore();
};
void Student::input(){
    for(int i=0;i<5;i++)
        cin>>scores[i];
}
int Student::calculateTotalScore(){
    int s=0;
    for(int i=0;i<5;i++)
        s=s+scores[i];
    return s;
    
}
