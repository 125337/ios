@interface MttMemoryObj2Value : MttMemoryCommon
{
    int _parent; // +0x8
    int _offset; // +0xc
    int _pos; // +0x10
    MttMemory * _obj; // +0x18
}
+ (id)instanceWithPropertyInfo:(id)arg1;
- (id)JSONObject;
- (void).cxx_destruct;
- (int)parent;
- (void)setParent:(int)arg1;
- (int)offset;
- (void)setOffset:(int)arg1;
- (int)pos;
- (void)setPos:(int)arg1;
- (id)obj;
- (void)setObj:(id)arg1;
@end

