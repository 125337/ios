@interface WSWebViewPlugin_JSBridge : WSWebViewPluginBase
{
    BOOL _autoSendOnUIInit; // +0x8
    BOOL _bViewAppear; // +0x9
    BOOL _hasSendUiInitEvent; // +0xa
    BOOL _bPreRender; // +0xb
    NSMutableDictionary * _extraUIInitParams; // +0x10
    long long _uiinitRetryCount; // +0x18
}
- (id)init;
- (void)handleEvent:(id)arg1 userInfo:(id)arg2;
- (void)sendVertSearchEntriesDataEvent;
- (void)trySendOnUIInitEventWhenPageExpose;
- (void)trySendOnUIInitEventWhenPreRender;
- (void)trySendOnUIInitEvent;
- (void)doSendOnUIInitEvent;
- (id)getContextMap;
- (BOOL)autoSendOnUIInit;
- (void)setAutoSendOnUIInit:(BOOL)arg1;
- (id)extraUIInitParams;
- (void)setExtraUIInitParams:(id)arg1;
- (BOOL)bViewAppear;
- (void)setBViewAppear:(BOOL)arg1;
- (BOOL)hasSendUiInitEvent;
- (void)setHasSendUiInitEvent:(BOOL)arg1;
- (BOOL)bPreRender;
- (void)setBPreRender:(BOOL)arg1;
- (long long)uiinitRetryCount;
- (void)setUiinitRetryCount:(long long)arg1;
- (void).cxx_destruct;
@end

