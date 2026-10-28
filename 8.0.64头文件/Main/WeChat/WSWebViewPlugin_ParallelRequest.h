@interface WSWebViewPlugin_ParallelRequest : WSWebViewPluginBase <LocalJSEventHandlerContextDelegate>
{
     pRequestID; // +0x8
     parallelHandlerDict; // +0x10
     eventResponseDict; // +0x18
     $__lazy_storage_$_tempWebview; // +0x20
}
- (BOOL)tryParallelAsyncWebSearch:(unsigned long long)arg1 sessionID:(id)arg2 scene:(unsigned int)arg3 query:(id)arg4 bizType:(unsigned long long)arg5 initExtParams:(id)arg6 isFromNewVoice:(BOOL)arg7;
- (BOOL)shouldEnabelParallelReqSearch;
- (BOOL)containsKey:(id)arg1 key:(id)arg2;
- (id)genReqSearchParams:(id)arg1 isFromNewVoice:(BOOL)arg2;
- (unsigned long long)pRequestID;
- (void)setPRequestID:(unsigned long long)arg1;
- (BOOL)tryUseCacheWithRealEventHandler:(id)arg1;
- (void)dispatch:(id)arg1 params:(id)arg2;
- (void)sendEvent:(id)arg1 handler:(id)arg2 result:(id)arg3;
- (void)eventEndWithHandler:(id)arg1 result:(id)arg2;
- (unsigned long long)getLocalJSBusinessType;
- (id)getWebViewOwner;
- (id)webView;
- (id)init;
- (void).cxx_destruct;
@end
