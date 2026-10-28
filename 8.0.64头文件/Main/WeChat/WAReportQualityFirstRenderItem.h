@interface WAReportQualityFirstRenderItem : WAReportBaseItem
{
    BOOL _isPreloadPageFrame; // +0x8
    BOOL _isSplitCodeLib; // +0x9
    BOOL _isFirstPageRenderingCacheAccepted; // +0xa
    unsigned int _costTimeInMs; // +0xc
    unsigned int _preloadType; // +0x10
    unsigned int _showAd; // +0x14
    unsigned long long _startTimeInMs; // +0x18
    unsigned long long _endTimeInMs; // +0x20
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
- (BOOL)isSplitCodeLib;
- (void)setIsSplitCodeLib:(BOOL)arg1;
- (BOOL)isFirstPageRenderingCacheAccepted;
- (void)setIsFirstPageRenderingCacheAccepted:(BOOL)arg1;
- (unsigned int)showAd;
- (void)setShowAd:(unsigned int)arg1;
@end
