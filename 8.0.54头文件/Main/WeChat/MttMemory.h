@interface MttMemory : MttMemoryCommon
{
    int _memorySize; // +0x8
    NSMutableArray * _values; // +0x10
}
+ (id)instanceWithPropertyInfo:(id)arg1;
+ (id)fromJSONString:(id)arg1;
- (id)JSONObject;
- (id)JSONString;
- (void).cxx_destruct;
- (int)memorySize;
- (void)setMemorySize:(int)arg1;
- (id)values;
- (void)setValues:(id)arg1;
@end

