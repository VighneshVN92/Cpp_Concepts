/*All about the templates*/ 
using namespace std;
// simple function template

template<typename T>
T GetSum(const T &a, const T &b){
    return a+b;
}

// simple template class

template <typename T>
class MyTempClass{
    private:
    T * data;
    public:
    MyTempClass(T* value): data(value){}
    T GetData(){
        std::cout<<" The value is"<< *data;
    }
};


template<typename T>
T Min(T a, T b){
   return  a < b ? a : b;
}

// Varadic templates example with min function
template <typename T, typename... Args>
T Min(T a, Args... args)
{
   return(min(a,Min(args...)));
}