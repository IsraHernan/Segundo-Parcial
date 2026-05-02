#ifndef MATRICES_H
#define MATRICES_H

class Matrices{
	public:
		Matrices();
		~Matrices();
		int captura();
		int multiplicarMatriz();
		int imprimirM();
		int imprimirC();
		int geti();
		int seti(int x);
		int getj();
		int setj(int y);
		//int getRe();
		//int setRe(int z);
		int getc();
		int setc(int w);
		int multiplicarConstante();
	protected:
	
	private:
		int matrizA[3][3];
		int matrizB[3][3];
		int tamanioC;
		int i;
		int j;
		int k;
		int c;
		int resultado[3][3];
};

#endif
