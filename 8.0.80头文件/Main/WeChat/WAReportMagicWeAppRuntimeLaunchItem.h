@interface WAReportMagicWeAppRuntimeLaunchItem : WAReportBaseItem
{
    unsigned int _eventType; // +0x8
    unsigned int _debugModeType; // +0xc
    unsigned int _targetAppVersion; // +0x10
    unsigned int _bizType; // +0x14
    unsigned int _appServiceType; // +0x18
    unsigned int _targetAppServiceType; // +0x1c
    unsigned int _preloadRequestResult; // +0x20
    unsigned int _success; // +0x24
    unsigned int _errorType; // +0x28
    int _errorCode; // +0x2c
    int _contactCostMs; // +0x30
    int _trialInfoCostMs; // +0x34
    int _packageConfigCostMs; // +0x38
    int _permissionCostMs; // +0x3c
    int _cacheCheckCostMs; // +0x40
    int _cachePrepareCostMs; // +0x44
    int _getDownloadURLCostMs; // +0x48
    int _packageDownloadCostMs; // +0x4c
    int _packageFinalizeCostMs; // +0x50
    unsigned int _downloadFormat; // +0x54
    int _encodedContentLength; // +0x58
    int _finalPackageBytes; // +0x5c
    unsigned int _downloadTransport; // +0x60
    int _cacheCheckErrorCode; // +0x64
    int _downloadedPackageCount; // +0x68
    unsigned int _preloadConsumeState; // +0x6c
    int _preloadStartToConsumeMs; // +0x70
    int _preloadReadyToConsumeMs; // +0x74
    int _preloadConsumeWaitMs; // +0x78
    int _launchTotalMs; // +0x7c
    int _resourcePrepareTotalMs; // +0x80
    unsigned int _preloadExperimentEnabled; // +0x84
    unsigned int _preloadInvalidationReason; // +0x88
    unsigned int _preloadInvalidationSource; // +0x8c
    unsigned int _preloadPreviousState; // +0x90
    unsigned long long _preloadTraceId; // +0x98
    unsigned long long _launchId; // +0xa0
    NSString * _subpackage; // +0xa8
    NSString * _errorMsg; // +0xb0
    NSString * _attachProfileJson; // +0xb8
}
- (id)init;
- (int)reportID;
- (void)makeSafeString;
- (id)description;
- (id)reportString;
- (unsigned int)eventType;
- (void)setEventType:(unsigned int)arg1;
- (unsigned long long)preloadTraceId;
- (void)setPreloadTraceId:(unsigned long long)arg1;
- (unsigned long long)launchId;
- (void)setLaunchId:(unsigned long long)arg1;
- (unsigned int)debugModeType;
- (void)setDebugModeType:(unsigned int)arg1;
- (unsigned int)targetAppVersion;
- (void)setTargetAppVersion:(unsigned int)arg1;
- (id)subpackage;
- (void)setSubpackage:(id)arg1;
- (unsigned int)bizType;
- (void)setBizType:(unsigned int)arg1;
- (unsigned int)appServiceType;
- (void)setAppServiceType:(unsigned int)arg1;
- (unsigned int)targetAppServiceType;
- (void)setTargetAppServiceType:(unsigned int)arg1;
- (unsigned int)preloadRequestResult;
- (void)setPreloadRequestResult:(unsigned int)arg1;
- (unsigned int)success;
- (void)setSuccess:(unsigned int)arg1;
- (unsigned int)errorType;
- (void)setErrorType:(unsigned int)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
- (id)errorMsg;
- (void)setErrorMsg:(id)arg1;
- (int)contactCostMs;
- (void)setContactCostMs:(int)arg1;
- (int)trialInfoCostMs;
- (void)setTrialInfoCostMs:(int)arg1;
- (int)packageConfigCostMs;
- (void)setPackageConfigCostMs:(int)arg1;
- (int)permissionCostMs;
- (void)setPermissionCostMs:(int)arg1;
- (int)cacheCheckCostMs;
- (void)setCacheCheckCostMs:(int)arg1;
- (int)cachePrepareCostMs;
- (void)setCachePrepareCostMs:(int)arg1;
- (int)getDownloadURLCostMs;
- (void)setGetDownloadURLCostMs:(int)arg1;
- (int)packageDownloadCostMs;
- (void)setPackageDownloadCostMs:(int)arg1;
- (int)packageFinalizeCostMs;
- (void)setPackageFinalizeCostMs:(int)arg1;
- (unsigned int)downloadFormat;
- (void)setDownloadFormat:(unsigned int)arg1;
- (int)encodedContentLength;
- (void)setEncodedContentLength:(int)arg1;
- (int)finalPackageBytes;
- (void)setFinalPackageBytes:(int)arg1;
- (unsigned int)downloadTransport;
- (void)setDownloadTransport:(unsigned int)arg1;
- (int)cacheCheckErrorCode;
- (void)setCacheCheckErrorCode:(int)arg1;
- (int)downloadedPackageCount;
- (void)setDownloadedPackageCount:(int)arg1;
- (unsigned int)preloadConsumeState;
- (void)setPreloadConsumeState:(unsigned int)arg1;
- (int)preloadStartToConsumeMs;
- (void)setPreloadStartToConsumeMs:(int)arg1;
- (int)preloadReadyToConsumeMs;
- (void)setPreloadReadyToConsumeMs:(int)arg1;
- (int)preloadConsumeWaitMs;
- (void)setPreloadConsumeWaitMs:(int)arg1;
- (int)launchTotalMs;
- (void)setLaunchTotalMs:(int)arg1;
- (int)resourcePrepareTotalMs;
- (void)setResourcePrepareTotalMs:(int)arg1;
- (unsigned int)preloadExperimentEnabled;
- (void)setPreloadExperimentEnabled:(unsigned int)arg1;
- (unsigned int)preloadInvalidationReason;
- (void)setPreloadInvalidationReason:(unsigned int)arg1;
- (unsigned int)preloadInvalidationSource;
- (void)setPreloadInvalidationSource:(unsigned int)arg1;
- (unsigned int)preloadPreviousState;
- (void)setPreloadPreviousState:(unsigned int)arg1;
- (id)attachProfileJson;
- (void)setAttachProfileJson:(id)arg1;
- (void).cxx_destruct;
@end
