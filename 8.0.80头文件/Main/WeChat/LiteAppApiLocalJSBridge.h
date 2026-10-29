@interface LiteAppApiLocalJSBridge : LiteAppJsApi <LocalJSEventHandlerContextDelegate, WebSearchMgrDelegate>
{
    MMContext * m_context; // +0x20
    LocalJSEventHandler_BaseEvent * _handler; // +0x28
    FTSWebSearchMgr * _webSearchMgr; // +0x30
}
- (id)init;
- (void)dealloc;
- (void)invokeJsApi:(id)arg1 param:(id)arg2 sourceType:(int)arg3;
- (id)webSearchMgr;
- (void)onSearchRecmdDataSuccess:(id)arg1;
- (void)onSearchRecmdDataFail:(id)arg1;
- (void)onWebSearchDataChanged:(id)arg1;
- (void)onWebSearchDataFail:(id)arg1;
- (id)makeEmptyJSONResultParam:(BOOL)arg1;
- (id)makeNetworkFailParam:(BOOL)arg1;
- (void)eventEndWithHandler:(id)arg1 result:(id)arg2;
- (void)sendEvent:(id)arg1 handler:(id)arg2 result:(id)arg3;
- (void)handlerEndWithEvent:(id)arg1 handler:(id)arg2 result:(id)arg3;
- (unsigned long long)getLocalJSBusinessType;
- (id)getWebViewOwner;
- (id)webView;
- (id)handler;
- (void)setHandler:(id)arg1;
- (void)setWebSearchMgr:(id)arg1;
- (void).cxx_destruct;
@end
