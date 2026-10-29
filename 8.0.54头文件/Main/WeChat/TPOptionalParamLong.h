@interface TPOptionalParamLong : NSObject
{
    unsigned long long _key; // +0x8
    long long _value; // +0x10
    long long _param1; // +0x18
    long long _param2; // +0x20
}
- (unsigned long long)key;
- (void)setKey:(unsigned long long)arg1;
- (long long)value;
- (void)setValue:(long long)arg1;
- (long long)param1;
- (void)setParam1:(long long)arg1;
- (long long)param2;
- (void)setParam2:(long long)arg1;
@end

