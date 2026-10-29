@interface WxpayStoreRegistry : NSObject
{
    id /* block */ _create; // +0x8
    id /* block */ _release; // +0x10
    id /* block */ _schedule; // +0x18
    id /* block */ _probe; // +0x20
    NSMutableDictionary * _stores; // +0x28
    NSLock * _lock; // +0x30
}
+ (id)sharedRegistry;
- (id)initWithCreate:(id /* block */)arg1 release:(id /* block */)arg2 schedule:(id /* block */)arg3 probe:(id /* block */)arg4;
- (BOOL)acquireAppId:(id)arg1 packagePath:(id)arg2 aliveSeconds:(long long)arg3;
- (void)releaseAppId:(id)arg1 packagePath:(id)arg2;
- (void)probeAppId:(id)arg1 entry:(id)arg2;
- (void)failAppId:(id)arg1 entry:(id)arg2;
- (void)expireAppId:(id)arg1 entry:(id)arg2 generation:(unsigned long long)arg3;
- (void)releaseRetainedStores;
- (long long)referenceCountForAppId:(id)arg1;
- (void).cxx_destruct;
@end
