#include <iostream>
#include <vector>

template <typename T>
void echo(std::vector<T> const &);


int main() {

    std::vector<int> integers(10,1);
    std::vector<double> doubles(10,1);

    integers[2] = 2;
    doubles[5] = 4.1;

    echo(integers);
    echo(doubles);

}


template <typename T>
void echo(std::vector<T> const &v){
    for (typename std::vector<T>::const_iterator it  = v.begin(); it != v.end(); ++it){
        std::cout << *it << " " ;
    }
    std::cout << std::endl;
}

