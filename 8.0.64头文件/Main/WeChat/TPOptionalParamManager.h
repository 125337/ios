@interface TPOptionalParamManager : NSObject
{
    NSMutableDictionary * _paramNameDic; // +0x8
    NSMutableDictionary * _paramValueDic; // +0x10
}
+ (id)shaderManager;
- (id)init;
- (void)paramDictionarySetTPOptionalParam;
- (void)addParamValue:(id)arg1 forKey:(unsigned long long)arg2;
- (void)addParamValue:(id)arg1 forString:(id)arg2;
- (unsigned long long)getOptionalIDForKey:(id)arg1;
- (id)getParamValueForkey:(id)arg1;
- (id)getParamKeyArray;
- (id)paramNameDic;
- (void)setParamNameDic:(id)arg1;
- (id)paramValueDic;
- (void)setParamValueDic:(id)arg1;
- (void).cxx_destruct;
@end
