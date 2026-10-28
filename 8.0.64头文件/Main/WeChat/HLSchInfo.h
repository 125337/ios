@interface HLSchInfo : NSObject
{
    HLCarriorInfo * _carrior; // +0x8
    NSMutableDictionary * _mapApnToSchInfo; // +0x10
    NSRecursiveLock * _lock; // +0x18
    long long _schIndex; // +0x20
    __SCNetworkReachability * _ref; // +0x28
    id _backObserver; // +0x30
}
+ (id)shareInstance;
+ (BOOL)isJailbroken;
- (id)init;
- (void)dealloc;
- (void)setCarrior:(id)arg1;
- (id)carrior;
- (id)mapApnToSchInfo;
- (void)configReachability;
- (void)asyncTouchScheduler;
- (void)touchScheduler;
- (id)settingValueForKey:(id)arg1 appID:(long long)arg2 carrior:(id)arg3;
- (id)ipForDomain:(id)arg1 count:(long long *)arg2;
- (void)switchIP:(id)arg1 domain:(id)arg2 carrior:(id)arg3;
- (void)setMapApnToSchInfo:(id)arg1;
- (id)lock;
- (void)setLock:(id)arg1;
- (long long)schIndex;
- (void)setSchIndex:(long long)arg1;
- (__SCNetworkReachability *)ref;
- (void)setRef:(__SCNetworkReachability *)arg1;
- (id)backObserver;
- (void)setBackObserver:(id)arg1;
- (void).cxx_destruct;
@end
