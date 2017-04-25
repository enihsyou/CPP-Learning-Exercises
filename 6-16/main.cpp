int main() {
    int a, *p = &a, &r = a;
    *p = 10;
    r = 5;
    return 0;
}
