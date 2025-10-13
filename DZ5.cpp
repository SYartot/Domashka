void luckyTickets() {
    cout << "Lucky tickets (000000–999999):" << endl;
    int count = 0;

    for (int i = 0; i <= 999999; ++i) {
        int n = i;
        int firstHalf = 0, secondHalf = 0;

        for (int j = 0; j < 3; ++j) {
            secondHalf += n % 10;
            n /= 10;
        }
        for (int j = 0; j < 3; ++j) {
            firstHalf += n % 10;
            n /= 10;
        }

        if (firstHalf == secondHalf) {
            cout << setw(6) << setfill('0') << i << " ";
            count++;
            if (count % 10 == 0) cout << endl;
        }
    }
    cout << "\nTotal lucky tickets: " << count << endl;
}
