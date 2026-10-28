@interface TencentLBSServices : NSObject
{
    NSLock * _lock; // +0x8
    double _lastPostLocationTime; // +0x10
    double _lastWifiTime; // +0x18
}
+ (int)getAppNameWithApiKey:(id)arg1;
+ (id)sharedInstance;
- (id)init;
- (BOOL)updateLastPostLocationTime;
- (BOOL)updateLastWifiTime;
- (id)lock;
- (void)setLock:(id)arg1;
- (double)lastPostLocationTime;
- (void)setLastPostLocationTime:(double)arg1;
- (double)lastWifiTime;
- (void)setLastWifiTime:(double)arg1;
- (void).cxx_destruct;
@end
