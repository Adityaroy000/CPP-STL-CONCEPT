#include<bits/stdc++.h>
// after using this header file we dont need to add any other header file for the math operation or to do any string operataion !
using namespace std;
//pairs:-
void explainpair(){
    pair<int,int> p = {1,3};
    cout << p.first /*print 1*/ << " " << p.second/*print 3*/;
    
    pair<int,pair<int,int>> P = {1,{2,3}};
    cout << P.first << " " << P.second.first/*print 2*/ << " " << P.second.second /*print 3*/;

    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout<< arr[1].second; /*print: 5 from {2,5}*/


}
void explainvector(){
    /*vector size is dynamic and can be changed whenever we want it to be changed*/
    
    /*how to declare a vector*/
    vector<int> v;
    
    v.push_back(1); /*v{1}*/ 
    v.emplace_back(2);/*v{1,2}*/

    /*we can store pair in vector also*/
    vector<pair<int,int>> vec;
    vec.push_back({1,2}); /*in push_back we need ({}) this syntax to store a pair*/
    vec.emplace_back(1,2);/*while in emplace_back we just need () this syntax to store the pair*/

    vector<int> v(5,100); /*means vector of size 5 and containing 100 at each index will be formed like {100,100,100,100,100}*/
    v.push_back(1);/*{100,100,100,100,100,1} will add 1 in vector and will increase the size by 1 also*/

    /*to access the element of the vector */
    cout << v[0] << " ";/* or << v.at(0);*/

    vector<int> v(5);/*means vector of size 5 with zero at each index will be formed like {0,0,0,0,0}*/

    vector<int>v1(5,20);
    vector<int>v2(v1);/*it will generate a copy of v1 inside v2*/ 

    /*how to print a vector using loops:- */
    
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout<< *(it)<< " ";
    }
    //or
    for(auto it = v.begin(); it != v.end(); it++){
        cout<< *(it)<< " ";
    }/*auto" it auomatically assigns required data types to compiler */
    //or
    for(auto it : v){
        cout<< it << " ";
    }

    /*How to erase any element in a vector:- */
    
    /* {10,20,12,23} */
    v.erase(v.begin()+1); /* 20 will be erased */

    /* {10,20,12,23,35} */
    v.erase(v.begin()+2,v.begin()+4); /* {10,20,35} [start,end) */

    /*How ton insert any new elements in a vector :-*/

    vector<int>v(2,100); /* {100,100} */
    v.insert(v.begin(),300); /* {300,100,100} */
    v.insert(v.begin()+1,2,5); /* {300,5,5,100,100} */

    vector<int>copy(2,50); /* {50,50} */
    v.insert(v.begin(),copy.begin(),copy.end()); /* {50,50,300,5,5,100,100} */

    /* {10,20} */
    cout<< v.size(); // 2

    /* {10,20} */
    v.pop_back(); // {10}

    /* v1-> {10,20}
       v2-> {30,40} */
       v1.swap(v2); /* v1-> {30,40} v2-> {10,20} */

       v.clear(); /*erases entire vector*/

    cout<< v.empty(); /* gives TRUE if vector is empty OR FALSE if the vector is not empty */

}
void iterator(){
    vector<int>v;
    vector<int>::iterator it = v.begin();/*suppose a vector {10,20,30,40} so v.begin is stored in (it) so it means (it) stores the address of the 0th element of the vector and to print that element we need to add *(it) "its like pointers" */
    it++;
    cout<< *(it) << " ";

    /*for accessing the end part of the vector we use*/
    vector<int>::iterator it  = v.end();
    it--;/*because v.end will point after the last element of vector so for the last part we should do it-- */
    cout<< *(it) <<" ";

}
void explainlist(){
    list<int>ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); //{5,2,4}
    ls.emplace_front(); //{2,4}
    /* rest funtions same as vector
    begin ,end ,rebegin,clear,insert,size,swap*/

}
void explainDeque(){
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(4); //{4,1,2}
    dq.emplace_front(3); //{3,4,1,2}

    dq.pop_back(); //{3,4,1}
    dq.pop_front(); //{4,1}

    cout<< dq.back(); // print 1
    cout<< dq.front(); // print 4

    /* rest funtions same as vector
    begin ,end ,rebegin,clear,insert,size,swap*/

}
void explainStack(){
    /* LIFO (last in ,first out)*/

    stack<int>st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(3); // {3,3,2,1}
    st.emplace(5); // {5,3,3,2,1}
    cout<< st.top(); //print 5
    st.pop(); // "pop" delete the last element that enters,fisr . so st will look likes {3,3,2,1}
    cout<< st.top(); // print 3
    cout<< st.size(); // 4
    cout<< st.empty(); // FALSE

    stack<int>st1,st2;
    st1.swap(st2);
    /* Time complexity of Stack is O(1) */
}
void explainQueue(){
    /*FIFO first in ,first out*/
    queue<int>q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4);//{1,2,4}
    
    q.back() += 5; /*back means "4" here not "1". add 5 in 4 = 9.so its {1,2,9}*/

    cout<<q.back(); // print 9

    cout<<q.front(); //print 1
    
    q.pop();// pop will delete the first element that enters and that is 1. so q={2,9} finally.

    cout<< q.front(); // print 2

    /*size swap empty same as stack */
    /* time complexity is O(1) */

}
void explainPQ(){
    priority_queue<int>pq;
    /* the element having highest value stays at the top also known as maxmium heap . */

    pq.push(5); //{5}
    pq.push(2);// {5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(10); //{10,8,5,2}

    cout<<pq.top(); //print 10
    pq.pop(); // erase 10 -> {8,5,2}
    cout<<pq.top(); //print 8
    
    /* size swap empty functions same as others */

    /* if you want to make a priority queue which stores minimum element at the top then for that this is the syntax :- */
    
    /* this is also known as Minimun heap */
    priority_queue<int,vector<int>,greater<int>> pq;
    
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);// {2,5,8}
    pq.emplace(10);// {2,5,8,10}

    cout<<pq.top(); // print 2

    /* time complexity of "push" is logn
       time complexity of "top" is O(1)
       time complexity of "pop" is logn */
     
}
void expalainSet(){
    /* it stores everything in a sorted manner and unique too */
    /* time complexity of each function is logn */
    
    set<int>st;
    st.insert(1); //{1}
    st.emplace(2);//{1,2} 
    st.insert(2);//{1,2} it will not store 2 again as it only stores unique value and 2 is already there in the sets.
    st.insert(4);//{1,2,4} 
    st.insert(3); //{1,2,3,4}
    
    /* begin(),end(),rebegin(),reend(),size(),empty(),and swap() are same as those of above */

    /* {1,2,3,4,5} */
    auto it = st.find(3); /* it will give the address of 3 to the iterator */

    auto it = st.find(6); /* as 6 is not present in the set so , the address of st.end() (which is right after the end of the last element) will be given to the iterator */

    st.erase(5); /* erases 5 and it takes logarithimic time */

    int cnt =  st.count(1); /* if 1 is present in the set then "1" will be stored in the cnt variable as every element is a unique element so. if 1 is not present in the set then "0" will be stored in the cnt variable  */

    auto it = st.find(3);
    st.erase(it);

    /* {1,2,3,4,5} */
    auto it1 = st.find(2);
    auto it2 = st.find(4); 
    st.erase(it1,it2); /*after erasing {1,4,5}  [first,last)*/

    /* syntax for lower_bound and upper_bound */
    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);

}
void explainMultiset(){
    /* everything is same as set only stores duplicate elements also */

    multiset<int>ms;
    ms.insert(1);// {1}
    ms.insert(1);// {1,1}
    ms.insert(1);// {1,1,1}

    ms.erase(1); // all 1's are erased
    int cnt =  ms.count(1);

    ms.erase(ms.find(1)); /* only a single 1 is erased*/
    
    /*ms.erase(ms.find(1),ms.find(1)+2);*/

    /*rest all functions are same as set */


}
void explainUset(){
    unordered_set<int>st;
    /*everything is same as set but the difference it does not store elements in sorted manner 
    lower_bound and upper_bound does not work. it has a better complexity than set in most of the cases,except some when collisons happens . and the time complexity is O(1); but for the worst case its O(n) buit it happens once in a million  */

}
void explainMap(){
    /* map stores unique keys in sorted order */
    // O(n)

    map<int,int>mpp; /* first int is called KEY and the second int is called VALUE . and the KEY can be of any data type */

    mpp[1]=2; /* it means in key 1,you are storing 2 -> {1,2} */
    mpp.insert({3,4});/* {3,4}*/
    mpp.insert({2,4});/* {2,4}*/


    map<int,pair<int,int>>mpp;/*here key is one integer and value is two integer */

    map< pair<int,int>, int>mpp;/*here key is two integer and value is one integer*/
    /*for this type :-*/
    //mpp[{2,3}]=10; /* {{2,3},10}*/

    /* for printing :-*/
    //{ {1,2},{2,4},{3,5} }
    for(auto it : mpp){
        cout<< it.first << " " << it.second << endl; /* 
        first : it will go to {1,2} and print 1 2 
        and then will go to {2,4} and print 2 4 and so on... KEYS will be printed in sorted way */
    }
    
    cout<<mpp[1]; // here 1 is the key and will print 2 from {1,2}
    cout<< mpp[5]; // there is no key as 5 so will print 0
       
    /* if you want to find the address of any key then :- 
    auto it = mpp.find(3);
    cout << *(it).second; // prints 5 */

    auto it = mpp.find(5); // if key 5 is not in the map then it will give mpp.end()

    /* syntax for upper and lower bound :-*/
    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);

    /* erase swap size empty are same as above */

}
void explainMultimap(){
    // everyhting is same as map,but it can store multiple duplicate keys also eg: {1,2} and{1,3}
}
void explainUnorderMap(){
    // it will not store the keys in sorted way rest same as multimap : O(1) but in worst case that is rare its O(n)
}

/* if we want to sort an array or vectors then use these algo : */

/* comperator are used to sort the array in the way we want it to get sorted */
bool comp(pair<int,int> p1,pair<int,int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second>p2.second) return false;
    
    if(p1.first>p2.first) return true;
    else return false;            
}
void explainExtras(){
    int n=5;
    int arr[n] = {1,6,3,4,5};
    int a = arr[0];
    sort(a,a+n); // whole array will be sorted to ascending order {1,3,4,5,6} ; [start,end)
    sort(a+2,a+4);//will sort some part of the array
    
    /* to sort a vector :-*/
    vector<int>v;
    sort(v.begin(), v.end());

    /* to sort an array in descending order :- */
    //sort(a,a+n,greater<int>);

    pair<int,int> a[] = {{1,2}, {2,1}, {4,1}};
    /*sort it according to second element, if second element is same , then sort it according to first element but in descending order */

    sort(a,a+n,comp); //{4,1},{2,1},{1,2}  

    /* To find all the permutation of a string : */
    string s = "123";
    /*to find all the permutatiom we need to at first sort the string in ascending order*/
    sort(s.begin(),s.end());

    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    //for finding the maximum and minimum element of an array :
    //int maxi = *max_element(a,a+n);
  
}
   




