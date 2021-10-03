
/*
 Code by,
 ___     _               __ _       
| _ \___| |_  __ _ _ _  / _(_)______
|   / _ \ ' \/ _` | ' \|  _| |_ /_ /
|_|_\___/_||_\__,_|_||_|_| |_/__/__|                                                       
*/
#include<bits/stdc++.h>
typedef int int32_t;
#define int         long long int
#define LOOP(i,n)   for (int i = 1; i <= n; i++)
#define loop(i,n)   for(int i = 0;i<n;i++)
#define REP(i,a,b)  for(int i = a;i<=b;i++)
#define INF         1000000000
#define mod         1000000007
#define pb          push_back
#define ff          first
#define ss          second
#define ii          pair<int,int>
#define vi          vector<int>
#define vvi         vector<vi>
#define vii         vector<ii>

#define szv(V)      ((int)(V).size())
#define allv(V)     (V).begin(), (V).end()
#define sortv(V)    sort(allv(V));
#define debug       cout<<"debugged here"<<endl;

#define endl        '\n'
#define X           real()
#define Y           imag()
#define tup         tuple<int,int,int>
#define graphType   vector<vector<tup>>
#define zt(x)       get<0>(x)
#define ot(x)       get<1>(x)
#define tt(x)       get<2>(x)
//oprations
#define isPowerOf2(x) (x && ceil(log2(x))==floor(log2(x)))
#define dotp(a,b)   ( (conj(a)*(b)).real() )	// a*b cos(T), if zero -> prep
#define crossp(a,b) ( (conj(a)*(b)).imag() )	// a*b sin(T), if zero -> parllel
#define firstSetBit(n) ( (log2(n & -n) + 1)   )
//
const double EPS = (1e-7);
const double PI = 3.141592653589793238460;
typedef std::complex<double> point;
typedef std::valarray<point> CArray;
    
using namespace std;
int __lcm(int a,int b) {return a*b/__gcd(a,b);}
int dcmp(double x, double y) {	return fabs(x-y) <= EPS ? 0 : x < y ? -1 : 1;	}


//////////////////////////////////////// CODE STARTS HERE
class Node{
    public:
    int data;
    Node* next = nullptr;
    Node(int data){
        this->data = data;
    }   
};
class singlyLinkedList{
    public:
    Node* head = nullptr;
    int sz = 0;
    //basic
    int size(){
        return this->sz;
    }

    bool isEmpty(){
        return this->sz == 0;
    }

    string toString(){
        Node* curr = this->head;
        string ans = "[";
        while(curr!=nullptr){
            ans += to_string(curr->data);
            if(curr->next!=nullptr) ans+= ", ";
            curr = curr->next;
        }
        ans+="]";
        return ans;
    }
    // ADD

    void addFirst(int val){
        Node* node = new Node(val);
        if(head == nullptr){
            head = node;
        }else{
            node->next = head;
            head = node;
        } 
        this->sz++;
    }

    void addLast(int val){
        Node* node = new Node(val);
        if(head == nullptr){
            head = node;
        }else{
            Node* curr = head;
            while(curr->next!=nullptr) curr = curr->next;
            curr->next = node;
        }
        sz++;
    }

    void addAt(int idx, int val){
        if(idx < 0 || idx>this->sz){
            cout<<"Please provide valid Index"<<endl;
        }else if(idx == 0){
            addFirst(val);
        }else if(idx == this->sz){
            addLast(val);
        }else{
            int i = 1; Node* curr = this->head;
            if(i!=idx){
                curr = curr->next; i++;
            }
            Node* newNode = new Node(val);
            newNode->next = curr->next;
            curr->next = newNode;
            sz++;
        }
    }

    int removeFirst(){
        if(head == nullptr){
            cout<<"List is empty"<<endl; return -1;
        }else if(this->sz == 1){
            int ret = head->data; head = nullptr;
            sz--; return ret;
        }
        int ret = head->data;
        Node* newhead = head->next;
        head->next = nullptr; head = newhead;
        sz--; return ret;
    }

    int removeLast(){
        if(head == nullptr){
            cout<<"List is empty"<<endl; return -1;
        }else if(this->sz == 1){
            int ret = head->data; head = nullptr;
            sz--; return ret;
        }
        Node* curr = head;
        while(curr->next->next != nullptr) curr = curr->next;
        int ret = curr->next->data;
        curr->next = nullptr;
        sz--; return ret;
    }

    int removeAt(int idx){
        if(idx<0 || idx>=this->sz){
            cout<<"Please provide valid index"<<endl;
            return -1;
        }
        if(idx == 0) return removeFirst();
        else if(idx == this->sz-1) return removeLast();
        int i = 1; Node* curr = head;
        while(i!=idx){
            curr = curr->next; i++;
        }
        Node* remove = curr->next;
        int ret = remove->data;
        remove->next = nullptr;
        curr->next = remove->next;
        sz--; return ret;
    }
    Node* getAt(int idx){
        int i = 0;
        Node* curr = head;
        if(i!=idx){
            curr = curr->next; i++;
        }
        return curr;
    }

};


int32_t main(){
    ios::sync_with_stdio(0); cin.tie(0);
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    
}
