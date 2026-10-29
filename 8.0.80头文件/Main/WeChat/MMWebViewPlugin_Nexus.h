@interface MMWebViewPlugin_Nexus : MMWebViewPluginBase
{
    unsigned long long _nexusNavigationGeneration; // +0x8
}
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2 retInfo:(id)arg3;
- (BOOL)_handleShouldStartLoad:(id)arg1;
- (id)_numberFrom:(id)arg1;
- (id)_decodePayload:(id)arg1;
- (void)_reportBridgeError:(id)arg1 url:(id)arg2;
- (void)_handleCgi:(id)arg1 host:(id)arg2;
- (BOOL)_isCgiInteger:(id)arg1 min:(double)arg2 max:(double)arg3;
- (void)_sendCgiResult:(id)arg1 callbackId:(id)arg2;
- (unsigned long long)nexusNavigationGeneration;
- (void)setNexusNavigationGeneration:(unsigned long long)arg1;
@end
