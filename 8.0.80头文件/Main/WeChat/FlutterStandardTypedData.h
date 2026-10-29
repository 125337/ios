@interface FlutterStandardTypedData : NSObject
{
    unsigned char _elementSize; // +0x8
    unsigned int _elementCount; // +0xc
    NSData * _data; // +0x10
    long long _type; // +0x18
}
+ (id)typedDataWithBytes:(id)arg1;
+ (id)typedDataWithInt32:(id)arg1;
+ (id)typedDataWithInt64:(id)arg1;
+ (id)typedDataWithFloat32:(id)arg1;
+ (id)typedDataWithFloat64:(id)arg1;
+ (id)typedDataWithData:(id)arg1 type:(long long)arg2;
- (id)initWithData:(id)arg1 type:(long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)data;
- (long long)type;
- (unsigned int)elementCount;
- (unsigned char)elementSize;
- (void).cxx_destruct;
@end
