inherit Object;

Int n = 123;

void Construct()
{
}
void Destruct()
{
	Console += "This is destructor of sample object" + Console.Endl;
}

void SomeFunction()
{
	Console += "This is some function of some object" + Console.Endl;
}
Int GetSomeNumber()
{
	return n;
}
String GetSomeStr()
{
	return "sample string";
}
