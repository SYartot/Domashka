void stringLength() {
    const char* text = "Ubuntu console example";
    int length = 0;
    while (text[length] != '\0') length++;

    cout << "String: \"" << text << "\" has length = " << length << endl;
}
