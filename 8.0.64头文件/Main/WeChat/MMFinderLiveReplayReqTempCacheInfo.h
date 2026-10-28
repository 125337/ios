@interface MMFinderLiveReplayReqTempCacheInfo : NSObject
{
    BOOL _hasMoreData; // +0x8
    BOOL _isNeedOpenBank; // +0x9
    NSData * _lastBuffer; // +0x10
    WCLocationInfo * _currentLocationInfo; // +0x18
    MMFinderLiveHonCoverCacheInfo * _honCoverCacheInfo; // +0x20
}
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (BOOL)hasMoreData;
- (void)setHasMoreData:(BOOL)arg1;
- (id)currentLocationInfo;
- (void)setCurrentLocationInfo:(id)arg1;
- (BOOL)isNeedOpenBank;
- (void)setIsNeedOpenBank:(BOOL)arg1;
- (id)honCoverCacheInfo;
- (void)setHonCoverCacheInfo:(id)arg1;
- (void).cxx_destruct;
@end
