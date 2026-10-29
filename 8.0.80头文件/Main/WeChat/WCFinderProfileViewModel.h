@interface WCFinderProfileViewModel : NSObject <WCFinderDataItemExt, WCFinderContactExt, WCFinderUserPageFetchExt, WCFinderFeedArrayDelegate>
{
    BOOL _isAuthorPerspective; // +0x8
    BOOL _popAsDeleteEmptyDataItems; // +0x9
    BOOL _disableShowInMinimizeWindow; // +0xa
    BOOL _showPostTime; // +0xb
    BOOL _allowGuideToDiscover; // +0xc
    BOOL _hasGuideCellInserted; // +0xd
    int _refCommentScene; // +0x10
    int _customCommentScene; // +0x14
    int _entryScene; // +0x18
    id <WCFinderProfileViewModelProtocol> _delegate; // +0x20
    WCFinderContact * _contact; // +0x28
    NSString * _username; // +0x30
    unsigned long long _reportScene; // +0x38
    unsigned long long _refreshTime; // +0x40
    NSString * _enterTid; // +0x48
    NSString * _fromLiveId; // +0x50
    NSString * _fromScene; // +0x58
    unsigned long long _fromEntranceType; // +0x60
    NSDictionary * _additionalClientUdfKV; // +0x68
    long long _initOffset; // +0x70
    id <WCFinderProfileDataFetcher> _dataFetcher; // +0x78
    WCFinderFeedArray * _feedArray; // +0x80
    WCFinderProfileFeedManager * _feedManager; // +0x88
    WCFinderShareEntranceMessageInfo * _entranceMessageInfo; // +0x90
    NSMutableSet * _lastStreamItemIds; // +0x98
    NSMutableDictionary * _requestOffset2ConfigDict; // +0xa0
    NSMutableDictionary * _displayOffset2ConfigDict; // +0xa8
    FinderUserPageHeaderAdsInfo_StyleInfo * _adToastInfo; // +0xb0
}
+ (int)displayCommentSceneForIsAuthor:(BOOL)arg1;
- (id)initWithUsername:(id)arg1 fetcher:(id)arg2 feedArray:(id)arg3 isAuthor:(BOOL)arg4 adPlugin:(id)arg5;
- (void)dealloc;
- (void)setupCreatorCenterEntranceInfo;
- (id)loadingState;
- (id)pullingState;
- (BOOL)shouldHiddenContentForPrivateAccount;
- (void)requestFirstPageData:(id /* block */)arg1;
- (void)requestNextPageData;
- (void)requestPrePageData;
- (void)deleteFeedWithTid:(id)arg1;
- (void)onFinderDataItemDelete:(id)arg1;
- (void)onFinderDataItemDeleteFromScene:(int)arg1 tid:(id)arg2 toastWording:(id)arg3;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)updateContact:(id)arg1;
- (int)commentScene;
- (void)changeStickyTopState:(id)arg1 isStickTop:(BOOL)arg2 complete:(id /* block */)arg3;
- (id)formatStickyTopFailedErrorMessage:(long long)arg1 serverMsg:(id)arg2;
- (id)mapDataItems:(id)arg1;
- (void)requestAdFeedIfNeededWithPos:(long long)arg1;
- (void)insertAdFeed:(id)arg1 atPos:(unsigned long long)arg2;
- (BOOL)feedArray:(id)arg1 ignoreContentVM:(id)arg2;
- (void)onFeedArray:(id)arg1 insertContentVMS:(id)arg2 removeContentVMS:(id)arg3;
- (void)syncAllowGuideToDiscover;
- (BOOL)_feedArrayContainsGuideCell;
- (void)insertGuideToDiscoverCell;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)username;
- (void)setUsername:(id)arg1;
- (BOOL)isAuthorPerspective;
- (void)setIsAuthorPerspective:(BOOL)arg1;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (int)refCommentScene;
- (void)setRefCommentScene:(int)arg1;
- (unsigned long long)refreshTime;
- (id)enterTid;
- (void)setEnterTid:(id)arg1;
- (id)fromLiveId;
- (void)setFromLiveId:(id)arg1;
- (id)fromScene;
- (void)setFromScene:(id)arg1;
- (unsigned long long)fromEntranceType;
- (void)setFromEntranceType:(unsigned long long)arg1;
- (int)customCommentScene;
- (void)setCustomCommentScene:(int)arg1;
- (id)additionalClientUdfKV;
- (void)setAdditionalClientUdfKV:(id)arg1;
- (long long)initOffset;
- (void)setInitOffset:(long long)arg1;
- (id)dataFetcher;
- (void)setDataFetcher:(id)arg1;
- (id)feedArray;
- (void)setFeedArray:(id)arg1;
- (id)feedManager;
- (void)setFeedManager:(id)arg1;
- (BOOL)popAsDeleteEmptyDataItems;
- (void)setPopAsDeleteEmptyDataItems:(BOOL)arg1;
- (BOOL)disableShowInMinimizeWindow;
- (void)setDisableShowInMinimizeWindow:(BOOL)arg1;
- (id)entranceMessageInfo;
- (void)setEntranceMessageInfo:(id)arg1;
- (BOOL)showPostTime;
- (void)setShowPostTime:(BOOL)arg1;
- (BOOL)allowGuideToDiscover;
- (void)setAllowGuideToDiscover:(BOOL)arg1;
- (BOOL)hasGuideCellInserted;
- (void)setHasGuideCellInserted:(BOOL)arg1;
- (int)entryScene;
- (void)setEntryScene:(int)arg1;
- (id)lastStreamItemIds;
- (void)setLastStreamItemIds:(id)arg1;
- (id)requestOffset2ConfigDict;
- (void)setRequestOffset2ConfigDict:(id)arg1;
- (id)displayOffset2ConfigDict;
- (void)setDisplayOffset2ConfigDict:(id)arg1;
- (id)adToastInfo;
- (void)setAdToastInfo:(id)arg1;
- (void).cxx_destruct;
@end
