@interface MttMemoryMallocValue : MttMemoryCommon
{
    int _tag; // +0x8
    int _size; // +0xc
}
+ (id)instanceWithPropertyInfo:(id)arg1;
- (id)JSONObject;
- (int)tag;
- (void)setTag:(int)arg1;
- (int)size;
- (void)setSize:(int)arg1;
@end

