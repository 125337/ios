@interface MMNexusStore : NSObject
{
    NSMutableDictionary * _data; // +0x8
    NSMutableDictionary * _eventHandlers; // +0x10
    NSMutableArray * _lifecycleHandlers; // +0x18
    MMWebViewController * _webVC; // +0x20
    NSString * _pageId; // +0x28
    NSString * _instanceId; // +0x30
}
- (id)init;
- (void)setData:(id)arg1;
- (id)getData:(id)arg1;
- (id)snapshot;
- (BOOL)setStorage:(id)arg1 forKey:(id)arg2;
- (id)getStorageForKey:(id)arg1;
- (void)emit:(id)arg1 data:(id)arg2;
- (void)on:(id)arg1 handler:(id /* block */)arg2;
- (void)onLifecycle:(id /* block */)arg1;
- (void)_resetWithInitialData:(id)arg1;
- (BOOL)_dispatchFromJS:(id)arg1 data:(id)arg2 callbackId:(id)arg3;
- (void)_replyCallback:(id)arg1 result:(id)arg2;
- (void)_broadcastLifecycle:(id)arg1;
- (id)_registeredEventNames;
- (id)webVC;
- (void)setWebVC:(id)arg1;
- (id)pageId;
- (void)setPageId:(id)arg1;
- (id)instanceId;
- (void)setInstanceId:(id)arg1;
- (void).cxx_destruct;
@end
