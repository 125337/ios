@interface WCFinderProfilePluginMemberShip : WCFinderStreamProfilePluginBase <WCFinderStreamProfileExt, WCFinderMembershipFollowInfoExt, WCFinderPostDataItemExt, WCFinderDataItemExt>
{
    WCFinderFeedArray * _feedArray; // +0x8
    AnyPromise * _firstPageFetcher; // +0x10
    WCFinderProfileOverviewSection * _overview; // +0x18
}
+ (BOOL)pluginEnable:(id)arg1;
+ (id)overviewSectionTypes;
- (void)dealloc;
- (void)setHeadData:(id)arg1;
- (void)_updateMemberShipOverviewSection:(id)arg1 cnt:(long long)arg2 fillCache:(BOOL)arg3;
- (void)requestPageData;
- (void)fetchData:(BOOL)arg1;
- (id)appendLocalPostingDataItems:(id)arg1 isAuthor:(BOOL)arg2 username:(id)arg3;
- (void)onProfileExtInfoMemberShipInfoChanged;
- (void)onFinderMemberShipVisitorStatusHasChanged:(unsigned long long)arg1;
- (void)refetchFeeds;
- (BOOL)enableReceivePostDataItem:(id)arg1;
- (void)onMemberShipFeedPostSessionUpLoadFailWithTid:(id)arg1 errorType:(long long)arg2;
- (void)onMemberShipFeedPostSessionUpLoadSuccessful:(id)arg1;
- (void)onMemberShipFeedPostSessionStartUpload:(id)arg1;
- (void)insertPostDataItem:(id)arg1 tid:(id)arg2;
- (void)onFinderDataItemDelete:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)firstPageFetcher;
- (void)setFirstPageFetcher:(id)arg1;
- (id)overview;
- (void)setOverview:(id)arg1;
- (void).cxx_destruct;
@end
