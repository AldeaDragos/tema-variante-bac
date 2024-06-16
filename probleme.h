#include "algoritmi.h"

void problema1(int x, int y) {


	int u = 0;
	int nr = 0;

	for (int k = x; k <= y; k++) {
		int s = 0;
		nr = nr + 1;

		for (int t = 1; t <= sqrt(k); t++) {
			s += t * t;
		}

		if (s != u) {
			cout << s << "*" << nr << " ";
			u = s;
			nr = 0;
		}
	}
}

void problema3(int v[], int dim) {

	int smax = 0;
	int dmax = 0;
	int lungime = 0;

	int ct = 0;
	int f[100]{};

	for (int i = 0; i < dim - 1; i++) {
		if (v[i] % 2 == 0) {

			int j = i + 1;

			while (j < dim && v[j] % 2 == 0 && v[i] == v[j]) {
				ct++;
				j++;
			}
			if (j - i > dmax - smax) {
				smax = i;
				dmax = j;
			}
			i = j;
			lungime = smax + dmax;
		}
		
	}
	cout << "Cea mai lunga secventa este de " << lungime << " elemente " << endl;
}

// TEMA
// 1.E_d_informatica_2022_sp_SN_C_var_model

void problema1V1(int n, int m, int c) {

	cout << "Introduceti un numar natural: ";
	cin >> n;

	m = 10;
	if (n == 0) {
		m = 0;
	}
	else {
		do {
			c = n % 10;
			n = n / 10;

			if (c <= m) {
				m = c;
			}
			else {
				m = -1;
			}
		} while (n != 0);
	}
	cout << "Valoarea lui m este: " << m << endl;
}

void problema2V1(int i) {

	int c1 = 0;
	int	c2 = 0;

	for (i = 1; i <= 5; i++)
	{
		if (i == 5) {
			c1 = '2';
			c2 = c1 - 1;
		}
		else if (i == 3) {
			c1 = '-';
			c2 = '>';
		}
		else {
			c1 = '2';
			c2 = c1 - 2;
		}
		cout << c1 << c2;
	}
}

void problema3V1(int n, int x) {

	cout << "Introduceti valoarea lui n: ";
	cin >> n;
	cout << "Introduceti valoarea lui x: ";
	cin >> x;

	int m = n * x;

	for (int i = 0; i < n; i++) {
		cout << m << " ";
		m -= x;
	}
}

void problema3V2() {

	int date[] = { 1,2,3,4,5,3,1,8,6,4 };

	int dim = 10;

	bubbleSort(date, dim);
	for (int i = 0; i < dim; i++) {
		cout << date[i] << " ";
	}
}

// 2.E_d_Informatica_2021_sp_SN_C_Test_02

void problema1V3(int n) {

	cout << "Introduceti un numar natural (n>9): ";
	cin >> n;

	int s = 1;
	int c1 = n % 10;
	n /= 10;
	int c2 = n % 10;

	if (c1 == c2) {
		s = 0;
	}
	else {
		if (c1 < c2) {
			s = -1;
		}
	}

	while ((c1 - c2) * s > 0 && n > 9) {
		c1 = n % 10;
		n /= 10;
		c2 = n % 10;
	}

	cout << s << ' ' << n << endl;

}

// Subiectul 2 , ex 1 , subpunctul a: 1,-21

void solutie1V3() {
	problema1V3(2186310);
}

void problema2V3(int n,int k) {

	cout << "Introduceti valoarea lui n: ";
	cin >> n;
	cout << "Introduceti valoarea lui k: ";
	cin >> k;

	for (int i = k - 1; i > 0; i--) {
		cout << n - (k - i) << " ";
	}
	for (int i = 0; i < n - k + 1; i++) {
		cout << n - 1 << " ";
	}
}

//E_d_Informatica_2021_sp_SN_C_Test_03

void problema1V4(int n) {


	cout << "Introduceti un numar natural nenul: ";
	cin >> n;

	int x = 0, m = 0, p = 1;

	while (x < 10) {
		int cn = n;
		while (cn != 0) {
			int c = cn % 10;
			cn /= 10;

			if (c == x) {
				m = c * p + m;
				p *= 10;
			}
		}
		x += 2;
	}
	cout << m << endl;
}

void solutie1V4() {
	problema1V4(250887);
}

// Subiectul 2 , ex 1 , subpunctul a: 8820

// SUB 3 EX 1


bool nrPrim(int numar) {

	if (numar <= 1) {
		return false;
	}

	for (int i = 2; i * i <= numar; i++) {
		if (numar % i == 0) {
			return false;
		}
	}
	return true;
}

void problema2V4(int n) {

	int suma = 0;

	for (int i = 1; i <= n; i++) {
		if (!nrPrim(i)) {

			if (n % i == 0) {
				suma += i;
			}
		}

	}
	cout << suma << endl;
}


void solutie2V4() {

	int n = 12;


	problema2V4(n);
}

