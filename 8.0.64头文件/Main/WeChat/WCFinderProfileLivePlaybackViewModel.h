@interface WCFinderProfileLivePlaybackViewModel : WCFinderStreamProfilePageModel <WCFinderLiveExt, WCFinderDataItemExt, WCFinderStickTopChangeExt, WCFinderFeedArrayDelegate>
{
    BOOL _isFetchingData; // +0x8
    BOOL _showPostTime; // +0x9
    int _commentScene; // +0xc
    WCFinderFeedArray2 * _feedArray; // +0x10
    NSString * _finderUsername; // +0x18
    id <WCFinderProfileLivePlaybackViewModelShowTabDelegate> _showTabDelegate; // +0x20
    id <WCFinderProfileLivePlaybackViewModelDelegate> _delegate; // +0x28
    WCFinderProfileLiveDataFetcher2 * _dataFetcher; // +0x30
}
+ (int)tabId;
+ (BOOL)shouldDisplay:(id)arg1;
+ (BOOL)allowLimitMode;
+ (id)overviewSectionTypes;
+ (BOOL)isValidLiveContentVM:(id)arg1;
+ (BOOL)doLivePlayBackDidSelectItem:(id)arg1 fromVC:(id)arg2 dataFetcher:(id)arg3 feedArray:(id)arg4;
- (id)init;
- (id)liveDataItemArray;
- (id)loadingState;
- (BOOL)shouldDisplayTab;
- (void)requestPageData;
- (void)_updateLiveOverViewSection:(long long)arg1 fillCache:(BOOL)arg2;
- (void)reFetchNextLiveDataItems;
- (void)fetchNextLiveDataItems;
- (id)createContentVMFromDataItems:(id)arg1;
- (id)displayName;
- (id)viewPageClassName;
- (BOOL)showTab;
- (BOOL)isAuthorPerspective;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onFinderLiveReplaySettingUpdated:(id)arg1 replayEnabled:(BOOL)arg2;
- (void)onFinderLiveShareViewReplayStatusUpdated:(id)arg1 liveInfo:(id)arg2;
- (void)onFinderLiveReplayStatusUpdated:(id)arg1 replayStatus:(unsigned int)arg2;
- (void)onFinderLiveReplayStickyTopTo:(id)arg1;
- (BOOL)isValidFeedContentVM:(id)arg1;
- (void)didClickContentVM:(id)arg1 fromVC:(id)arg2 beforeDisplay:(id /* block */)arg3 complete:(id /* block */)arg4;
- (BOOL)livePlayBackDidSelectItem:(id)arg1 fromVC:(id)arg2;
- (void)openFeedDidSelectVC:(id)arg1 fromVC:(id)arg2 beforeDisplay:(id /* block */)arg3;
- (BOOL)checkPurchaseUserCount:(id)arg1;
- (unsigned long long)refreshTime;
- (void)onFeedArray:(id)arg1 insertContentVMS:(id)arg2;
- (void)onFinderStickTopChanged:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (id)showTabDelegate;
- (void)setShowTabDelegate:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (id)dataFetcher;
- (void)setDataFetcher:(id)arg1;
- (BOOL)isFetchingData;
- (void)setIsFetchingData:(BOOL)arg1;
- (BOOL)showPostTime;
- (void)setShowPostTime:(BOOL)arg1;
- (void).cxx_destruct;
@end
