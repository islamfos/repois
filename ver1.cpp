cout << "hello";
int sum(int a, int b) {
	int total = a + b;
	return total;
}
int diff(int a, int b) {
	int dif = a - b;
	return dif;
}
int multi(int a, int b) {
	int product = a * b;
	return product;
}
int x = sum(1, 2);
int y = diff(1, 2);
int z = multi(1, 2);
string op;
cout << "enter op";
cin << op;
if (op == "add") {
	cout << x;
}
if (op == "dif") {
	cout << y;
}
if (op == "multi") {
	cout << z;
}