#include<iostream>
using namespace std;

/*
template<typename datatype>
void add(datatype a,datatype b) {
	cout << a + b << endl;
}


int main() {

	int i = 22, j= 33;
	add(i, j);
	string str1 = "yyyy", str2 = "aaaa";
	add((string)"gggg", str2);

	return 0;
}
//========================================================================

template<typename T,typename U>
void fun(T a,U b) {
	cout << a <<" "<< b<< endl;
}

int main() {
	fun<int, string>(12, "ddd");
	fun<int, double>(34, 45.3);
}

//========================================================================

template<typename T>
void bubbleSort(T arr[],int n) {
	for (int i = 0; i < n - 1; i++) 
	{
		for (int j = 0; j < n - 1 - i; j++) 
		{
			if (arr[j] > arr[j + 1])
				swap(arr[j], arr[j + 1]);
		}
	}
}
template<typename T>
void display(T array[],int n) {
	for (int i = 0; i < n; i++)
		cout << array[i]<< endl;
}


int main() {
	int a[] = { 11,66,33,57,89 };
	bubbleSort<int>(a, 5);
	display<int>(a, 5);
	char a2[] = { 'd','a' ,'h' };
	bubbleSort<char>(a2, 3);
	display<char>(a2, 3);

}

//========================================================================

template<typename T>
class Calculate {
	T m1, m2, m3;
	double total, average;

public:
	Calculate() {
		cout << "enter m1,m2 and m3 = " << endl;
		cin >> m1>> m2>> m3;
	}
	void report() {
		total = m1 + m2 + m3;
		average = total / 3;
	}
	void display() {
		cout << m1 <<"\t"<< m2 <<"\t"<< m3<<"\t total = " <<total<< "\t average = " << average<<endl;
	}
};

int main() {
	Calculate<int> ob;
	ob.report();
	ob.display();

	Calculate<double> ob2;
	ob2.report();
	ob2.display();
}

//========================================================================

template<typename T,typename U>
class myClass {
	T a;
	U b;
public:
	myClass(T a, U b);
	void display();
};

template<typename T, typename U>
myClass<T,U>::myClass(T a, U b) {
	this->a = a;
	this->b = b;
}

template<typename T, typename U>
void myClass<T,U>::display() {
	cout << a << "\t" << b<<endl;
}

int main() {
	myClass<int,double> ob(23,56.7);
	ob.display();

	myClass<int, string> ob2(23, "aaaa");
	ob2.display();
}


template<typename T>
void fun(T *a, T *b) {
	cout << *a + *b;
}

int main() {
	int i = 40, j = 50;
	fun(&i,&j);
}

//========================================================================

template<typename T,int size>
class myClass {
public:
	T a[size],total=0;
	myClass() {
		cout << "enter array elements\n";
		for (int i = 0; i < size; i++) {
			cin >> a[i];
		}
	}
	void sum() {
		for (int i = 0; i < size; i++) {
			total += a[i];
		}
	}

	void display() {
		for (int i = 0; i < size; i++) {
			cout << a[i]<<"\t";
		}
		cout << "\nsum of array elements = " << total;
	}
};

int main() {
	myClass<int,5> ob;
	ob.sum();
	ob.display();
}

//========================================================================

template<typename T>
class A {
	
public:
	T val;
	A(T a) {
		val = a;
	}
	void display() {
		cout << "val1 = " << val << endl;
	}
	void setData(T a) {
		val = a;
	}
};

template<typename T>
class B :public A<T> {
	int val2;
public:
	B(T a,int b):A<T>(a) {
		val2 = b;
	}

	void display() {
		cout << "val1 = " << this->val << "\tval2 = " << val2 << endl;
	}

	T getData() {
		return this->val;
	}
};

int main() {
	B<string> ob("eee",23);
	ob.display();
	ob.setData("ddd");
	cout << ob.getData();
}

//========================================================================

template<typename T>
class C {
public:
	T x;
	C(T a) {
		x = a;
	}
	T getX() {
		return x;
	}
};


template<typename T>
class D : public C<T> {
	T x;
public:
	D(T t, T b) : C<T>(t) 
	{
		x = b; 
	}
	void display() 
	{
		//cout << C<T>::x<<endl;
		cout << this->getX() << endl;
		cout << x;
		
	}
};

int main() {
	D<int> ob(12,34);
	ob.display();
}

//========================================================================

int main() {
	string s1 = "aaa",s2 = "yyy",s3 ="aaa";
	//cout << (s1 == s2)<< endl;
	//cout << s1.compare(s2)<< endl;
	//cout << s2.compare(s1) << endl;
	//cout << s3.compare(s1) << endl;
	//cout << (s1 == s3) << endl;
	//cout << s1.length() << endl;
	//cout << s1.size() << endl;
	string s4 = "hi, this is a test, the test is simple";
	string s5 = "test";
	string s6 = "he";
	//cout << s4.find(s5)<<endl;
	//cout << s4.find(s1) << endl;
	//cout << s4.find(s5,9) << endl;
	//cout << s4.find_first_of(s5) << endl;
	//cout << s4.length() << endl;
	//cout << s4.find_last_of(s6);
	//s6.insert(1, s5);
	//s6.insert(1, s5, 0, 2);
	//cout << s6;
	//s6.push_back('f');
	//cout << s6<<endl;
	//s6.pop_back();
	//cout << s6;
	//cout << s6.back();
	//cout << s4.substr(0, 7);
	//s4.erase();
	//cout << s4;
	//cout << s6.capacity();
	//cout << s6.max_size();
	//s6.append(s4);
	//cout << s6;
	//char target[20];
	//s4.copy(target,18);
	//target[18] = '\0';
	//cout << target;

	//string::iterator it = s4.begin();
	//cout << *s4.begin();
	//cout << *it;
	//for (; it < s4.end(); it++) {
	//	cout << *it;
	//}

	string::reverse_iterator rit = s4.rbegin();

	for (; rit != s4.rend(); rit++) {
		cout << *rit;
	}
}
//========================================================================
*/


template<typename T>
class Node {
public:
	T data;
	Node* left, * right;
	Node(T ele) {
		data = ele;
		left = nullptr;
		right = nullptr;
	}
};

template<typename T>
class Bst {
public:
	Node<T>* root;
	Bst() {
		root = nullptr;
	}
	Node<T>* createNode(T ele) {
		Node<T>* temp = new Node<T>(ele);
		return temp;
	}
	Node<T>* insertNode(T ele, Node<T>* root) {
		if (root == nullptr)
			root = createNode(ele);
		else {
			if (ele <= root->data)
				root->left = insertNode(ele, root->left);
			else
				root->right = insertNode(ele, root->right);
		}
		return root;
	}
	void inorder(Node<T>* root) {
		if (root == nullptr)
			return;

		inorder(root->left);
		cout << root->data << "\t";
		inorder(root->right);
	}

	void preorder(Node<T>* root) {
		if (root == nullptr)
			return;

		cout << root->data << "\t";
		preorder(root->left);
		preorder(root->right);
	}

	void postorder(Node<T>* root) {
		if (root == nullptr)
			return;

		postorder(root->left);
		postorder(root->right);
		cout << root->data << "\t";
	}

	int findLevel(int ele, Node<T>* root, int cnt = 1) {
		if (root == nullptr) {
			//cout << "we are here\n";
			return -1;
		}

		if (ele == root->data) {
			return cnt;
		}

		if (ele < root->data) {
			findLevel(ele, root->left, cnt + 1);
		}
		else {
			findLevel(ele, root->right, cnt + 1);
		}

	}
};

int main() {

	Bst<int> ob;
	ob.root = ob.insertNode(45, ob.root);
	ob.root = ob.insertNode(32, ob.root);
	ob.root = ob.insertNode(64, ob.root);
	ob.root = ob.insertNode(12, ob.root);
	ob.root = ob.insertNode(98, ob.root);
	ob.root = ob.insertNode(35, ob.root);
	ob.root = ob.insertNode(84, ob.root);
	ob.root = ob.insertNode(82, ob.root);
	ob.root = ob.insertNode(66, ob.root);
	ob.root = ob.insertNode(19, ob.root);
	//ob.inorder(ob.root);
	cout << ob.findLevel(19, ob.root);

	/*
	cout << endl;
	Bst<string> ob2;
	ob2.root = ob2.insertNode("bat", ob2.root);
	ob2.root = ob2.insertNode("get", ob2.root);
	ob2.root = ob2.insertNode("shovel", ob2.root);
	ob2.inorder(ob2.root);
*/
}
