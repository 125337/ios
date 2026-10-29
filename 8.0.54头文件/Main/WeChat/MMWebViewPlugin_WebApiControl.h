@interface MMWebViewPlugin_WebApiControl : MMWebViewPluginBase
{
    unsigned int _curMinInJsapiFrequencyBase; // +0x8
    NSMutableDictionary * _dictInvokeCountInMin; // +0x10
    NSMutableDictionary * _dictJsapiFrequencyLimitCount; // +0x18
    NSMutableSet * _setJsApiIndexForFrequnceLimit; // +0x20
}
+ (BOOL)isJsApiCompatibileInChildMode:(id)arg1;
- (id)init;
- (void)initFrequnceLimitSet;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (BOOL)frequencyCheckResultWhenJsApiInvoked:(id)arg1 funcName:(id)arg2;
- (BOOL)compatibilityCheckResultWhenJsApiInvoked:(id)arg1;
- (unsigned int)curMinInJsapiFrequencyBase;
- (void)setCurMinInJsapiFrequencyBase:(unsigned int)arg1;
- (id)dictInvokeCountInMin;
- (void)setDictInvokeCountInMin:(id)arg1;
- (id)dictJsapiFrequencyLimitCount;
- (void)setDictJsapiFrequencyLimitCount:(id)arg1;
- (id)setJsApiIndexForFrequnceLimit;
- (void)setSetJsApiIndexForFrequnceLimit:(id)arg1;
- (void).cxx_destruct;
@end

