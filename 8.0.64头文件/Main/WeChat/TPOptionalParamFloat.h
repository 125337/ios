@interface TPOptionalParamFloat : NSObject
{
    float _value; // +0x8
    float _param1; // +0xc
    float _param2; // +0x10
    unsigned long long _key; // +0x18
}
- (unsigned long long)key;
- (void)setKey:(unsigned long long)arg1;
- (float)value;
- (void)setValue:(float)arg1;
- (float)param1;
- (void)setParam1:(float)arg1;
- (float)param2;
- (void)setParam2:(float)arg1;
@end
