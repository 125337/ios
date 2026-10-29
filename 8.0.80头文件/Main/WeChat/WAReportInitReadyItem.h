@interface WAReportInitReadyItem : WAReportBaseItem
{
    BOOL _isDownloadCode; // +0x8
    BOOL _isPatch; // +0x9
    BOOL _isPreloadPageFrame; // +0xa
    BOOL _isSplitCodeLib; // +0xb
    BOOL _isFirstPageRenderingCacheAccepted; // +0xc
    BOOL _canShowLoadingAdvert; // +0xd
    BOOL _exptUseByteCode; // +0xe
    unsigned int _costTimeInMs; // +0x10
    unsigned int _preloadType; // +0x14
    unsigned int _showAd; // +0x18
    unsigned int _runningState; // +0x1c
    unsigned int _webviewType; // +0x20
    unsigned int _runtimeNo; // +0x24
    unsigned int _lazyCodeLoading; // +0x28
    unsigned int _codeCacheFormatVersion; // +0x2c
    unsigned int _wxProcessColdStartTimeStamp; // +0x30
    unsigned int _currentOpenedTaskIndex; // +0x34
    unsigned int _splashAdClientState; // +0x38
    unsigned long long _startTimeInMs; // +0x40
    unsigned long long _endTimeInMs; // +0x48
    unsigned long long _loadingInEntTInMs; // +0x50
    NSString * _publibFileNameListUseCodeCache; // +0x58
    NSString * _usrFileNameListUseCodeCache; // +0x60
}
- (int)reportID;
- (void)makeSafeString;
- (id)reportString;
- (unsigned int)costTimeInMs;
- (void)setCostTimeInMs:(unsigned int)arg1;
- (unsigned long long)startTimeInMs;
- (void)setStartTimeInMs:(unsigned long long)arg1;
- (unsigned long long)endTimeInMs;
- (void)setEndTimeInMs:(unsigned long long)arg1;
- (BOOL)isDownloadCode;
- (void)setIsDownloadCode:(BOOL)arg1;
- (BOOL)isPatch;
- (void)setIsPatch:(BOOL)arg1;
- (unsigned int)preloadType;
- (void)setPreloadType:(unsigned int)arg1;
- (BOOL)isPreloadPageFrame;
- (void)setIsPreloadPageFrame:(BOOL)arg1;
- (BOOL)isSplitCodeLib;
- (void)setIsSplitCodeLib:(BOOL)arg1;
- (BOOL)isFirstPageRenderingCacheAccepted;
- (void)setIsFirstPageRenderingCacheAccepted:(BOOL)arg1;
- (unsigned int)showAd;
- (void)setShowAd:(unsigned int)arg1;
- (BOOL)canShowLoadingAdvert;
- (void)setCanShowLoadingAdvert:(BOOL)arg1;
- (unsigned long long)loadingInEntTInMs;
- (void)setLoadingInEntTInMs:(unsigned long long)arg1;
- (unsigned int)runningState;
- (void)setRunningState:(unsigned int)arg1;
- (unsigned int)webviewType;
- (void)setWebviewType:(unsigned int)arg1;
- (unsigned int)runtimeNo;
- (void)setRuntimeNo:(unsigned int)arg1;
- (unsigned int)lazyCodeLoading;
- (void)setLazyCodeLoading:(unsigned int)arg1;
- (BOOL)exptUseByteCode;
- (void)setExptUseByteCode:(BOOL)arg1;
- (id)publibFileNameListUseCodeCache;
- (void)setPublibFileNameListUseCodeCache:(id)arg1;
- (id)usrFileNameListUseCodeCache;
- (void)setUsrFileNameListUseCodeCache:(id)arg1;
- (unsigned int)codeCacheFormatVersion;
- (void)setCodeCacheFormatVersion:(unsigned int)arg1;
- (unsigned int)wxProcessColdStartTimeStamp;
- (void)setWxProcessColdStartTimeStamp:(unsigned int)arg1;
- (unsigned int)currentOpenedTaskIndex;
- (void)setCurrentOpenedTaskIndex:(unsigned int)arg1;
- (unsigned int)splashAdClientState;
- (void)setSplashAdClientState:(unsigned int)arg1;
- (void).cxx_destruct;
@end
