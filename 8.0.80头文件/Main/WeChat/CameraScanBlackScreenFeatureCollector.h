@interface CameraScanBlackScreenFeatureCollector : NSObject
{
    BOOL _hasAuthorizeAlert; // +0x8
    long long _firstFrameCost; // +0x10
    long long _firstScanCost; // +0x18
    long long _errorType; // +0x20
    CameraScanBlackScreenHistory * _history; // +0x28
    NSString * _cachedDeviceModel; // +0x30
    NSString * _cachedOsVersion; // +0x38
    NSString * _cachedWechatVersion; // +0x40
}
- (id)init;
- (void)_cacheStaticFeatures;
- (id)_getDeviceModelString;
- (id)_marketingNameForMachineId:(id)arg1;
- (id)collectFeatures;
- (void)loadHistory;
- (void)recordSessionEnd:(BOOL)arg1 firstFrameCost:(long long)arg2 errorType:(long long)arg3 pressType:(long long)arg4 didRecover:(BOOL)arg5;
- (id)currentHistory;
- (long long)firstFrameCost;
- (void)setFirstFrameCost:(long long)arg1;
- (long long)firstScanCost;
- (void)setFirstScanCost:(long long)arg1;
- (long long)errorType;
- (void)setErrorType:(long long)arg1;
- (BOOL)hasAuthorizeAlert;
- (void)setHasAuthorizeAlert:(BOOL)arg1;
- (id)history;
- (void)setHistory:(id)arg1;
- (id)cachedDeviceModel;
- (void)setCachedDeviceModel:(id)arg1;
- (id)cachedOsVersion;
- (void)setCachedOsVersion:(id)arg1;
- (id)cachedWechatVersion;
- (void)setCachedWechatVersion:(id)arg1;
- (void).cxx_destruct;
@end
