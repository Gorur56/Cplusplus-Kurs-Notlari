//inline expansion

int foo(int x, int y)
{
	return x * x + y * y + 1;
}

int main()
{
	int a = 46, b = 345;

	auto x = foo(a, b);
	
	//Derleyici Inline expansion burada fonksiyonu �a��rmak yerine a�a��daki gibi �al��t�r�r.
	// Kodun maliyetini azalt�r.
	//Derleyici avantaj sa�l�yorsa bu kodu sa�lar. KArar derleyicide oluyor.

	//Inline expansion i�in olmazsa olmaz. Fonksiyonun kodunun tan�m� g�rmeden 
	// Derleyici tan�mlayamaz.

	//Derleyici Inline expansion yapmak zorunda de�ildir.
	//Derleyicinden derleyiciye durum de�i�ebilir.

	auto y = a * a + b * b + 1;

} 
