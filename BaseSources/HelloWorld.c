inherit Object;

///
// Example, that demonstates keywords, array, print etc.
///

void Construct()
{
    Console += "Example HelloWorld:" + Console.Endl + Console.Endl;
    
    Array<String> messages;
    
    messages.Add("Hello world!");
    messages.Add("abced123");
    
    for(String msg => messages)
    {
        PrintTextWithFrame(30, 5, msg);
    }
    
    // SampleObject obj;
    // obj.SomeFunction();
    // Int num = obj.GetSomeNumber();
    // Console += "obj.GetSomeNumber " + num;
}

void PrintTextWithFrame(Int w, Int h, String msg)
{
    Bool wasPrintMsg = NO;
	for(Int y => 1 : h)
	{
        if(y == 1)
        {
            Console += "+";
            for(Int x => 2 : w - 1)
            {
                Console += "-";
            }
            Console += "+";
        }
        elseif(y > h / 2 && wasPrintMsg == NO)
        {
            wasPrintMsg = YES;
            Console += "|";
            
            Int start = (w - msg.Length() - 2) / 2 + 1;
            Int end = start + msg.Length() + 1;
            for(Int x => 2 : start)
            {
                Console += ".";
            }
            Console += msg;
            for(Int x => end : w - 1)
            {
                Console += ".";
            }
            Console += "|";
        }
        elseif(y < h)
        {
            Console += "|";
            for(Int x => 2 : w - 1)
            {
                Console += ".";
            }
            Console += "|";
        }
        else
        {
            Console += "+";
            for(Int x => 2 : w - 1)
            {
                Console += "-";
            }
            Console += "+";
        }
        Console += Console.Endl;
	}
}


