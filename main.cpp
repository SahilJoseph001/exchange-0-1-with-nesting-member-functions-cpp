// *** Coded By SahilJoseph *** //
# include <iostream>
# include <string>

class Binary {

    private:
        std::string s;
    
    public:
        void read(void) {

            std::cout<<"Enter the Binary : ";
            std::cin>>s;

            check_binary(); // Nesting Member Funtion.

        }

        void check_binary(void) {

            for (int i = 0; i < s.length(); i++) {

                if (s.at(i) != '0' && s.at(i) != '1') {

                    std::cout<<"Invalid Binary "<<std::endl;
                    exit(0);

                }
                
            }
            
        }

        void exchange_0_1(void) {

            for (int i = 0; i < s.length(); i++) {

                if(s.at(i) == '0') {

                    s.at(i) = '1';

                } else {

                    s.at(i) = '0';

                }

            }

        }

        void print(void) {
            
            std::cout<<"The Exchanged Binary is : "<<s<<std::endl;

        }

};

int main(int argc, char const *argv[]) {

    while (true) {

        Binary b; 

        b.read();
        // b.check_binary(); // Manually Calling Method/Function.
        b.exchange_0_1();
        b.print();

    }

    return 0;
}
