#include <iostream>
#include <memory>
#include <openssl/pem.h>
#include <openssl/x509.h>
#include <sstream>
#include <string>
#include <iomanip>
#include <algorithm>

using namespace std;
std::unique_ptr<BIO, decltype(&BIO_free)> cert{BIO_new_file("cert.pem", "rb"), &BIO_free};
std::unique_ptr<X509, decltype(&X509_free)> x509{PEM_read_bio_X509(cert.get(), NULL, NULL, NULL), &X509_free};
int main()
{
        static const char hex[] = "0123456789ABCDEF";
        unsigned int n;
        unsigned char md[EVP_MAX_MD_SIZE];
        X509_digest(x509.get(), EVP_sha256(), md, &n);
        size_t len;
        std::stringstream ashex;
        //ashex << std::hex << std::setprecision(2);
        for( int i=0; i < n; i++)
        {
                if (i != 0)
                        ashex << ":";
                ashex << std::setw(1) << hex[ (md[i]&0xf0)>>4 ]; ashex << hex[ (md[i]&0x0f)>>0 ];
        }
        std::cout << ashex.str() << std::endl;
  return EXIT_SUCCESS;
}

