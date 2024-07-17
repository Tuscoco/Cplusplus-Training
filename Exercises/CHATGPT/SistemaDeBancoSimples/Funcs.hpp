#ifndef Funcs_hpp
#define Funcs_hpp

namespace classe{

    class Conta{

        private:
            int saldo;

        public:
            Conta();
            void deposito(double);
            void sacar(double);

            double getSaldo();

            void imprimirInfo();
            
    };

}

#endif