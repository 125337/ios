@interface WCFinderProfileViewModel : NSObject <WCFinderDataItemExt, WCFinderContactExt, WCFinderUserPageFetchExt, WCFinderProfileADPluginObserver>
{
    BOOL _isAuthorPerspective; // +0x8
    BOOL _popAsDeleteEmptyDataItems; // +0x9
    BOOL _disableShowInMinimizeWindow; // +0xa
    int _customCommentScene; // +0xc
    int _entryScene; // +0x10
    id <WCFinderProfileViewModelProtocol> _delegate; // +0x18
    WCFinderContact * _contact; // +0x20
    NSString * _username; // +0x28
    unsigned long long _reportScene; // +0x30
    unsigned long long _refreshTime; // +0x38
    NSString * _fromLiveId; // +0x40
    NSString * _fromScene; // +0x48
    unsigned long long _fromEntranceType; // +0x50
    NSDictionary * _additionalClientUdfKV; // +0x58
    long long _initOffset; // +0x60
    id <WCFinderProfileDataFetcher> _dataFetcher; // +0x68
    WCFinderFeedArray * _feedArray; // +0x70
    WCFinderProfileFeedManager * _feedManager; // +0x78
    WCFinderShareEntranceMessageInfo * _entranceMessageInfo; // +0x80
    NSMutableSet * _lastStreamItemIds; // +0x88
    WCFinderProfileADPlugin * _adPlugin; // +0x90
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
- (unsigned long long)_calAdFeedInsertPos;
- (void)insertAdFeedAtPosIfNeeded:(unsigned long long)arg1;
- (BOOL)removeUnexposedAdFeedIfNeeded:(id)arg1;
- (void)removeAdFeedWithTid:(id)arg1;
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
- (unsigned long long)refreshTime;
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
- (int)entryScene;
- (void)setEntryScene:(int)arg1;
- (id)lastStreamItemIds;
- (void)setLastStreamItemIds:(id)arg1;
- (id)adPlugin;
- (void)setAdPlugin:(id)arg1;
- (void).cxx_destruct;
@end
