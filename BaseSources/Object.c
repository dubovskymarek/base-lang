inherit Instance;

delegateOfNull;
//default NULL;

Int index_ = 0;

void Construct(){}
void Construct(Object value){}

void =(Object object){}
Bool ==(Object object){return(NO);}
Bool !=(Object object)
{
	if(this == object)
	{
		return(NO);
	}
	else
	{
		return(YES);
	}
}
void Changed(){}
