inherit Object;

Float E;
Float LN2;
Float LN10;
Float LOG2E;
Float LOG10E;
Float PI = 3.14159265359;
Float SQRT1DIV2;
Float SQRT2;

Byte Byte1(Int value){}
Byte Byte2(Int value){}
Byte Byte3(Int value){}
Byte Byte4(Int value){}

Byte Short1(Int value){}
Byte Short2(Int value){}

Short ShortFromBytes(Byte byte1, Byte byte2){}
Int IntFrom2Bytes(Byte byte1, Byte byte2){}
Int IntFromBytes(Byte byte1, Byte byte2, Byte byte3, Byte byte4){}

Int GetIntByChangeByte(Int number, Int index, Byte value){}
Int GetIntByChangeShort(Int number, Int index, Short value){}

Float Abs(Float value){}
Float Acos(Float value){}
Float Asin(Float value){}
Float Atan(Float value){}
Float Atan2(Float value1, Float value2){}
Float Ceil(Float value){}
Float Cos(Float value){}
Float Exp(Float value){}
Float Floor(Float value){}
Float Log(Float value){}
Float Max(Float value1, Float value2){}
Float Min(Float value1, Float value2){}
Float Pow(Float value1, Float value2){}
Int Rand(){}
Int RandWithNeg(){}
Float Round(Float value){}
Float Sin(Float value){}
Float Sqrt(Float value){}
Float Tan(Float value){}