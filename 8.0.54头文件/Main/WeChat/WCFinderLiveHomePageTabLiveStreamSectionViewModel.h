@interface WCFinderLiveHomePageTabLiveStreamSectionViewModel : WCFinderLiveHomePageSectionViewModel <ILocationMgrExt>
{
    BOOL _isLocationServiceAuthrized; // +0x8
    id <WCFinderLiveHomePageTabLiveStreamSectionViewModelDelegate> _delegate; // +0x10
    WCFinderLiveStreamContainerModel * _tabListContainer; // +0x18
    NSMutableDictionary * _pageVMDict; // +0x20
}
- (id)initWithContainerModel:(id)arg1 scene:(int)arg2 ctx:(id)arg3 isSkeleton:(BOOL)arg4 tabListContainer:(id)arg5;
- (void)initializePageVM;
- (unsigned long long)curTabId;
- (unsigned long long)curSubTabId;
- (void)resetExposeSession;
- (BOOL)isSectionCustomHeaderView;
- (void)cancelSectionCgi;
- (id)currentPageVM;
- (id)pageVM:(unsigned long long)arg1;
- (void)removePageVM:(id)arg1;
- (id)createPageVM:(id)arg1;
- (id)containerContext:(unsigned long long)arg1 tabInfo:(id)arg2;
- (void)checkLocationAuthorize;
- (void)checkFetchLocation:(BOOL)arg1;
- (void)_fetchLocation:(id /* block */)arg1;
- (void)fetchRecommendBottomWhenLessThan6;
- (void)fetchRecommendBottom;
- (void)onLocationAuthorizationStatusUpdatedWithAccuracyAuthorization:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tabListContainer;
- (void)setTabListContainer:(id)arg1;
- (BOOL)isLocationServiceAuthrized;
- (void)setIsLocationServiceAuthrized:(BOOL)arg1;
- (id)pageVMDict;
- (void)setPageVMDict:(id)arg1;
- (void).cxx_destruct;
@end

