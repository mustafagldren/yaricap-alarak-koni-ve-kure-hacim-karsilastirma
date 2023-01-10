/*Kullanıcıdan yarıçap değerini girmesini istiyoruz.Pi değerini sabit 3.14 , yükseklik h=2 olarak atıyoruz.
sonra kurenin hacmiyle koninin hacmini karşılaştırıyoruz. küre ve koninin degerlerini ekrana yazdırıyoruz.
kürenin hacmi büyükse "kure büyük" değilse "koni büyük..." yazıyor.*/


#include <iostream>
using namespace std;
int main()
{
    int r,kurev,koniv;
    int pi = 3.14, h=2;
    cout << "Dairenin yari capini giriniz :";
    cin >> r;
    koniv = (pi * r * r * h) / 3;
    kurev = (4 / 3) * pi * (r * r * r);
    cout << "koninin hacmi :" << koniv << endl;
    cout << "kurenin hacmi :" << kurev << endl;
    if (kurev > koniv) {
        cout << "kure buyuk..." << endl;

    }
    else {
        cout << "koni buyuk..." << endl;
    }

system("pause");
return 0;

}

