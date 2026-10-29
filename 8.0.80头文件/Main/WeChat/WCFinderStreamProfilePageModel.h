@interface WCFinderStreamProfilePageModel : NSObject <WCFinderStreamProfileSubViewModelProtocol, WCFinderStreamProfilePlugin>
{
    FinderUserPageTab * _tabdef; // +0x8
    WCFinderStreamProfileHeadData * _headData; // +0x10
    id <WCFinderStreamProfilePageModelTabDelegate> _tabDelegate; // +0x18
}
+ (BOOL)shouldDisplay:(id)arg1;
+ (BOOL)allowLimitMode;
+ (BOOL)pageIsRequired;
+ (int)tabId;
+ (id)overviewSectionTypes;
- (id)init;
- (void)prepare;
- (id)displayName;
- (BOOL)shouldDisplayTab;
- (id)viewPageClassName;
- (id)overviewSectionTypes;
- (void)doLoadCache;
- (void)requestPageData;
- (void)notifyPageDisplay:(BOOL)arg1;
- (void)notifyOverviewSecElementCountChanged:(long long)arg1 newCount:(long long)arg2;
- (void)notifyOverviewSectionUpdate:(id)arg1;
- (id)description;
- (id)reportParamsBlock;
- (long long)selectedTabFeedSortType;
- (void)selectTabFeedSortType:(long long)arg1;
- (void)reportClickTab:(int)arg1;
- (void)reportExposeTab:(int)arg1;
- (id)commonTabReportData;
- (void)onFirstCgiFinish:(BOOL)arg1 cgiProfile:(id)arg2;
- (void)onContactLoaded:(id /* block */)arg1;
- (void)onOtherPageLoaded:(Class)arg1 finish:(id /* block */)arg2;
- (void)notifyTabDisplayChanged:(id)arg1;
- (void)updateOverviewSection:(long long)arg1 necessary:(BOOL)arg2 block:(id /* block */)arg3;
- (id)fetchOverviewSection:(long long)arg1;
- (id)tabdef;
- (void)setTabdef:(id)arg1;
- (id)headData;
- (void)setHeadData:(id)arg1;
- (id)tabDelegate;
- (void)setTabDelegate:(id)arg1;
- (void).cxx_destruct;
@end
