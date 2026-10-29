@interface QBNetWorkManager : NSObject
{
    QBReachability * _internetReach; // +0x8
    int _oldAPN; // +0x10
    BOOL _hasCachedWifiAddress; // +0x14
    BOOL _systemProxySet; // +0x15
    int _apnSubtype; // +0x18
    int _curAPN; // +0x1c
    long long _mccCode; // +0x20
    long long _mncCode; // +0x28
    NSString * _mccmncStr; // +0x30
}
+ (id)sharedInstance;
- (id)init;
- (id)internetReach;
- (id)apnString;
- (void)checkNetworkStatus;
- (void)updateAPN:(int)arg1;
- (void)notifyOtherModules;
- (void)getApnSubtype:(id)arg1;
- (void)mttNetworkReachabilityChanged:(id)arg1;
- (long long)networkStatus;
- (void)startListenNetworkChange;
- (void)stopListenNetworkChange;
- (void)checkAPNType;
- (BOOL)isReachable;
- (void).cxx_destruct;
- (long long)mccCode;
- (void)setMccCode:(long long)arg1;
- (long long)mncCode;
- (void)setMncCode:(long long)arg1;
- (int)apnSubtype;
- (void)setApnSubtype:(int)arg1;
- (id)mccmncStr;
- (void)setMccmncStr:(id)arg1;
- (int)curAPN;
- (BOOL)systemProxySet;
- (void)setSystemProxySet:(BOOL)arg1;
@end

