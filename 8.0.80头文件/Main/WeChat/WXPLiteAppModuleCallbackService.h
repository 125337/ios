@interface WXPLiteAppModuleCallbackService : NSObject
{
    NSMutableDictionary * _eventCallbackMap; // +0x8
    long long _idCounter; // +0x10
    NSObject<OS_dispatch_queue> * _syncQueue; // +0x18
}
+ (id)sharedInstance;
- (id)init;
- (long long)registerEventCallback:(id)arg1 callback:(id)arg2;
- (void)unregisterEventCallback:(id)arg1 callbackId:(long long)arg2;
- (void)handleLiteAppModuleResponse:(id)arg1 event:(id)arg2 data:(id)arg3;
- (id)eventCallbackMap;
- (void)setEventCallbackMap:(id)arg1;
- (long long)idCounter;
- (void)setIdCounter:(long long)arg1;
- (id)syncQueue;
- (void)setSyncQueue:(id)arg1;
- (void).cxx_destruct;
@end
