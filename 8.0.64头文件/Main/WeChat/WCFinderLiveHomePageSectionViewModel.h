@interface WCFinderLiveHomePageSectionViewModel : NSObject
{
    BOOL _skipAsyncLoadLiveInfo; // +0x8
    BOOL _isSkeleton; // +0x9
    BOOL _isFold; // +0xa
    int _scene; // +0xc
    id <WCFinderLiveHomePageSectionViewModelDelegate> _delegate; // +0x10
    WCFinderLiveHomePageViewController * _homePageVC; // +0x18
    WCFinderLiveStreamContainerModel * _containerModel; // +0x20
    WCFinderLiveHomePageReportSession * _reportSession; // +0x28
    MMFinderLiveFeedExtraInfoFetchLogic * _extraFetchLogic; // +0x30
    unsigned long long _state; // +0x38
    id /* block */ _onFooterStateDidChange; // +0x40
    unsigned long long _sectionIndex; // +0x48
    NSMutableArray * _feedVMs; // +0x50
    WCFinderLiveHomePageCtx * _ctx; // +0x58
    unsigned long long _curTabId; // +0x60
    unsigned long long _curSubTabId; // +0x68
}
- (id)initWithContainerModel:(id)arg1 scene:(int)arg2 ctx:(id)arg3 isSkeleton:(BOOL)arg4;
- (id)createFeedVMWithModel:(id)arg1 isSkeleton:(BOOL)arg2;
- (void)setContainerModel:(id)arg1;
- (void)appendElementModels:(id)arg1;
- (void)insertElementModels:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)containerReadIds;
- (id)containerContext:(unsigned long long)arg1 tabInfo:(id)arg2;
- (BOOL)isSectionCustomHeaderView;
- (BOOL)isSectionSupportAutoPlay;
- (void)cancelSectionCgi;
- (void)removeDataWithTid:(id)arg1;
- (BOOL)removeDataWithFeed:(id)arg1;
- (unsigned long long)indexOfTid:(id)arg1;
- (unsigned long long)indexOfFeed:(id)arg1;
- (id)collectionDataModels;
- (id)autoPlayingFeedVMs;
- (void)reportSectionOnDisAppear;
- (void)resetExposeSession;
- (void)preloadCoversIfNeeded:(id)arg1;
- (id)calculateNavRespShouldPreloadCoverItems:(id)arg1;
- (void)reportHeaderExpose;
- (void)onHomePageContainerSectionRefreshAllData:(id)arg1;
- (void)onHomePageContainerSectionFetchFailWithErroCode:(long long)arg1;
- (void)onHomePageContainerSectionNoMoreData;
- (void)onHomePageContainerSectionFetchNextPageData:(id)arg1;
- (void)onHomePageResetState;
- (void)onHomePageContainerSectionDeleteTid:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (void)makeBottomSkeletonData;
- (unsigned long long)numberOfSkeletonItems;
- (id)removeSkeletonDatas;
- (void)updateFold:(BOOL)arg1;
- (void)toggleFold;
- (void)expandAction;
- (unsigned long long)totalUnFoldCount;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)homePageVC;
- (void)setHomePageVC:(id)arg1;
- (id)containerModel;
- (id)reportSession;
- (void)setReportSession:(id)arg1;
- (id)extraFetchLogic;
- (void)setExtraFetchLogic:(id)arg1;
- (unsigned long long)state;
- (id /* block */)onFooterStateDidChange;
- (void)setOnFooterStateDidChange:(id /* block */)arg1;
- (BOOL)skipAsyncLoadLiveInfo;
- (void)setSkipAsyncLoadLiveInfo:(BOOL)arg1;
- (unsigned long long)sectionIndex;
- (void)setSectionIndex:(unsigned long long)arg1;
- (id)feedVMs;
- (void)setFeedVMs:(id)arg1;
- (id)ctx;
- (void)setCtx:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (BOOL)isSkeleton;
- (void)setIsSkeleton:(BOOL)arg1;
- (unsigned long long)curTabId;
- (unsigned long long)curSubTabId;
- (BOOL)isFold;
- (void)setIsFold:(BOOL)arg1;
- (void).cxx_destruct;
@end
