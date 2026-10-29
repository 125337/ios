@interface WCFinderLiveEntertainmentChannelsViewModel : NSObject
{
    BOOL _getRandomLiveEnablePreload; // +0x8
    BOOL _isGoingRandomLive; // +0x9
    id <WCFinderLiveEntertainmentChannelsViewModelDelegate> _delegate; // +0x10
    WCFinderLiveStreamContainerModel * _tagContainer; // +0x18
    WCFinderLiveEntertainmentChannelsContext * _ctx; // +0x20
    FinderThemeLiveStreamAppearance * _appearance; // +0x28
    WCFinderLiveEntertainmentChannelsViewController * _currentVC; // +0x30
    NSMutableDictionary * _pageVMDict; // +0x38
    WCFinderLiveStreamContainerModel * _initialStreamContainer; // +0x40
    FinderThemeLiveStreamResponse * _firstScreenResp; // +0x48
    WCFinderBaseCgi * _loadCgi; // +0x50
    unsigned long long _getRandomLivePreloadInterval; // +0x58
    NSData * _randomLiveLastBuffer; // +0x60
    WCFinderCustomCGI * _prefetchRandomLiveCGI; // +0x68
    MMTimer * _delayGetRandomLiveTimer; // +0x70
    NSMutableArray * _randomLiveIds; // +0x78
}
- (id)initWithThemeId:(id)arg1 appearance:(id)arg2 scene:(int)arg3;
- (void)loadData;
- (BOOL)hasData;
- (void)cancelSectionCgi;
- (id)currentPageVM;
- (id)pageVM:(id)arg1;
- (void)removePageVM:(id)arg1;
- (id)createPageVM:(id)arg1 initialContainer:(id)arg2;
- (id)containerContext:(unsigned long long)arg1 tag:(id)arg2;
- (void)prefetchRandomLiveIfNeeded;
- (void)checkDelayPrefetchRandomLive;
- (void)cancelDelayPrefetchRandomLive;
- (void)gotoRandomLive;
- (void)reportRandomJoinLive:(id)arg1;
- (void)reportRandomJoinButtonExpose;
- (void)reportCreateLiveButton:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tagContainer;
- (void)setTagContainer:(id)arg1;
- (id)ctx;
- (void)setCtx:(id)arg1;
- (id)appearance;
- (void)setAppearance:(id)arg1;
- (id)currentVC;
- (void)setCurrentVC:(id)arg1;
- (id)pageVMDict;
- (void)setPageVMDict:(id)arg1;
- (id)initialStreamContainer;
- (void)setInitialStreamContainer:(id)arg1;
- (id)firstScreenResp;
- (void)setFirstScreenResp:(id)arg1;
- (id)loadCgi;
- (void)setLoadCgi:(id)arg1;
- (BOOL)getRandomLiveEnablePreload;
- (void)setGetRandomLiveEnablePreload:(BOOL)arg1;
- (BOOL)isGoingRandomLive;
- (void)setIsGoingRandomLive:(BOOL)arg1;
- (unsigned long long)getRandomLivePreloadInterval;
- (void)setGetRandomLivePreloadInterval:(unsigned long long)arg1;
- (id)randomLiveLastBuffer;
- (void)setRandomLiveLastBuffer:(id)arg1;
- (id)prefetchRandomLiveCGI;
- (void)setPrefetchRandomLiveCGI:(id)arg1;
- (id)delayGetRandomLiveTimer;
- (void)setDelayGetRandomLiveTimer:(id)arg1;
- (id)randomLiveIds;
- (void)setRandomLiveIds:(id)arg1;
- (void).cxx_destruct;
@end
