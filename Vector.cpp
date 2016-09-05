//
// Created by lijiahao on 9/5/16.
//

#include <vector>
using namespace std;

template<typename T>
ostream &operator<<(ostream &os, const vector <T> &v) {
    os << '(';
    for (typename vector<T>::const_iterator iter = v.begin(); iter != v.end(); ++iter) {
        os << *iter;
        if (iter != v.end() - 1)
            os << ", ";
    }
    os << ")";
    return os;
}

template<typename T>
vector <T> operator+(const vector <T> &lhs, const vector <T> &rhs) {
    vector <T> ret(lhs);
    if (lhs.size() != rhs.size())
        throw invalid_argument("Size does not equal!");
    else {
        typename vector<T>::iterator it = ret.begin();
        typename vector<T>::const_iterator ir = rhs.begin();
        for (; ir != rhs.end(); ++ir, ++it)
            *it = *it + *ir;
    }
    return ret;
}