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

/*template <typename I> std::string n2hexstr(I md, size_t n = sizeof(I)<<1) {
                static const char hex[] = "0123456789ABCDEF";
                std::string rc(n,'0');
                for (size_t i=0, j=(n-1)*4 ; i<n; ++i,j-=4)
                rc[i] = hex[(md>>j) & 0x0f];
		return rc;	
}*/



int main()
{
	//static const char hex[] = "0123456789ABCDEF";
	unsigned int n;
	unsigned char md[EVP_MAX_MD_SIZE];
	X509_digest(x509.get(), EVP_sha256(), md, &n);
      	size_t len;
	std::stringstream ashex;
	/*for(int i=0; i< md; ++i)
		std::cout << std::hex << (int)data[i];*/
	
	//ashex << std::hex << std::setprecision(2);
	for( int i=0; i < n; i++)
	{
		if (i != 0)
			ashex << ":";
		ashex << std::setw(1) << hex[(md[i]&0xf0)>>4]; ashex << hex[(md[i]&0x0f)>>0];
	}
	std::cout << ashex.str() << std::endl;
	
		/*for(int pos = 0; pos < n; pos++)
	{
		ashex << hex[ (md[pos]&0xf0)>>4 ]; ashex << hex[ (md[pos]&0x0f)>>0 ];
		
	}*/
	//std::cout << ashex.str() << std::endl;
	//std::string i = n2hexstr(md, n);
	//std::string str;
	//ashex >> str;
	//std::cout << "SHA256 Fingerprint=" << i<< std::endl;
	//len = sizeof(str);
	//ashex << std::hex << ;
	//std::string result(ashex.str());
	//std::cout << result << std::endl;
	//Как вариант
/*	for(int i =0; i < str.length(); i+=2){
		std::cout << str.substr(i, 2) << ":";
	}	
	std::cout << std::endl;
*/
	//std::cout << str.length()-1 <<std::endl;
	/*int i=0;
	
	while(i < (str.length()-1))
	{	
		std::cout << str.substr(i, 2) << ":";
		i+=2;
	}

	std::cout << std::endl;*/
	//Пока лучший вариант
/*	for(auto it = str.begin(); it != str.end(); it += min<int>(str.end() - it, 2))
        it = (it != str.begin() ? str.insert(it, ':') + 1 : it);

    	cout << str << endl;
*/

	/*for(int i = 0; i < len; i++) {
		std::string totalresult = result.insert(2, ":");
		
		std::cout << totalresult << std::endl;
	}*/
		/*std::cout << result;	
		if (i < (len -1))
		printf(":");
	}
	std::cout << std::endl;*/
	//std::string::iterator it;
	//std::advance(it, )
	/*std::string totalresult = result.insert(2, ":");
	std::cout << totalresult << std::endl;*/
		
	//std::cout << "SHA256 Fingerprint=" << len  /*ashex.str()*/ << std::endl;
	// здесь нужно добавить код
  return EXIT_SUCCESS;
}
