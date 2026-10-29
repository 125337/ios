@interface WCCanvasComponentReportWebStoreInfo : WCCanvasComponentReportBasicInfo
{
    int _isPreloaded; // +0x20
    int _didClickDone; // +0x24
    unsigned long long _loadingTime; // +0x28
}
- (id)dictionaryRepresentation;
- (int)isPreloaded;
- (void)setIsPreloaded:(int)arg1;
- (unsigned long long)loadingTime;
- (void)setLoadingTime:(unsigned long long)arg1;
- (int)didClickDone;
- (void)setDidClickDone:(int)arg1;
@end

