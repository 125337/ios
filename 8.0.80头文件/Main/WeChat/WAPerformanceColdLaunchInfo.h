@interface WAPerformanceColdLaunchInfo : NSObject
{
    long long _preloadType; // +0x8
    unsigned long long _totalStartTimestampMs; // +0x10
    unsigned long long _totalEndTimestampMs; // +0x18
    unsigned long long _getContactStartTimestampMs; // +0x20
    unsigned long long _getContactEndTimestampMs; // +0x28
    unsigned long long _resourcePrepareStartTimestampMs; // +0x30
    unsigned long long _resourcePrepareEndTimestampMs; // +0x38
    unsigned long long _launchStartTimestampMs; // +0x40
    unsigned long long _launchEndTimestampMs; // +0x48
    unsigned long long _packagePrepareStartTimestampMs; // +0x50
    unsigned long long _packagePrepareEndTimestampMs; // +0x58
    unsigned long long _checkJsApiPermissionStartTimestampMs; // +0x60
    unsigned long long _checkJsApiPermissionEndTimestampMs; // +0x68
    unsigned long long _checkAppidABTestPermissionStartTimestampMs; // +0x70
    unsigned long long _checkAppidABTestPermissionEndTimestampMs; // +0x78
    unsigned long long _entryPageNavigationStartTimestampMs; // +0x80
}
- (long long)preloadType;
- (void)setPreloadType:(long long)arg1;
- (unsigned long long)totalStartTimestampMs;
- (void)setTotalStartTimestampMs:(unsigned long long)arg1;
- (unsigned long long)totalEndTimestampMs;
- (void)setTotalEndTimestampMs:(unsigned long long)arg1;
- (unsigned long long)getContactStartTimestampMs;
- (void)setGetContactStartTimestampMs:(unsigned long long)arg1;
- (unsigned long long)getContactEndTimestampMs;
- (void)setGetContactEndTimestampMs:(unsigned long long)arg1;
- (unsigned long long)resourcePrepareStartTimestampMs;
- (void)setResourcePrepareStartTimestampMs:(unsigned long long)arg1;
- (unsigned long long)resourcePrepareEndTimestampMs;
- (void)setResourcePrepareEndTimestampMs:(unsigned long long)arg1;
- (unsigned long long)launchStartTimestampMs;
- (void)setLaunchStartTimestampMs:(unsigned long long)arg1;
- (unsigned long long)launchEndTimestampMs;
- (void)setLaunchEndTimestampMs:(unsigned long long)arg1;
- (unsigned long long)packagePrepareStartTimestampMs;
- (void)setPackagePrepareStartTimestampMs:(unsigned long long)arg1;
- (unsigned long long)packagePrepareEndTimestampMs;
- (void)setPackagePrepareEndTimestampMs:(unsigned long long)arg1;
- (unsigned long long)checkJsApiPermissionStartTimestampMs;
- (void)setCheckJsApiPermissionStartTimestampMs:(unsigned long long)arg1;
- (unsigned long long)checkJsApiPermissionEndTimestampMs;
- (void)setCheckJsApiPermissionEndTimestampMs:(unsigned long long)arg1;
- (unsigned long long)checkAppidABTestPermissionStartTimestampMs;
- (void)setCheckAppidABTestPermissionStartTimestampMs:(unsigned long long)arg1;
- (unsigned long long)checkAppidABTestPermissionEndTimestampMs;
- (void)setCheckAppidABTestPermissionEndTimestampMs:(unsigned long long)arg1;
- (unsigned long long)entryPageNavigationStartTimestampMs;
- (void)setEntryPageNavigationStartTimestampMs:(unsigned long long)arg1;
@end
