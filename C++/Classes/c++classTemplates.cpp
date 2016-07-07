/*Write the class AddElements here*/
template <class T>
class AddElements {
    T element;
    public:
    AddElements (T arg) {
        element=arg;
    }
    T add(T num1){ 
        return element+num1;
    }
    T concatenate(T s1){
        return element+s1;
    }

};

