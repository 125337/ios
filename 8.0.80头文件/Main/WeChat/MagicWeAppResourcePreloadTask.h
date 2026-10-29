@interface MagicWeAppResourcePreloadTask : NSObject
{
    BOOL _reportDeliveryInvalidated; // +0x8
    BOOL _permissionRequestSucceeded; // +0x9
    BOOL _cancelled; // +0xa
    unsigned int _reportInvalidationReason; // +0xc
    unsigned int _appServiceType; // +0x10
    unsigned int _errorType; // +0x14
    unsigned int _preloadExperimentEnabled; // +0x18
    WAPackageConfig * _resolvedPackageConfig; // +0x20
    MagicWeAppResourcePreloadTarget * _target; // +0x28
    unsigned long long _taskId; // +0x30
    unsigned long long _preloadTraceId; // +0x38
    unsigned long long _state; // +0x40
    double _startTime; // +0x48
    double _contactStartTime; // +0x50
    double _contactEndTime; // +0x58
    double _trialInfoStartTime; // +0x60
    double _trialInfoEndTime; // +0x68
    double _packageConfigStartTime; // +0x70
    double _packageConfigEndTime; // +0x78
    double _permissionStartTime; // +0x80
    double _permissionEndTime; // +0x88
    WAPluginPermissionInfo * _requestedPermissionInfo; // +0x90
    double _cacheCheckStartTime; // +0x98
    double _cacheCheckEndTime; // +0xa0
    WACacheVersionCheckerMetrics * _cacheMetrics; // +0xa8
    double _expireTime; // +0xb0
    long long _downloadedPackageCount; // +0xb8
    NSString * _errMsg; // +0xc0
    MagicWeAppResourcePreloadResult * _result; // +0xc8
    NSMutableArray * _completions; // +0xd0
    MagicWeAppResourcePreloadOperation * _operation; // +0xd8
    double _readyTime; // +0xe0
}
- (id)init;
- (unsigned int)reportInvalidationReason;
- (void)setReportInvalidationReason:(unsigned int)arg1;
- (BOOL)reportDeliveryInvalidated;
- (void)setReportDeliveryInvalidated:(BOOL)arg1;
- (id)resolvedPackageConfig;
- (void)setResolvedPackageConfig:(id)arg1;
- (id)target;
- (void)setTarget:(id)arg1;
- (unsigned long long)taskId;
- (void)setTaskId:(unsigned long long)arg1;
- (unsigned long long)preloadTraceId;
- (void)setPreloadTraceId:(unsigned long long)arg1;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg1;
- (double)startTime;
- (void)setStartTime:(double)arg1;
- (double)contactStartTime;
- (void)setContactStartTime:(double)arg1;
- (double)contactEndTime;
- (void)setContactEndTime:(double)arg1;
- (double)trialInfoStartTime;
- (void)setTrialInfoStartTime:(double)arg1;
- (double)trialInfoEndTime;
- (void)setTrialInfoEndTime:(double)arg1;
- (double)packageConfigStartTime;
- (void)setPackageConfigStartTime:(double)arg1;
- (double)packageConfigEndTime;
- (void)setPackageConfigEndTime:(double)arg1;
- (double)permissionStartTime;
- (void)setPermissionStartTime:(double)arg1;
- (double)permissionEndTime;
- (void)setPermissionEndTime:(double)arg1;
- (BOOL)permissionRequestSucceeded;
- (void)setPermissionRequestSucceeded:(BOOL)arg1;
- (id)requestedPermissionInfo;
- (void)setRequestedPermissionInfo:(id)arg1;
- (double)cacheCheckStartTime;
- (void)setCacheCheckStartTime:(double)arg1;
- (double)cacheCheckEndTime;
- (void)setCacheCheckEndTime:(double)arg1;
- (id)cacheMetrics;
- (void)setCacheMetrics:(id)arg1;
- (double)expireTime;
- (void)setExpireTime:(double)arg1;
- (BOOL)isCancelled;
- (void)setCancelled:(BOOL)arg1;
- (long long)downloadedPackageCount;
- (void)setDownloadedPackageCount:(long long)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (unsigned int)errorType;
- (void)setErrorType:(unsigned int)arg1;
- (id)errMsg;
- (void)setErrMsg:(id)arg1;
- (id)result;
- (void)setResult:(id)arg1;
- (id)completions;
- (void)setCompletions:(id)arg1;
- (id)operation;
- (void)setOperation:(id)arg1;
- (double)readyTime;
- (void)setReadyTime:(double)arg1;
- (unsigned int)preloadExperimentEnabled;
- (void)setPreloadExperimentEnabled:(unsigned int)arg1;
- (void).cxx_destruct;
@end
