#include<iostream>
#include<vector>
using namespace std;
/*
void divide(int x,int y) {
	if (y == 0)
		//throw 111;
		throw "Divide by zero exception\n";
	cout << (x / y)<<"\n";
}


int main() {
	int a, b;
	cout << "Enter a,b = ";
	cin >> a >> b;
	try { divide(a, b); cout << "Inside try\n"; }
	catch (int errorcode) {
		cout << "The error code is " << errorcode << " divide by zero error."<<endl;
	}
	//catch (const char* message) {
	//	cout << message;
	//}
	catch (...) {//should be the last catch
		cout << "generic exception\n";
	}
	cout << "We are here." << endl;
}

//========================================================================


class myException :public exception {

	const char* what()const noexcept {
		return " not valid ^-^";
	}

};

int main() {
	//myException ob;
	int age;
	cout << "enter age = \n";
	cin >> age;
	try {
		if (age < 18) {
			throw myException();
		}
	}
	catch (exception& ex) {
		cout << ex.what();
	}
}
//========================================================================

*/
/*
int main(){

	vector<int> vct;
	vct.push_back(10);
	vct.push_back(20);
	try { cout << vct.at(2); }
	catch (exception e) {
		cout << "exception occured: " << e.what();
	}
}
//========================================================================


class Square {
	float side, perimeter, area;
public:
	Square(int len){
		side = len;
	}
	void calculate() {
		perimeter = 4 * side;
		area = side * side;
	}
	friend void result(Square sqr);
};

void result(Square sqr) {
	cout << sqr.perimeter <<"\t"<< sqr.area;
}


int main() {
	Square ob(3);
	ob.calculate();
	result(ob);
}
//========================================================================

class Printer {
	int noOfPages;
	string name;
public:
	Printer(string str, int paper) {
		name = str;
		noOfPages = paper;
	}
	void print(string text) {
		int required = text.length()/8;
		if (required > noOfPages)
			throw "not enough paper\n";

		cout  << text << endl;
		noOfPages -= required;
	}
	friend class Helper;
};

class Helper {
public:
	void printData(Printer ob) {
		cout << ob.name <<" running out of pages, sheets = "<< ob.noOfPages<<endl;
	}
};


int main() {
	Printer ob("hp",4);
	Helper help;
	try{
		cout << "printing the document\n";
	ob.print("hello, how are you?");
	ob.print("hello, how are you?");
	ob.print("hello, how are you?");
	ob.print("hello, how are you?");
	}
	catch (const char* message) {
		cout << message;
		help.printData(ob);
	}
	
}
//========================================================================

int main() {
	pair<int, string> p;
	p = make_pair(11, "eleven");
	cout << "p = " << p.first << "\t" << p.second<<endl;

	pair<int, string> p1 = p;
	cout << "p1 = " << p1.first << "\t" << p1.second << endl;
	p1.first = 45;
	cout << "p = " << p.first << "\t" << p.second << endl;
	cout << "p1 = " << p1.first << "\t" << p1.second << endl;

	pair<int, string>& p2 = p;
	p2.first = 55;
	cout << "p = " << p.first << "\t" << p.second << endl;
	cout << "p1 = " << p1.first << "\t" << p1.second << endl;
	cout << "p2 = " << p2.first << "\t" << p2.second << endl;

}
//========================================================================


int main() {
	int arr[] = { 1,2,3 };
	int arr2[] = { 4,5,6 };
	//array of pairs
	pair<int, int> p[3];
	p[0] = { 1,4 };
	p[1] = { 2,5 };
	p[2] = { 3,6 };
	cout << "the pair array elements are: \n";
	for (int i = 0; i < 3; i++) {
		cout << p[i].first << "\t" << p[i].second << endl;
	}
	swap(p[0], p[2]);
	cout << "the pair array elements are: \n";
	for (int i = 0; i < 3; i++) {
		cout << p[i].first << "\t" << p[i].second << endl;
	}
}
//========================================================================

void print(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\t";
	}cout << endl;
}

int main() {
	vector<int> v;
	int n, ele;
	cout << "enter number of ele:\n";
	cin >> n;
	cout << "enter the elements:\n";
	for (int i = 0; i < n; i++) {
		cin >> ele;
		v.push_back(ele);
	}
	print(v);
}
//========================================================================

void print(vector<int> &v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\t";
	}cout << endl;
	v.push_back(999);
	v.push_back(888);
}

int main() {
	vector<int> v(5,3);
	v.push_back(4);
	print(v);
	print(v);
	v.pop_back();
	print(v);
}
//========================================================================

void display(vector<pair<int,int>> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first <<"\t"<< v[i].second << endl;
	}
}

int main() {
	vector<pair<int, int>> v = { {22,33},{44,55},{77,88} };
	display(v);
}
//========================================================================

void display(vector<pair<int, int>> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << "\t" << v[i].second << endl;
	}
}

int main() {
	vector<pair<int, int>> v;
	int n, key, val;
	cout << "enter value of n: \n";
	cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "enter key & value: \n";
		cin >> key>>val;
		v.push_back({ key,val });
	}
	display(v);
}
//========================================================================

void print(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\t";
	}cout << endl;
}
int main() {
	int N, n, ele;
	cout << "enter value of N: \n";
	cin >> N;
	vector<vector<int>> v;
	for (int i = 0; i < N; i++) {
		cout << "enter value of n: \n";
		cin >> n;
		vector<int> temp;
		for (int j = 0; j < n; j++) {
			cout << "enter ele: \n";
			cin >> ele;
			temp.push_back(ele);
		}
		v.push_back(temp);
	}
	for (int i = 0; i < N; i++) {
		print(v[i]);
	}
}
//========================================================================

void print(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\t";
	}cout << endl;
}

int main() {
	int N, n, ele;
	cout << "enter value of N: \n";
	cin >> N;
	vector<int> *v = new vector<int>[N];
	for (int i = 0; i < N; i++) {
		cout << "enter value of n: \n";
		cin >> n;
		for (int j = 0; j < n; j++) {
			cout << "enter ele: \n";
			cin >> ele;
			v[i].push_back(ele);
		}
	}
	for (int i = 0; i < N; i++) {
		print(v[i]);
	}
}

//========================================================================

void print(vector<int> v) {
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\t";
	}cout << endl;
}

int main() {
	int N, n, ele;
	cout << "enter value of N: \n";
	cin >> N;
	vector<vector<int>> v;
	for (int i = 0; i < N; i++) {
		cout << "enter value of n: \n";
		cin >> n;
		v.push_back(vector<int>());
		for (int j = 0; j < n; j++) {
			cout << "enter ele: \n";
			cin >> ele;
			v[i].push_back(ele);
		}
	}
	for (int i = 0; i < N; i++) {
		print(v[i]);
	}
}

//========================================================================

int main() {
	vector<int> v = { 1,22,3,55,2 };
	cout << "\n";
	vector<int>::iterator it = v.begin();

	for (; it != v.end(); it++) {
		cout << *it << "\t";
	}
}

//========================================================================

int main() {
	vector<pair<int, int>> v = { {1,2},{3,4},{5,6} };
	vector<pair<int, int>>::iterator it = v.begin();
	for (; it != v.end(); it++) {
		//cout << (*it).first << "\t" << (*it).second << endl;
		cout << it->first << "\t" << it->second << endl;
	}
	for (pair<int, int> val : v)
		cout << val.first << "\t" << val.second << endl;

	for(auto val:v)
		cout << val.first << "\t" << val.second << endl;
}*/