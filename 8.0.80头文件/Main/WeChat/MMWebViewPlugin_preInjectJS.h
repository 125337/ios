@interface MMWebViewPlugin_preInjectJS : MMWebViewPluginBase
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (id)getPreInjectScriptStr;
- (void)tryStartOutlinkDetect;
@end
