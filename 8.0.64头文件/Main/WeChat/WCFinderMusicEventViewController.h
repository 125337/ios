@interface WCFinderMusicEventViewController : MMUIViewController <WCFinderMusicEventViewModelDelegate, MMScrollActionSheetDelegate, WCActionSheetDelegate, MMSightCameraViewControllerDelegate, WCFinderCameraViewControllerDelegate, WCFinderPostViewControllerDelegate, WCFinderMusicHeaderViewDelegate, MMWebImageViewDelegate, WCFinderInvalidMusicTopicViewDelegate, CAAnimationDelegate, WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderMusicTopicPageViewManagerDelegate, WCFinderFeedFlowViewLayoutDelegate, ILinkEventExt, WCFinderEventDescriptionViewControllerDelegate, MMImagePickerManagerDelegate, WCFinderMusicAuthorsActionSheetDelegate, RingBackInfoDisplaySheetViewDelegate, WCFinderMusicTabPageViewDelegate, WCFinderMusicCardBriefViewDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    BOOL _showTransparentNaviBar; // +0x70
    BOOL _isOnPostLoading; // +0x71
    int _topicType; // +0x74
    int _refCommentScene; // +0x78
    int _tabType; // +0x7c
    int _fromType; // +0x80
    WCFinderMusicEventViewModel * _viewModel; // +0x88
    WCFinderAnimationLoadingView * _loadingView; // +0x90
    WCFinderTabPageView * _tabPageView; // +0x98
    FinderMusicTopicInfo * _musicTopicInfo; // +0xa0
    NSMutableArray * _pageViewManagerArray; // +0xa8
    WCFinderTopicRouteParams * _params; // +0xb0
    unsigned long long _musicTopicId; // +0xb8
    NSString * _patTopicStr; // +0xc0
    NSString * _topicTitle; // +0xc8
    FinderLocation * _topicLocation; // +0xd0
    NSString * _latitude; // +0xd8
    NSString * _longitude; // +0xe0
    NSString * _navigationBarTitle; // +0xe8
    NSString * _traceId; // +0xf0
    NSString * _refUsername; // +0xf8
    UIBarButtonItem * _moreRightButtonItem; // +0x100
    NSString * _encryptedTopicId; // +0x108
    UIView * _eventBackgroundContainer; // +0x110
    MMWebImageView * _backgroundImageView; // +0x118
    UIView * _firstAppearForegroundView; // +0x120
    UIView * _statementView; // +0x128
    WCFinderScrollActionSheet * _moreActionSheet; // +0x130
    unsigned long long _enterTime; // +0x138
    NSData * _byPassInfo; // +0x140
    WCFinderMusicEventHeaderView * _headerView; // +0x148
    WCFinderMusicAuthorsActionSheet * _authorsActionSheet; // +0x150
    WCFinderDataItem * _anchorSetRingBtnDataItem; // +0x158
    WCFinderMusicCardBriefView * _cardBriefView; // +0x160
    WCPlayerView * _playerView; // +0x168
    WCFinderFeedAudioHelper * _feedAudioHelper; // +0x170
    long long _exposeCount; // +0x178
}
- (id)initWithParams:(id)arg1;
- (id)getShareDataItem;
- (id)feedAudioHelper;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)arg1;
- (id)genDownloadMediaInfo;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)checkShouldDownloadFirstVideo;
- (id)cardBriefView;
- (void)viewWillLayoutSubviews;
- (BOOL)shouldInteractivePop;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willDisappear;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)gen21874UdfKvDict;
- (void)viewDidBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (id)navigationBarBackgroundColor;
- (void)setupNavigationBarTitle;
- (void)onFinderSearchResultUpdatePatNavTitle;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)loadingView;
- (id)tabPageView;
- (id)pageViewManagerArray;
- (id)eventBackgroundContainer;
- (id)backgroundImageView;
- (id)statementView;
- (void)initFirstAppearForegroundView;
- (void)updateMusicNaviUI;
- (double)contentDisplayWidth;
- (double)contentLeftMargin;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (void)updateHeaderViewPostRingBtnFrom:(id)arg1;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (id)getMusicTopicReportDic;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 alphaOfTabContainerChanged:(double)arg2;
- (BOOL)isNotchScreen;
- (void)finderTabPageView:(id)arg1 switchFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (void)headerViewWillDisplayInFinderTabPageView:(id)arg1;
- (void)onFinderMusicTopicHeaderViewNeedRefresh;
- (void)doExposeHeaderDataReport;
- (void)reportMusicPageExtStatsReport;
- (id)genClickActionExtStatsReportValue;
- (void)reportMusicExtStatsReportByActionType:(int)arg1 InfoDic:(id)arg2;
- (void)onFinderEventTabListError;
- (id)onFinderMusicBGMFeedId;
- (id)onFinderMusicBgmFeedDataItem;
- (void)onConfirmButtonClicked;
- (void)reloadDataWrap;
- (void)onClickBackItem;
- (void)onClickRightItem:(id)arg1;
- (id)getItemArrayConfig;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)reportForwordWith:(id)arg1;
- (id)generTopicShareItemWithTopicTitleWithType:(int)arg1;
- (id)getMusicTopicInfoModel;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (id)genTopicTitleWithType:(int)arg1 topicTitle:(id)arg2 topicLocation:(id)arg3;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)finderMusicReloadAllData;
- (BOOL)shouldSetFeedRingtone:(id)arg1;
- (void)finderMusicPostAction;
- (id)finderGetMusicSongId;
- (void)finderEventFeedOrderChangedInHotTab;
- (void)finderMusicMgrFetchListSucPullType:(unsigned long long)arg1 innerTabType:(int)arg2 dataArray:(id)arg3;
- (BOOL)enableSetRing;
- (void)finderMusicTopicInvalidWithErrorCode:(int)arg1 errMsg:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)finderEventDescriptionViewController:(id)arg1 didClickUrl:(id)arg2;
- (void)onMusicEventHeaderClickJoinBtn:(id)arg1 musicIdPrefix:(id)arg2;
- (void)onBriefHeaderClickJoinBtn:(id)arg1 musicIdPrefix:(id)arg2;
- (void)onMusicEventHeaderClickTemplate;
- (void)onMusicEventHeaderClickListenWholeByMusicInfo:(id)arg1;
- (void)onMusicEventHeaderClickRecommendMusicActionButtonWithMusicInfo:(id)arg1;
- (void)onMusicEventHeaderViewClickFavBtn:(id)arg1;
- (void)onMusicEventHeaderClickRingBtn:(id)arg1;
- (void)onMusicEventHeaderClickLikeBtn:(id)arg1;
- (void)onMusicEventHeaderClickLikeEduBubble;
- (void)onMusicEventHeaderViewClickProfile:(id)arg1 contactInfo:(id)arg2;
- (void)onMusicEventPlayBtnStateChanged:(long long)arg1 musicInfo:(id)arg2;
- (id)getUdfKvDict;
- (void)reportTabPageWithReportType:(long long)arg1 tabName:(id)arg2;
- (void)reportMusicPlayWithReportType:(long long)arg1;
- (void)reportMusicFavWithReportType:(long long)arg1 addFav:(BOOL)arg2;
- (void)reportMusicSingerWithReportType:(long long)arg1 authors:(id)arg2;
- (void)updateBackgroundImageIfNeed;
- (void)_openSingerInfoActionBySingerInfo:(id)arg1;
- (void)onClickMusicAuthorView:(id)arg1;
- (id)getRefDataItemForExtStatsReport;
- (id)postMgrGetExtStatsReportStrValue;
- (id)postMgrSourceInfo:(id)arg1;
- (void)postMgrWillOpenAlbum:(id)arg1;
- (BOOL)postMgrEnableOpenAlbum:(id)arg1;
- (id)postMgrGetMusicInfo;
- (id)onPostMusicIds:(id)arg1;
- (id)onPostFollowTemplateFeedId;
- (id)onPostFollowMuiscFeedId:(id)arg1;
- (id)postMgrGetRecommendedMusicInfoFromShoot:(BOOL)arg1 postMgr:(id)arg2;
- (id)postMgrPatMusicGetGroupId:(id)arg1;
- (id)postMgrGetVideoTemplateInfo:(id)arg1;
- (id)getCardBriefView;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setTabPageView:(id)arg1;
- (id)musicTopicInfo;
- (void)setMusicTopicInfo:(id)arg1;
- (void)setPageViewManagerArray:(id)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (int)topicType;
- (void)setTopicType:(int)arg1;
- (unsigned long long)musicTopicId;
- (void)setMusicTopicId:(unsigned long long)arg1;
- (id)patTopicStr;
- (void)setPatTopicStr:(id)arg1;
- (id)topicTitle;
- (void)setTopicTitle:(id)arg1;
- (id)topicLocation;
- (void)setTopicLocation:(id)arg1;
- (id)latitude;
- (void)setLatitude:(id)arg1;
- (id)longitude;
- (void)setLongitude:(id)arg1;
- (id)navigationBarTitle;
- (void)setNavigationBarTitle:(id)arg1;
- (int)refCommentScene;
- (void)setRefCommentScene:(int)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (int)tabType;
- (void)setTabType:(int)arg1;
- (int)fromType;
- (void)setFromType:(int)arg1;
- (id)refUsername;
- (void)setRefUsername:(id)arg1;
- (id)moreRightButtonItem;
- (void)setMoreRightButtonItem:(id)arg1;
- (id)encryptedTopicId;
- (void)setEncryptedTopicId:(id)arg1;
- (void)setEventBackgroundContainer:(id)arg1;
- (void)setBackgroundImageView:(id)arg1;
- (BOOL)showTransparentNaviBar;
- (void)setShowTransparentNaviBar:(BOOL)arg1;
- (id)firstAppearForegroundView;
- (void)setFirstAppearForegroundView:(id)arg1;
- (void)setStatementView:(id)arg1;
- (id)moreActionSheet;
- (void)setMoreActionSheet:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)authorsActionSheet;
- (void)setAuthorsActionSheet:(id)arg1;
- (id)anchorSetRingBtnDataItem;
- (void)setAnchorSetRingBtnDataItem:(id)arg1;
- (void)setCardBriefView:(id)arg1;
- (BOOL)isOnPostLoading;
- (void)setIsOnPostLoading:(BOOL)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (void)setFeedAudioHelper:(id)arg1;
- (long long)exposeCount;
- (void)setExposeCount:(long long)arg1;
- (void).cxx_destruct;
@end
