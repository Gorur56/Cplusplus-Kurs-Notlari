//inline expansion

int foo(int x, int y)
{
	return x * x + y * y + 1;
}

int main()
{
	int a = 46, b = 345;

	auto x = foo(a, b);
	
	//Derleyici Inline expansion burada fonksiyonu çaðýrmak yerine aþaðýdaki gibi çalýþtýrýr.
	// Kodun maliyetini azaltýr.
	//Derleyici avantaj saðlýyorsa bu kodu saðlar. KArar derleyicide oluyor.

	//Inline expansion için olmazsa olmaz. Fonksiyonun kodunun tanýmý görmeden 
	// Derleyici tanýmlayamaz.

	//Derleyici Inline expansion yapmak zorunda deðildir.
	//Derleyicinden derleyiciye durum deðiþebilir.

	auto y = a * a + b * b + 1;

} 
