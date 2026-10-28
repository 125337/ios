@interface WCFinderProfileRenderProfile : NSObject
{
    BOOL _needRecord; // +0x8
    BOOL _hasFristPageLoading; // +0x9
    BOOL _hasHomePageLoading; // +0xa
    BOOL _hasFeedPageLoading; // +0xb
    double _beginTime; // +0x10
    double _allCGIFinishTime; // +0x18
    NSMutableArray * _profileArray; // +0x20
    WCFinderCoverLoadCostTime * _coverCost; // +0x28
    double _headerLoadingEndTime; // +0x30
    double _homePageLoadingEndTime; // +0x38
    double _feedPageLoadingEndTime; // +0x40
}
- (id)init;
- (void)setBeginTime:(double)arg1;
- (id)profileArray;
- (BOOL)needRecord;
- (void)setNeedRecord:(BOOL)arg1;
- (double)beginTime;
- (double)allCGIFinishTime;
- (void)setAllCGIFinishTime:(double)arg1;
- (void)setProfileArray:(id)arg1;
- (id)coverCost;
- (void)setCoverCost:(id)arg1;
- (BOOL)hasFristPageLoading;
- (void)setHasFristPageLoading:(BOOL)arg1;
- (BOOL)hasHomePageLoading;
- (void)setHasHomePageLoading:(BOOL)arg1;
- (BOOL)hasFeedPageLoading;
- (void)setHasFeedPageLoading:(BOOL)arg1;
- (double)headerLoadingEndTime;
- (void)setHeaderLoadingEndTime:(double)arg1;
- (double)homePageLoadingEndTime;
- (void)setHomePageLoadingEndTime:(double)arg1;
- (double)feedPageLoadingEndTime;
- (void)setFeedPageLoadingEndTime:(double)arg1;
- (void).cxx_destruct;
@end
