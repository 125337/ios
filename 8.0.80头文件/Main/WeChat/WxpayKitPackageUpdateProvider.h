@interface WxpayKitPackageUpdateProvider : WxpayHostPlatformCapability
{
    NSString * _storeRoot; // +0x8
    NSURLSession * _session; // +0x10
    NSMutableSet * _tasks; // +0x18
    NSLock * _lock; // +0x20
    NSObject<OS_dispatch_queue> * _fileQueue; // +0x28
    NSLock * _environmentLock; // +0x30
    NSDictionary * _environmentSnapshot; // +0x38
    NSDictionary * _pushEnvironmentSnapshot; // +0x40
    double _environmentStamp; // +0x48
}
- (id)initWithEngineRoot:(id)arg1;
- (id)callMethod:(id)arg1 context:(id)arg2 payload:(id)arg3 arguments:(id)arg4 reply:(id /* block */)arg5;
- (id)environmentIncludingPush:(BOOL)arg1;
- (void)refreshEnvironment;
- (id)collectEnvironmentIncludingPush:(BOOL)arg1;
- (id)decrypt:(id)arg1;
- (id)download:(id)arg1 context:(id)arg2 reply:(id /* block */)arg3;
- (id)adopt:(id)arg1 destination:(id)arg2 bytes:(long long *)arg3;
- (id)cancelAll;
- (void)forget:(id)arg1;
- (id)result:(BOOL)arg1 code:(id)arg2 bytes:(long long)arg3;
- (id)text:(id)arg1;
- (id)base64:(id)arg1;
- (id)writablePath:(id)arg1;
- (id)storeRoot;
- (void)setStoreRoot:(id)arg1;
- (id)session;
- (void)setSession:(id)arg1;
- (id)tasks;
- (void)setTasks:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (id)fileQueue;
- (void)setFileQueue:(id)arg1;
- (id)environmentLock;
- (void)setEnvironmentLock:(id)arg1;
- (id)environmentSnapshot;
- (void)setEnvironmentSnapshot:(id)arg1;
- (id)pushEnvironmentSnapshot;
- (void)setPushEnvironmentSnapshot:(id)arg1;
- (double)environmentStamp;
- (void)setEnvironmentStamp:(double)arg1;
- (void).cxx_destruct;
@end
