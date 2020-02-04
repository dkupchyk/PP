int countPower(int n) {
	double steps = 0;
	for (int i = 0; i < n; i++) {
		steps++;
	}
	return steps;
}

int countQPower(int n) {
	double steps = 0;
	while (n > 0) {
		if (n % 2 == 1) {
			n--;
		}
		n /= 2;
		steps++;
	}
	return steps;
}

int countPowerRec(int n) {
	if (n == 1) { return 1; }
	else { return countPowerRec(n - 1) + 1; }
}

int countQPowerRec(int n) {
	if (n == 1) { return 1; }
	else if (n % 2 == 0) { return countQPowerRec(n / 2) + 1; }
	else { return countQPowerRec((n - 1) / 2) + 1; }
}