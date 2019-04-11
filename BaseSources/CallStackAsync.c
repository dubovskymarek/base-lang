inherit Object;

Bool isRunning = YES;

DelegateMethod rootMethod = NULL;

Int codeCallStackIndex = 0;
Int methodCallStackIndex = 0;
Array<Int> codeCallStack;
Array<Array> methodsLocalObjects;
Object returnValue;

void Construct(DelegateMethod method)
{
	codeCallStackIndex = 0;
	methodCallStackIndex = 0;
	codeCallStack = &Array<Int>();
	codeCallStack.Add(0);
	rootMethod = &method;
	methodsLocalObjects = &Array<Array>();
}
/*
CallStackAsync Factory(DelegateMethod method)
{
	CallStackAsync obj;
	obj.codeCallStackIndex = 0;
	obj.methodCallStackIndex = 0;
	obj.codeCallStack = &Array<Int>(0);
	obj.rootMethod = &method;
	obj.methodsLocalObjects = &Array<Array>();
	return(obj);
}/**/
void Resume(Object returnValue)
{
	this.returnValue = &returnValue;
	codeCallStackIndex = 0;
	methodCallStackIndex = 0;
	rootMethod.InvokeWithParamsArray(Array(this));
}
Object GetReturnValue()
{
	return(returnValue);
}
Object GetLocalObject(Int objectIndex)
{
	Array localObjects = &methodsLocalObjects.Item(methodCallStackIndex + 1);
	return(localObjects.Item(objectIndex + 1));
}
void Run()
{
	isRunning = YES;
}
void Pause()
{
	isRunning = NO;
}
Bool IsRunning()
{
	return(isRunning);
}
Bool HasNotCallStack()
{
	Int codeIndex = codeCallStack.Item(codeCallStackIndex + 1);
	return(codeIndex == 0)
}
Bool HasCallStack(Int comparedCodeIndex)
{
	Int codeIndex = codeCallStack.Item(codeCallStackIndex + 1);
	return(comparedCodeIndex == codeIndex)
}
void BeginMethod()
{
	methodCallStackIndex += 1;
}
void RememberLocalObjects(Array localObjects132)
{
	if(methodsLocalObjects.Count() <= methodCallStackIndex - 1)
	{
		methodsLocalObjects.Add(localObjects132);
	}
	else
	{
		methodsLocalObjects.Set(methodCallStackIndex, localObjects132);
	}
}
void EndMethod()
{
	methodCallStackIndex -= 1;
	methodsLocalObjects.RemoveLast();
}
void BeginCode(Int codeIndex)
{
	codeCallStack.Set(codeCallStackIndex + 1, codeIndex);
	codeCallStackIndex += 1;
	if(codeCallStack.Count() <= codeCallStackIndex)
	{
		codeCallStack.Add(0);
	}
}
void EndCode()
{
	codeCallStackIndex -= 1;
	codeCallStack.RemoveLast();
	codeCallStack.Set(codeCallStackIndex + 1, 0);
}