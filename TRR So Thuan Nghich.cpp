
 #include<stdio.h>
 using namespace std;
     
const int DEC_10 = 10;
int isThuanNghich(long long n) {
    int a[20000];
    int dem = 0, i;
    do {
        a[dem++] = (n % DEC_10);
        n = n / DEC_10;
    } while (n > 0);
    // kiem tra tinh thuan nghich
    for (i = 0; i < (dem/2); i++) {
        if (a[i] != a[(dem - i - 1)]) {
            return 0;
        }
    }
    return 1;
}

long long sum(long long x){
     long long tong=0;
     while (x!=0){
          tong+=x%10;
          x/=10;
     }
     return tong;
}

int main() {
    long long count = 0;
    // in ra man hinh cac so thuan nghich co 6 chu so
    for (int i = 100000000; i <= 999999999; i++) {
        if (isThuanNghich(i) && sum(i)==17) {
            count++;
        }
    }
    printf("Tong cac so thuan nghich co 6 chu so la: %d", count);
}