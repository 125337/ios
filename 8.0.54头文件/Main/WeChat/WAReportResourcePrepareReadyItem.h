@interface WAReportResourcePrepareReadyItem : WAReportBaseItem
{
    BOOL _hasDownloadCode; // +0x8
    unsigned int _pkgSize; // +0xc
    unsigned int _isLaunchSync; // +0x10
    unsigned int _isContactSync; // +0x14
    unsigned int _launchType; // +0x18
    unsigned int _isPreload; // +0x1c
    unsigned int _requestType; // +0x20
    unsigned int _isCheckJsApiInfoSync; // +0x24
    unsigned int _runningState; // +0x28
    unsigned int _isCheckAppidABTestInfoSync; // +0x2c
    unsigned int _webviewType; // +0x30
    unsigned long long _costTimeInMs; // +0x38
    unsigned long long _startTimeStampInMs; // +0x40
    unsigned long long _endTimeStampInMs; // +0x48
    unsigned long long _launchReadyT; // +0x50
    unsigned long long _packageReadyT; // +0x58
    unsigned long long _checkJsApiInfoReadyT; // +0x60
    unsigned long long _checkAppidABTestInfoReadyT; // +0x68
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (unsigned long long)costTimeInMs;
- (void)setCostTimeInMs:(unsigned long long)arg1;
- (unsigned long long)startTimeStampInMs;
- (void)setStartTimeStampInMs:(unsigned long long)arg1;
- (unsigned long long)endTimeStampInMs;
- (void)setEndTimeStampInMs:(unsigned long long)arg1;
- (unsigned int)pkgSize;
- (void)setPkgSize:(unsigned int)arg1;
- (unsigned int)isLaunchSync;
- (void)setIsLaunchSync:(unsigned int)arg1;
- (unsigned int)isContactSync;
- (void)setIsContactSync:(unsigned int)arg1;
- (BOOL)hasDownloadCode;
- (void)setHasDownloadCode:(BOOL)arg1;
- (unsigned int)launchType;
- (void)setLaunchType:(unsigned int)arg1;
- (unsigned int)isPreload;
- (void)setIsPreload:(unsigned int)arg1;
- (unsigned long long)launchReadyT;
- (void)setLaunchReadyT:(unsigned long long)arg1;
- (unsigned long long)packageReadyT;
- (void)setPackageReadyT:(unsigned long long)arg1;
- (unsigned int)requestType;
- (void)setRequestType:(unsigned int)arg1;
- (unsigned int)isCheckJsApiInfoSync;
- (void)setIsCheckJsApiInfoSync:(unsigned int)arg1;
- (unsigned long long)checkJsApiInfoReadyT;
- (void)setCheckJsApiInfoReadyT:(unsigned long long)arg1;
- (unsigned int)runningState;
- (void)setRunningState:(unsigned int)arg1;
- (unsigned int)isCheckAppidABTestInfoSync;
- (void)setIsCheckAppidABTestInfoSync:(unsigned int)arg1;
- (unsigned long long)checkAppidABTestInfoReadyT;
- (void)setCheckAppidABTestInfoReadyT:(unsigned long long)arg1;
- (unsigned int)webviewType;
- (void)setWebviewType:(unsigned int)arg1;
@end

