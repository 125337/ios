@interface MttMemoryBasicValue : MttMemoryCommon
{
    BOOL _flag; // +0x8
    int _pos; // +0xc
    int _size; // +0x10
    long long _value; // +0x18
}
+ (id)instanceWithPropertyInfo:(id)arg1;
- (id)JSONObject;
- (int)pos;
- (void)setPos:(int)arg1;
- (int)size;
- (void)setSize:(int)arg1;
- (long long)value;
- (void)setValue:(long long)arg1;
- (BOOL)flag;
- (void)setFlag:(BOOL)arg1;
@end
