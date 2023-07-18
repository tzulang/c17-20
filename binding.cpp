#include <iostream>
#include <tuple>
 
int main() {
    
{
   int arry[3] = { 3, 4, 5 };
   auto [a, b, c] = arry;
}

{
   std::tuple < double, char, int > tpl(1.0, 'c' , 2);
   const auto& [ d, ch, i] = tpl;
}

{
   
    struct S {
        int x, y;
    };

    
    auto func = [](S &s){ return S{s.x*2, s.y*2}; };    
    
    S s {1, 2};

    auto  [a , b] = func(s);

}


}
 