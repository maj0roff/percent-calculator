 #include <iostream>

float unum;
float uperc;
float done; 

void percent_calculator()
{
	done =  (unum * uperc) / 100;
}

using namespace std;
int main()
{
	cout << ("Number :");
	cin >> unum;
	
	cout << ("Percent for count :");
	cin >> uperc;
	
	percent_calculator();
	cout << done;
	
	return 0;
}
