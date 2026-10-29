@interface MBJsApiAdapterManager : NSObject
{
    NSMapTable * _adapterMap; // +0x8
    NSObject<OS_dispatch_queue> * _syncQueue; // +0x10
}
- (id)init;
- (void)registerEnvId:(unsigned long long)arg1 adapter:(id)arg2;
- (void)unregisterEnvId:(unsigned long long)arg1;
- (void)invokeEnvId:(unsigned long long)arg1 apiName:(id)arg2 apiData:(id)arg3 callbackId:(unsigned long long)arg4;
- (void).cxx_destruct;
@end
