@interface MttMemoryStrValue : MttMemoryCommon
{
    int _pos; // +0x8
    int _size; // +0xc
    NSString * _value; // +0x10
}
+ (id)instanceWithPropertyInfo:(id)arg1;
- (id)JSONObject;
- (void).cxx_destruct;
- (int)pos;
- (void)setPos:(int)arg1;
- (int)size;
- (void)setSize:(int)arg1;
- (id)value;
- (void)setValue:(id)arg1;
@end
