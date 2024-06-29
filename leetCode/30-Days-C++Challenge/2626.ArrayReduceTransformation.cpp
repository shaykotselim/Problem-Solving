#include <iostream>;
using namespace std;

// function declaration
double myFn(int accum, int curr);


int main (){
    int nums[]= {1, 2, 3, 4};
    int sizeNums = sizeof(nums)/ sizeof(nums[0]);

    int val , i;
    //init = 0;
    val = 0;

    for( i = 0; i<sizeNums; i++){
        val= myFn(val,nums[i]);
    }
    cout << val;
return 0;
}
// function definition
double myFn(int accum, int curr){
    double result = accum + curr;

    return result;

}
