@interface WCFinderNearbyTabPageCacheModel : NSObject
{
    BOOL _isLocationServiceAuthrized; // +0x8
    BOOL _hasAlreadyExposed; // +0x9
    WCFinderTabPageModel * _liveTabPageModel; // +0x10
    WCFinderTabPageModel * _feedTabPageModel; // +0x18
    WCFinderTabPageModel * _peopleTabPageModel; // +0x20
    double _lastRefreshTime; // +0x28
    unsigned long long _currentSelectedType; // +0x30
}
- (id)liveTabPageModel;
- (void)setLiveTabPageModel:(id)arg1;
- (id)feedTabPageModel;
- (void)setFeedTabPageModel:(id)arg1;
- (id)peopleTabPageModel;
- (void)setPeopleTabPageModel:(id)arg1;
- (double)lastRefreshTime;
- (void)setLastRefreshTime:(double)arg1;
- (unsigned long long)currentSelectedType;
- (void)setCurrentSelectedType:(unsigned long long)arg1;
- (BOOL)isLocationServiceAuthrized;
- (void)setIsLocationServiceAuthrized:(BOOL)arg1;
- (BOOL)hasAlreadyExposed;
- (void)setHasAlreadyExposed:(BOOL)arg1;
- (void).cxx_destruct;
@end
