@interface MttMemoryObjValue : MttMemoryCommon
{
    int _tag; // +0x8
    int _pos; // +0xc
    MttMemory * _obj; // +0x10
}
+ (id)instanceWithPropertyInfo:(id)arg1;
- (id)JSONObject;
- (void).cxx_destruct;
- (int)tag;
- (void)setTag:(int)arg1;
- (int)pos;
- (void)setPos:(int)arg1;
- (id)obj;
- (void)setObj:(id)arg1;
@end

