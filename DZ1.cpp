void sumEvenNumbers() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    if (a > b) swap(a, b);

    int sum = 0;
    for (int i = a; i <= b; ++i) {
        if (i % 2 == 0) sum += i;
    }

    cout << "Sum of even numbers between " << a << " and " << b << " = " << sum << endl;
}
