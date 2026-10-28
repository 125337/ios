@interface BaseCRC : NSObject
+ (unsigned short)getCRC16_Byte:(unsigned short)arg1 Byte:(unsigned char)arg2;
+ (unsigned short)getCRC16:(unsigned short)arg1 Bytes:(char *)arg2 Length:(unsigned int)arg3;
@end
