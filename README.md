# base-lang ©
Demo version of "base" programming language and compiler

This project contains runtime version of experimental compiler for new programming language "base".<br/>
Demo allows compile max 20 classes (files).

<b>Requirements</b><br/>
Mac OS

<b>Project structure</b><br/>

* BaseSources - all programs and classes written in "base" language. One file is one class with same name (without extension).
* Build - output directory of builded programs
* Cache - special cache of compiled sources
* Dictionaries - contains special editable "language to language" dictionary for translation to multiply various platforms (this version contains C++ and HTML/Javascript)
* Transformations - transforms code to lower level abstraction (replace keywords like as "for" to "while", etc.)

<b>Building from source</b><br/>
Open terminal, and go to base-lang-master and just run these commands

./base HelloWorld Cpp

or 

./base HelloWorld HTML


Cpp example print output into terminal after compiling process.

HTML open Safari and print Hello world example

<b>Credits</b><br/>
"base" compiler was developed by Marek Dubovsky dubovskymarek@icloud.com<br/>

<b>Very quick introduction</b><br/>
Simple hello world app:

```c
/// 
/// HelloWorld class
///
inherit Object;

void Construct()
{
  Console += "Hello world!" + Console.Endl;
}
```

Variables:
```c
  Int i = 123;
  Short si = 456;
  String str = "abc";
  Bool b = YES;
```

Objects:
```c
  SampleObject obj;
  
  obj.SomeFunction();
  String str = obj.GetSomeStr();
  
  SampleObject objRef = &obj;
  objRef.SomeFunction();
```

Basic print:
```c
  Console += "abc";
  Console += str;
  Console += Console.Endl;
  Console = "";///Clean
```

Keywords if, elseif, else:
```c
  Bool b1 = NO;
  Bool b2 = YES;
  ...
  if(b1 == YES)
  {
  }
  elseif(b2 == NO)
  {
  }
  else
  {
  }
```

Loops:
```c
  Int i = 0;
  while(i < 10)
  {
    ...
  }
  
  for(Int j => 1 : 10)
  {
    ...
  }
  
  Array<Int> numbers;
  ...
  for(Int num => numbers)
  {
  }
  
  Int k = 0;
  while(k < 10)
  {
    if(k == 5)
    {
      continue;
    }
    elseif(k == 6)
    {
      break;
    }
    ...
  }
```

Classes:
```c
///
/// Parent.c file
///
Int parentVar = 1;

void Construct()
{
}
Int SomeMethod(Int num)
{
  return 0;
}
Bool IsParentVirtualMethod()
{
  return YES;
}

///
/// Child.c file
///
Int childVar = 2;

void Construct()
{
}

Bool IsParentVirtualMethod()
{
  return NO;
}
```
