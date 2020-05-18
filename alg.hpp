// elyashiv deri 305368433 Matala 2 - Algo
#include <iostream>
#include <vector>
#include <iterator>
#include <numeric>
 using namespace std;


template <class Itr,class Temp>
Itr Add_n(Itr begin,Itr end ,Temp const n){
    // Size Checker
  int size = end - begin;
  Itr Setrt = begin;
  Temp tempval = n;
  int sum =0;
//   A division checker
// bool ans = Mod(size , n );
  if (size % n ==0 ){
      for(int i =0;i<(size / n) ; i++){
        while(tempval > 0 ){
            sum += *Setrt;
            Setrt++;
            tempval--;
        }
        *begin = sum;
        begin++;
        tempval = n;
        sum =0;    
      } 
  }
//   else....
  else{
     for(int j =0 ; j<(size / n) ; j++){
        while(tempval > 0 ){
            sum += *Setrt;
            Setrt++;
            tempval--;
        }
        *begin = sum;
        begin++;
        tempval = n;
        sum =0;
      }
      int modulo = (size % n);
     *begin = accumulate(Setrt, end, 0);
        begin++;
  }
  return begin;
}
 template <class T>
T Mod (T s, T n){
    if (s % n == 0 )
    {
        return true;
    }
    return false;
}

// pat 2
 template <class T>
 T Transpose(T begin, T end){
    int size_T = end - begin;
    if(size_T % 2 == 0 ){
        while(begin!=end){
            iter_swap(begin, begin+1);
            begin = begin+2;
        }
        return end;
    }
    else{
        while(begin != end-1){
            iter_swap(begin, begin+1);
            begin = (begin+2);
        }
        return end-1;
    } 
}
// pat 3
template<class Input, class Output, class F>
Output Transform(Input begin, Input end, Output OutAns,F fun){
  int sizeItr = end - begin;
    if(sizeItr % 2 == 0 && sizeItr != 0 ){
        while(begin!=end){
            *OutAns = fun(*begin, *(begin+1));
            begin = begin+2;
            OutAns++;
        }
        return OutAns;
    }
    return OutAns;
}
