#include <iostream>
#include <memory>
#include <openssl/pem.h>
#include <openssl/x509.h>
#include <sstream>
std::unique_ptr<BIO, decltype(&BIO_free)> cert{BIO_new_file("cert.pem", "rb"), &BIO_free};
std::unique_ptr<X509, decltype(&X509_free)> x509{PEM_read_bio_X509(cert.get(), NULL, NULL, NULL), &X509_free};

int main()
{
	static const char hex[] = "0123456789ABCDEF";
	unsigned int n;
	unsigned char md[EVP_MAX_MD_SIZE];
	X509_digest(x509.get(), EVP_sha256(), md, &n);
      	
	std::stringstream ashex;
	for(int pos = 0; pos < n; pos++)
	{
		ashex << hex[ (md[pos]&0xf0)>>4 ];
        	ashex << hex[ (md[pos]&0x0f)>>0 ];
	}	

	
	std::cout << "SHA256 Fingerprint=" << ashex.str() << std::endl;

	// здесь нужно добавить код
  return EXIT_SUCCESS;
}
