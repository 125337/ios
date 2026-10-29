@interface WSWebViewPlugin_JSParams : WSWebViewPluginBase
{
    void * dynamicParams; // +0x8
     extReqParamDict; // +0x10
}
- (id)dynamicParams;
- (void)setDynamicParams:(id)arg1;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)renewExtReqParamsWith:(id)arg1;
- (void)setPermanentExtReqParamsWith:(id)arg1;
- (id)mergeExtReqParamsWith:(id)arg1;
- (void)addExtReqParamFor:(id)arg1 value:(id)arg2;
- (void)setDynamicValue:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void).cxx_destruct;
@end
