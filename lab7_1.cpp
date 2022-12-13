#include<iostream>
#include<string>


using namespace std;


string x;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){                     //uppercase
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){                     //lowercase
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

string palindrome(string x) {

	if (func1(x) == x) {
		return "Yes";
	}

	if (func1(x) != x) {

		x = func2(x);
		
		if (func1(x) == func2(x)) {
			return "Yes";
		}
		else {
			return "No";
		}
        return 0;

	}

    return 0;

}



int main(){
	
    cout << "Input text: ";
	cin >> x;
    cout << "Reversed text: " << func1(x) << endl;


    cout << "Palindrome: " << palindrome(x);
    return 0;
}
