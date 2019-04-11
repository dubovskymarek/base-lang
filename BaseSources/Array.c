template Type isInheritedFrom Instance;

inherit Object;

register Type arrayItem;

//Type detectGroup isHelpMember = NULL;

void Construct()
{
	Type type = &NULL;
}
void Destruct() inline
{
	Clear();
}

void =(Type value) //inline
{
	Clear();
	this += value;
}
void =(Array<Type> value) //inline
{
	Clear();
	this += value;
}
void +=(Type value) //inline
{
	Add(value);
}
void +=(Array<Type> value) //inline
{
	for(Type item => value)
	{
		Add(item);
	}
}

void Add(Type item) //inline
{
	AddPrivate(item);
//	register item as arrayItem;
}
void Insert(Int index, Type item) inline
{
	InsertPrivate(index, item);
//	register item as arrayItem;
}
void Remove(Type item) inline
{
//	unregister item as arrayItem;
	RemovePrivate(item);
}
void Set(Int index, Type item) inline
{
	Type removingItem = &Item(index);
	unregister removingItem as arrayItem;
	SetPrivate(index, item);
//	register item as arrayItem;
}
void RemoveAt(Int index) //inline
{
	Type removingItem = &Item(index);
	unregister removingItem as arrayItem;
	RemoveAtPrivate(index);
}

Type [](Int index) get arrayItem
{
	return(Item(index));
}
Type Item(Int index) get arrayItem
{
	return(NULL);
}
Int Index(Type item) inverseOf Item
{
	return(0);
}
Type First() get arrayItem
{
	return(this.Item(1));
}
Type Last() get arrayItem
{
	return(this.Item(Count()));
}
Int Count()
{
	return(0);
}

void Clear() //inline
{
	while(Count() > 0)
	{
		Type removingItem = &First();
		unregister removingItem as arrayItem;
		RemoveAtPrivate(1);
	}
}

void RemoveFirst() //inline
{
	Type removingItem = &First();
	unregister removingItem as arrayItem;
	RemoveAtPrivate(1);
}
void RemoveLast() //inline
{
	Type removingItem = &Last();
	unregister removingItem as arrayItem;
	RemoveAtPrivate(Count());
}
void RemoveAll() //inline
{
	Clear();
}
void Changed(){}

void AddPrivate(Type item) {}
void InsertPrivate(Int index, Type item) {}
void SetPrivate(Int index, Type item) {}
void RemovePrivate(Type item){}
void RemoveAtPrivate(Int index) {}

