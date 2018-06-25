//
//  main.cpp
//  test_c++01
//
//  Created by jameskhdeng(邓凯辉) on 2018/4/22.
//  Copyright © 2018年 Tencent. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

void sumOfNum() {
    int sum = 0;
    for (int i = 50; i <= 100; i++) {
        sum += i;
    }
    cout << sum << endl;
}

void cinSum() {
    int i = 0, sum = 0;
    cout << "请输入：" << endl;
    while (cin >> i) {
        sum += i;
    }
    cout << endl << "sum = " << sum << endl;
}

struct foo {
    
};

void readString() {
    string s;
    cout << "请输入：";
    cin >> s;
    cout << s << endl << "长度为：" << s.size() << endl;
}

void readLine() {
    string line;
    cout << "请输入："<< endl ;
    while (getline(cin, line)) {
        cout << line << endl;
    }
}

void compareString() {
    string s1;
    cout << "请输入字符串1：";
    cin >> s1;
    
    string s2;
    cout << "请输入字符串2：";
    cin >> s2;
    
    if (s1 == s2) {
        cout << "两个字符串相等" << endl;
    } else if (s1 > s2) {
        cout << "s1 大 ：" << s1 << endl;
    } else {
        cout << "s2 大 ：" << s2 << endl;
    }
}

void readMutiString() {
    string mutiS;
    string s;
    cout << "请输入：";
    
    while (cin >> s) {
        mutiS = mutiS + ' ' + s;
        cout << mutiS << endl;
    }
}

void forString() {
    string s = "deng kai hui";
    cout << "原字符串：" << s << endl;
    for (char c : s) {
        c = 'x';
    }
    cout << "新字符串：" << s << endl;
}


// ========vector=========
void initVector() {
    vector<string> v1{"I", "is", "DD"};
    vector<string> v2{"I", "think", "cry"};
}

void loadVector() {
    cout << "请输入整数" << endl;
    int num;
    vector<int> v1;
    while (cin >> num) {
        v1.push_back(num);
    }
    
    for (int n : v1) {
        cout << n << endl;
    }
}

void handlerVector(vector<int> v) {
    for (auto &i : v) {
        i *= i;
    }
    
    for (auto i : v) {
        cout << "After Handler :" << i << endl;
    }
}

void changeLetter() {
    cout << "请输入单词：";
    string str;
    vector<string> v;
    while (cin >> str) {
        v.push_back(str);
    }
    
    for (string &str : v) {
        for (auto &c : str) {
            c = toupper(c);
        }
    }
    
    for (string str : v) {
        cout << str << endl;
    }
}

void sumVector() {
    cout << "请输入整数：" << endl;
    int num;
    vector<int> v;

    while (cin >> num) {
        v.push_back(num);
    }
    
    for (decltype(v.size()) i = 0; i < v.size()-1; i+=2) {
        cout << "和：" << v[i]+v[i+1]  << endl;
    }
}

void sum2Vector() {
    cout << "请输入整数：" << endl;
    int num;
    vector<int> v;
    
    while (cin >> num) {
        v.push_back(num);
    }
    
    for (decltype(v.size()) i = 0; i < v.size()/2; i++) {
        cout << "和：" << v[i]+v[v.size()-1-i]  << endl;
    }
}

void doubleVector() {
    cout << "请输入整数：" << endl;
    int num;
    vector<int> v;
    while (cin >> num) {
        v.push_back(num);
    }
    
    for (auto it = v.cbegin(); it!=v.cend(); it++) {
        cout << (*it)*(*it) << endl;
    }
}

// ========Array=========
void copyArray() {
    int a[10];
    for (int i = 0; i < 10 ;i++) {
        a[i] = i;
    }
//
//    for (auto i : a) {
//        cout << a[i] << endl;
//    }
    
    int b[10];
    vector<int> v;
    for (auto i : a) {
        b[i] = a[i];
    }
    
    for (auto i : b) {
        cout << b[i] << endl;
    }
}

void initVectorWithArray() {
    int a[3] = {1, 2, 3};
    vector<int> v(begin(a), end(a));
    for (auto i : v) {
        cout << i << endl;
    }
}

void initArrayWithVector() {
    vector<int> v = {1, 2, 3};
    int a[3];
    for (size_t i = 0; i<3; i++) {
        a[i] = v[i];
    }
    
    for (auto s: a) {
        cout << s << endl;
    }
}

int main(int argc, const char * argv[]) {
//    cinSum();
//    int a = 10;
//    const int &b = 10;
//    a = 11;
//
//    int *p = nullptr;
//    cout << p << endl;
//    printf("a = %d\nb = %d\n",a,b);
//    readMutiString();
    initArrayWithVector();
    
    
    
    return 0;
}
