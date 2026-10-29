@interface TPOptionalParamBool : NSObject
{
    BOOL _value; // +0x8
    BOOL _param1; // +0x9
    BOOL _param2; // +0xa
    unsigned long long _key; // +0x10
}
- (unsigned long long)key;
- (void)setKey:(unsigned long long)arg1;
- (BOOL)value;
- (void)setValue:(BOOL)arg1;
- (BOOL)param1;
- (void)setParam1:(BOOL)arg1;
- (BOOL)param2;
- (void)setParam2:(BOOL)arg1;
@end
