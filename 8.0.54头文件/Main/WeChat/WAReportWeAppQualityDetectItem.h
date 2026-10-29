@interface WAReportWeAppQualityDetectItem : WAReportBaseItem
{
    BOOL _currentPageRecoverReloaded; // +0x8
    BOOL _hasHtmlWeb; // +0x9
    BOOL _isDisplayingPageSheet; // +0xa
    BOOL _isSkyline; // +0xb
    BOOL _isByteCodeEnabled; // +0xc
    unsigned int _qualityIssueType; // +0x10
    unsigned int _qualityIssueSubType; // +0x14
    unsigned int _pageCount; // +0x18
    unsigned int _whiteScreenDetectThreshold; // +0x1c
    unsigned int _whiteScreenColorRatio; // +0x20
    unsigned int _whiteScreenDoubleCheckScene; // +0x24
    unsigned int _whiteScreenDoubleCheckReason; // +0x28
    unsigned int _gameRenderMode; // +0x2c
    unsigned int _currentWebViewResponsibleType; // +0x30
    unsigned int _currentWebViewAliveFailedCount; // +0x34
    unsigned int _currentServiceAliveFailedCount; // +0x38
    unsigned long long _qualityIssueTimeStampInMs; // +0x40
    NSString * _lastNPagePath; // +0x48
    NSString * _qualityIssuePageLastError; // +0x50
    NSString * _qualityIssueServiceLastError; // +0x58
    NSString * _runtimeContext; // +0x60
    NSString * _qualityIssueHappenPagePath; // +0x68
    NSString * _openType; // +0x70
    NSString * _navId; // +0x78
    unsigned long long _appRouteStartTimeInMs; // +0x80
    unsigned long long _initReadyReceiveTimeInMs; // +0x88
    unsigned long long _recoverReloadStartTimeInMs; // +0x90
    unsigned long long _recoverReloadInitReadyReceiveTimeInMs; // +0x98
    unsigned long long _initReadyLastWhiteScreenDetectedTimeInMs; // +0xa0
    NSString * _whiteScreenHexColor; // +0xa8
    NSString * _modalOrToastStr; // +0xb0
    unsigned long long _currentWebViewLastAliveTimeStampInMs; // +0xb8
    unsigned long long _currentWebViewLastAliveFailedTimeStampInMs; // +0xc0
    unsigned long long _currentServiceLastAliveTimeStampInMs; // +0xc8
    unsigned long long _currentServiceLastAliveFailedTimeStampInMs; // +0xd0
    unsigned long long _currentWebViewInitTimeStampInMs; // +0xd8
    unsigned long long _currentWebViewRouteIntensionTimeStampInMs; // +0xe0
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (unsigned int)qualityIssueType;
- (void)setQualityIssueType:(unsigned int)arg1;
- (unsigned int)qualityIssueSubType;
- (void)setQualityIssueSubType:(unsigned int)arg1;
- (unsigned long long)qualityIssueTimeStampInMs;
- (void)setQualityIssueTimeStampInMs:(unsigned long long)arg1;
- (unsigned int)pageCount;
- (void)setPageCount:(unsigned int)arg1;
- (id)lastNPagePath;
- (void)setLastNPagePath:(id)arg1;
- (id)qualityIssuePageLastError;
- (void)setQualityIssuePageLastError:(id)arg1;
- (id)qualityIssueServiceLastError;
- (void)setQualityIssueServiceLastError:(id)arg1;
- (id)runtimeContext;
- (void)setRuntimeContext:(id)arg1;
- (id)qualityIssueHappenPagePath;
- (void)setQualityIssueHappenPagePath:(id)arg1;
- (unsigned int)whiteScreenDetectThreshold;
- (void)setWhiteScreenDetectThreshold:(unsigned int)arg1;
- (id)openType;
- (void)setOpenType:(id)arg1;
- (id)navId;
- (void)setNavId:(id)arg1;
- (BOOL)currentPageRecoverReloaded;
- (void)setCurrentPageRecoverReloaded:(BOOL)arg1;
- (BOOL)hasHtmlWeb;
- (void)setHasHtmlWeb:(BOOL)arg1;
- (unsigned long long)appRouteStartTimeInMs;
- (void)setAppRouteStartTimeInMs:(unsigned long long)arg1;
- (unsigned long long)initReadyReceiveTimeInMs;
- (void)setInitReadyReceiveTimeInMs:(unsigned long long)arg1;
- (unsigned long long)recoverReloadStartTimeInMs;
- (void)setRecoverReloadStartTimeInMs:(unsigned long long)arg1;
- (unsigned long long)recoverReloadInitReadyReceiveTimeInMs;
- (void)setRecoverReloadInitReadyReceiveTimeInMs:(unsigned long long)arg1;
- (unsigned long long)initReadyLastWhiteScreenDetectedTimeInMs;
- (void)setInitReadyLastWhiteScreenDetectedTimeInMs:(unsigned long long)arg1;
- (id)whiteScreenHexColor;
- (void)setWhiteScreenHexColor:(id)arg1;
- (unsigned int)whiteScreenColorRatio;
- (void)setWhiteScreenColorRatio:(unsigned int)arg1;
- (id)modalOrToastStr;
- (void)setModalOrToastStr:(id)arg1;
- (BOOL)isDisplayingPageSheet;
- (void)setIsDisplayingPageSheet:(BOOL)arg1;
- (unsigned int)whiteScreenDoubleCheckScene;
- (void)setWhiteScreenDoubleCheckScene:(unsigned int)arg1;
- (BOOL)isSkyline;
- (void)setIsSkyline:(BOOL)arg1;
- (unsigned int)whiteScreenDoubleCheckReason;
- (void)setWhiteScreenDoubleCheckReason:(unsigned int)arg1;
- (unsigned int)gameRenderMode;
- (void)setGameRenderMode:(unsigned int)arg1;
- (BOOL)isByteCodeEnabled;
- (void)setIsByteCodeEnabled:(BOOL)arg1;
- (unsigned int)currentWebViewResponsibleType;
- (void)setCurrentWebViewResponsibleType:(unsigned int)arg1;
- (unsigned int)currentWebViewAliveFailedCount;
- (void)setCurrentWebViewAliveFailedCount:(unsigned int)arg1;
- (unsigned int)currentServiceAliveFailedCount;
- (void)setCurrentServiceAliveFailedCount:(unsigned int)arg1;
- (unsigned long long)currentWebViewLastAliveTimeStampInMs;
- (void)setCurrentWebViewLastAliveTimeStampInMs:(unsigned long long)arg1;
- (unsigned long long)currentWebViewLastAliveFailedTimeStampInMs;
- (void)setCurrentWebViewLastAliveFailedTimeStampInMs:(unsigned long long)arg1;
- (unsigned long long)currentServiceLastAliveTimeStampInMs;
- (void)setCurrentServiceLastAliveTimeStampInMs:(unsigned long long)arg1;
- (unsigned long long)currentServiceLastAliveFailedTimeStampInMs;
- (void)setCurrentServiceLastAliveFailedTimeStampInMs:(unsigned long long)arg1;
- (unsigned long long)currentWebViewInitTimeStampInMs;
- (void)setCurrentWebViewInitTimeStampInMs:(unsigned long long)arg1;
- (unsigned long long)currentWebViewRouteIntensionTimeStampInMs;
- (void)setCurrentWebViewRouteIntensionTimeStampInMs:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

