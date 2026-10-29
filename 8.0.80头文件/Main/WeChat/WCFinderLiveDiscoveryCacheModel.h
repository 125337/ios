@interface WCFinderLiveDiscoveryCacheModel : NSObject
{
    BOOL _isLocationServiceAuthrized; // +0x8
    BOOL _hasAlreadyExposed; // +0x9
    WCFinderTabPageModel * _liveModel; // +0x10
    double _lastRefreshTime; // +0x18
    unsigned long long _selectTabId; // +0x20
}
- (id)liveModel;
- (void)setLiveModel:(id)arg1;
- (double)lastRefreshTime;
- (void)setLastRefreshTime:(double)arg1;
- (BOOL)isLocationServiceAuthrized;
- (void)setIsLocationServiceAuthrized:(BOOL)arg1;
- (BOOL)hasAlreadyExposed;
- (void)setHasAlreadyExposed:(BOOL)arg1;
- (unsigned long long)selectTabId;
- (void)setSelectTabId:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
