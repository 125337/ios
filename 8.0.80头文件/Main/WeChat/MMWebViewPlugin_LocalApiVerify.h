@interface MMWebViewPlugin_LocalApiVerify : MMWebViewPluginBase
{
    NSArray * _localJSApiVerifyRules; // +0x8
}
- (id)init;
- (void)setupLocalJSApiVerifyRules;
- (void)addRuleWithJSAPIName:(id)arg1 filePatterns:(id)arg2;
- (BOOL)canVerifyJSApiLocally:(id)arg1;
- (unsigned char)getJSApiPermission:(id)arg1 url:(id)arg2;
- (id)matchedPrefixForUrl:(id)arg1 matchPrefixes:(id)arg2;
- (id)matchedPatternForFilePath:(id)arg1 matchPatterns:(id)arg2;
- (void).cxx_destruct;
@end
