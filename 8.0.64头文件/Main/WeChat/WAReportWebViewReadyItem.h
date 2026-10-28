@interface WAReportWebViewReadyItem : WAReportBaseItem
{
    BOOL _isPreloadPageFrame; // +0x8
    BOOL _isFirstPageRenderingCacheAccepted; // +0x9
    BOOL _exptUseByteCode; // +0xa
    unsigned int _costTimeInMs; // +0xc
    unsigned int _preloadType; // +0x10
    unsigned int _runningState; // +0x14
    unsigned int _webViewType; // +0x18
    unsigned int _codeCacheFormatVersion; // +0x1c
    unsigned long long _startTimeInMs; // +0x20
    unsigned long long _endTimeInMs; // +0x28
    NSString * _publibFileNameListUseCodeCache; // +0x30
    NSString * _usrFileNameListUseCodeCache; // +0x38
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
- (unsigned int)preloadType;
- (void)setPreloadType:(unsigned int)arg1;
- (BOOL)isPreloadPageFrame;
- (void)setIsPreloadPageFrame:(BOOL)arg1;
- (BOOL)isFirstPageRenderingCacheAccepted;
- (void)setIsFirstPageRenderingCacheAccepted:(BOOL)arg1;
- (unsigned int)runningState;
- (void)setRunningState:(unsigned int)arg1;
- (BOOL)exptUseByteCode;
- (void)setExptUseByteCode:(BOOL)arg1;
- (unsigned int)webViewType;
- (void)setWebViewType:(unsigned int)arg1;
- (id)publibFileNameListUseCodeCache;
- (void)setPublibFileNameListUseCodeCache:(id)arg1;
- (id)usrFileNameListUseCodeCache;
- (void)setUsrFileNameListUseCodeCache:(id)arg1;
- (unsigned int)codeCacheFormatVersion;
- (void)setCodeCacheFormatVersion:(unsigned int)arg1;
- (void).cxx_destruct;
@end
