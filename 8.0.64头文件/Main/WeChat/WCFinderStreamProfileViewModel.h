@interface WCFinderStreamProfileViewModel : NSObject <WCFinderContactExt, ForwardMessageLogicDelegate, WCFinderUserPageFetchExt, WCFinderModUserInfoExt, WCFinderTopicDataKeyExt, WCFinderStreamProfileExt, WCFinderStreamProfilePageDisplayExt, WCFinderStreamProfilePageModelTabDelegate, WCFinderStreamProfilePluginDelegate>
{
    BOOL _loadingContact; // +0x8
    BOOL _loadContactFailed; // +0x9
    BOOL _isOwneProfile; // +0xa
    BOOL _enablePrivateLock; // +0xb
    BOOL _showHalfScreenShowInWXProfileView; // +0xc
    BOOL _alreadyFetchPageData; // +0xd
    BOOL _needRefreshBlankState; // +0xe
    BOOL _headerCGIReady; // +0xf
    int _selectedPageIdWhenDataLoaded; // +0x10
    WCFinderStreamProfileHeadData * _headerViewModel; // +0x18
    id <WCFinderStreamProfileViewModelDelegate> _delegate; // +0x20
    NSString * _accountInfoUrl; // +0x28
    NSArray * _displayPageModels; // +0x30
    WCFinderProfilePrivateViewModel * _privateAccountModel; // +0x38
    NSString * _viewername; // +0x40
    ForwardMessageLogicController * _forwardLogic; // +0x48
    NSNumber * _pendingFollowState; // +0x50
    NSMutableSet * _alreadyFetchDataPlugins; // +0x58
    long long _headerCGIState; // +0x60
    NSMutableSet * _pendingFetchingDatas; // +0x68
    NSMutableArray * _waitContactBlock; // +0x70
    NSMutableArray * _waitFirstPageModels; // +0x78
    NSMutableArray * _waitOtherPageBlocks; // +0x80
    NSArray * _privateDisplayPageModels; // +0x88
    NSMutableArray * _installPlugins; // +0x90
    NSMutableArray * _supportPageTypes; // +0x98
    NSMutableSet * _displayClasses; // +0xa0
    NSMutableDictionary * _tabIdPageClassMap; // +0xa8
    WCFinderStreamProfilePageItem * _loadingItem; // +0xb0
    unsigned long long _displayTabModelUpdateHash; // +0xb8
    NSString * _selectedPageWhenDataLoaded; // +0xc0
    WCFinderProfileOverviewPageModel * _overviewModel; // +0xc8
    NSMutableArray * _waitHeaderCGIFinishBlocks; // +0xd0
}
+ (id)supportPageClasses;
+ (id)localPageClasses;
+ (id)supportPluginClasses;
- (id)initWithUsername:(id)arg1 params:(id)arg2;
- (id)initWithContact:(id)arg1 params:(id)arg2;
- (id)username;
- (void)prepareWithUsername:(id)arg1 contact:(id)arg2 params:(id)arg3;
- (void)_setupRegisterKeyExtension;
- (void)ensureDisplayPages;
- (BOOL)isAuthorPerspective;
- (BOOL)isFinderIdentity;
- (id)contact;
- (BOOL)isAccountLogout;
- (BOOL)isAccountLogoutDone;
- (id)logoutPageUrl;
- (int)currentCommentScene;
- (void)setupHasShowHalfScreenShowInProfileView;
- (id)params;
- (BOOL)shouldHiddenRightMenu;
- (BOOL)hasGuatantor;
- (BOOL)isDisplayPrivatePage;
- (id)redirectFeedID;
- (id)redirectNonceID;
- (BOOL)shouldHiddenTab;
- (void)fetchProfileExtInfo;
- (void)onFinderLiveNoticeForFinderUsername:(id)arg1 isTop:(BOOL)arg2 noticeId:(id)arg3;
- (void)onFeedFollowStatusChanged:(unsigned long long)arg1 optype:(unsigned long long)arg2;
- (void)getContactWithNickname:(id)arg1 successBlock:(id /* block */)arg2 failBlock:(id /* block */)arg3;
- (void)modifyBlockPoster:(BOOL)arg1;
- (void)shareNameCardToFriend;
- (id)profileHeaderExtInfo;
- (void)updateProfileHeaderExtInfo;
- (void)setProfileHeaderExtInfo:(id)arg1;
- (BOOL)shouldHiddenContentForPrivateAccount;
- (BOOL)shouldShowWasBlockedTips;
- (void)coverUploadSucess:(id)arg1;
- (void)coverUploadFailure;
- (id)liveNoticeInfo;
- (void)handleLiveNoticeForAuthor;
- (void)handleLiveNoticeForUser;
- (void)reserveNextLiveNotice:(id)arg1 isReserve:(BOOL)arg2 completeBlock:(id /* block */)arg3;
- (void)checkShouldShowConcertTicketAfterFirstReservation;
- (void)modUserShowFinderInWXProfile:(BOOL)arg1 success:(id /* block */)arg2 failure:(id /* block */)arg3;
- (void)retryWhenUserpageFailed;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFinderUserPageFetchFail:(int)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (void)onFinderUserPageContactInfoUpdate:(id)arg1;
- (BOOL)showAuthorPerspectiveLogoutPage;
- (void)onFinderUserPageLogouted;
- (void)notifySubModelDataChanged:(id /* block */)arg1;
- (void)onUserInfoChange;
- (void)preparePages;
- (void)prepareLoadingItem;
- (void)createDisplayPageFromCache;
- (void)fetchServerData;
- (void)ensurePageModelData:(id)arg1;
- (long long)tabDisplayIdxForTabId:(int)arg1;
- (void)waitHeaderCgiFinish:(id /* block */)arg1;
- (void)requestHeaderData;
- (void)_fillDataFromHeaderResponse:(id)arg1;
- (id)_ensurePageModel:(int)arg1;
- (void)updateLoadingState;
- (void)_setupRetryBlankPage;
- (void)afterFetchHaderData;
- (void)_onRequstHeaderFailed;
- (void)createPageModelsWithTabList:(id)arg1 headerCGIControlTabDisplay:(BOOL)arg2;
- (id)insertEmotionTabDef:(id)arg1;
- (id)ensureDraftTabDef:(id)arg1;
- (void)forceMakeStickerTabPrefetch;
- (void)createPageModelFromOldModelsTabList:(id)arg1 headerCGIControlTabDisplay:(BOOL)arg2;
- (void)makePendingPage;
- (id)loadingItemModel;
- (id)loadingItem;
- (id)_findWaitFirstPageModels:(Class)arg1;
- (BOOL)_isPageModelNeedWaitLoad:(Class)arg1;
- (void)onFetchPageDataTimeout;
- (id)createLocalTabs;
- (void)fetchPageData;
- (void)onPlugin:(id)arg1 updateOverview:(long long)arg2 necessary:(BOOL)arg3 update:(id /* block */)arg4;
- (void)onPlugin:(id)arg1 cgiLoadFinish:(BOOL)arg2 cgiProfile:(id)arg3;
- (void)onPageModel:(id)arg1 firstCGIFinish:(BOOL)arg2 cgiProfile:(id)arg3;
- (void)checkAllCGIFinish;
- (void)onPageModelDisplayTabChanged:(id)arg1;
- (void)onPageModel:(id)arg1 updateOverview:(long long)arg2 necessary:(BOOL)arg3 update:(id /* block */)arg4;
- (void)onPageModel:(id)arg1 waitContactLoad:(id /* block */)arg2;
- (void)onPageModel:(id)arg1 waitOtherPage:(Class)arg2 complete:(id /* block */)arg3;
- (id)queryOverviewSectionWithType:(long long)arg1;
- (void)updateDisplayTabFromHeaderTabList;
- (void)updatePageDisplayFlag:(Class)arg1 display:(BOOL)arg2;
- (void)setPrivateDisplayPageModels:(id)arg1;
- (void)removeDisplayPageModelObserve;
- (void)rebuildDisplayPageModels;
- (void)doRebuildDisplayPageModels;
- (id)_createDisplayPageModels;
- (void)updateDisplayPageModelCtx:(id /* block */)arg1;
- (unsigned long long)calculateDisplayPageModelHash;
- (id)createItemForUserInfo:(id)arg1;
- (void)onStreamProfilePage:(id)arg1 turnDisplay:(BOOL)arg2;
- (id)dataScene;
- (id)pageReportInfoForLog25496:(id)arg1;
- (BOOL)isFromNewLife;
- (id)headerViewModel;
- (void)setHeaderViewModel:(id)arg1;
- (BOOL)loadingContact;
- (void)setLoadingContact:(BOOL)arg1;
- (BOOL)loadContactFailed;
- (void)setLoadContactFailed:(BOOL)arg1;
- (BOOL)isOwneProfile;
- (BOOL)enablePrivateLock;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)accountInfoUrl;
- (void)setAccountInfoUrl:(id)arg1;
- (BOOL)showHalfScreenShowInWXProfileView;
- (void)setShowHalfScreenShowInWXProfileView:(BOOL)arg1;
- (id)displayPageModels;
- (void)setDisplayPageModels:(id)arg1;
- (id)privateAccountModel;
- (void)setPrivateAccountModel:(id)arg1;
- (id)viewername;
- (void)setViewername:(id)arg1;
- (id)forwardLogic;
- (void)setForwardLogic:(id)arg1;
- (id)pendingFollowState;
- (void)setPendingFollowState:(id)arg1;
- (BOOL)alreadyFetchPageData;
- (void)setAlreadyFetchPageData:(BOOL)arg1;
- (id)alreadyFetchDataPlugins;
- (void)setAlreadyFetchDataPlugins:(id)arg1;
- (long long)headerCGIState;
- (void)setHeaderCGIState:(long long)arg1;
- (BOOL)needRefreshBlankState;
- (void)setNeedRefreshBlankState:(BOOL)arg1;
- (id)pendingFetchingDatas;
- (void)setPendingFetchingDatas:(id)arg1;
- (id)waitContactBlock;
- (void)setWaitContactBlock:(id)arg1;
- (id)waitFirstPageModels;
- (void)setWaitFirstPageModels:(id)arg1;
- (id)waitOtherPageBlocks;
- (void)setWaitOtherPageBlocks:(id)arg1;
- (id)privateDisplayPageModels;
- (id)installPlugins;
- (void)setInstallPlugins:(id)arg1;
- (id)supportPageTypes;
- (void)setSupportPageTypes:(id)arg1;
- (id)displayClasses;
- (void)setDisplayClasses:(id)arg1;
- (id)tabIdPageClassMap;
- (void)setTabIdPageClassMap:(id)arg1;
- (void)setLoadingItem:(id)arg1;
- (unsigned long long)displayTabModelUpdateHash;
- (void)setDisplayTabModelUpdateHash:(unsigned long long)arg1;
- (id)selectedPageWhenDataLoaded;
- (void)setSelectedPageWhenDataLoaded:(id)arg1;
- (int)selectedPageIdWhenDataLoaded;
- (void)setSelectedPageIdWhenDataLoaded:(int)arg1;
- (id)overviewModel;
- (void)setOverviewModel:(id)arg1;
- (BOOL)headerCGIReady;
- (void)setHeaderCGIReady:(BOOL)arg1;
- (id)waitHeaderCGIFinishBlocks;
- (void)setWaitHeaderCGIFinishBlocks:(id)arg1;
- (void).cxx_destruct;
@end
