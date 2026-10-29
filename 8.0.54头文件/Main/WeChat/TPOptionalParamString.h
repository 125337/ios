@interface TPOptionalParamString : NSObject
{
    unsigned long long _key; // +0x8
    NSString * _value; // +0x10
    NSString * _param1; // +0x18
    NSString * _param2; // +0x20
}
- (unsigned long long)key;
- (void)setKey:(unsigned long long)arg1;
- (id)value;
- (void)setValue:(id)arg1;
- (id)param1;
- (void)setParam1:(id)arg1;
- (id)param2;
- (void)setParam2:(id)arg1;
- (void).cxx_destruct;
@end

