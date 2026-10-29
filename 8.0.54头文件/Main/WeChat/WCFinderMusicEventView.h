@interface WCFinderMusicEventView : UIView <WCFinderMusicEventViewModelDelegate, WCFinderMusicCardBriefViewDelegate, WCFinderMusicHeaderViewDelegate, WCFinderMusicTabPageViewDelegate, WCFinderTabPageViewDataSource, WCFinderTabPageViewDelegate, WCFinderMusicTopicPageViewManagerDelegate, WCFinderFeedFlowViewLayoutDelegate, MMScrollActionSheetDelegate, WCFinderMusicAuthorsActionSheetDelegate, CAAnimationDelegate, WCFinderEventDescriptionViewControllerDelegate, RingBackInfoDisplaySheetViewDelegate>
{
    BOOL _isHalfScreenMode; // +0x8
    BOOL _isOnPostLoading; // +0x9
    id <WCFinderMusicEventViewDelegate> _delegate; // +0x10
    WCFinderTopicRouteParams * _params; // +0x18
    WCFinderMusicEventViewModel * _viewModel; // +0x20
    NSMutableArray * _pageViewManagerArray; // +0x28
    FinderMusicTopicInfo * _musicTopicInfo; // +0x30
    NSString * _topicTitle; // +0x38
    WCFinderDataItem * _anchorSetRingBtnDataItem; // +0x40
    WCFinderFeedAudioHelper * _feedAudioHelper; // +0x48
    WCFinderAnimationLoadingView * _loadingView; // +0x50
    WCFinderMusicCardBriefView * _cardBriefView; // +0x58
    UIView * _firstAppearForegroundView; // +0x60
    WCFinderTabPageView * _tabPageView; // +0x68
    WCFinderMusicEventHeaderView * _headerView; // +0x70
    WCFinderScrollActionSheet * _moreActionSheet; // +0x78
    WCFinderMusicAuthorsActionSheet * _authorsActionSheet; // +0x80
    WCPlayerView * _playerView; // +0x88
    NSString * _traceId; // +0x90
    unsigned long long _enterTime; // +0x98
    long long _exposeCount; // +0xa0
}
- (void)dealloc;
- (void)updateWithParams:(id)arg1;
- (void)onClickMoreButton;
- (id)getItemArrayConfig;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)viewDidBePushOrPresent;
- (void)viewDidBePopedOrDismissed;
- (void)viewWillLayoutSubviews;
- (double)topInset;
- (void)initFirstAppearForegroundView;
- (void)startLoadingAnimation;
- (void)stopLoadingAnimation;
- (id)genDownloadMediaInfo;
- (id)currentViewController;
- (void)checkShouldDownloadFirstVideo;
- (id)getShareDataItem;
- (id)gen21874UdfKvDict;
- (id)feedAudioHelper;
- (id)loadingView;
- (id)cardBriefView;
- (id)tabPageView;
- (id)pageViewManagerArray;
- (long long)numberOfTabPageInFinderTabPageView:(id)arg1;
- (void)updateHeaderViewPostRingBtnFrom:(id)arg1;
- (id)headerViewInFinderTabPageView:(id)arg1;
- (id)getMusicTopicReportDic;
- (double)heightForHeaderViewInFinderTabPageView:(id)arg1;
- (id)finderTabPageView:(id)arg1 tabViewAtIndex:(unsigned long long)arg2;
- (id)finderTabPageView:(id)arg1 pageViewAtIndex:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (double)topInsetOfFinderTabPageView:(id)arg1;
- (void)finderTabPageView:(id)arg1 targetAlphaOfTabContainerChanged:(double)arg2;
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
- (id)getCurMediaListObject;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidCancel:(id)arg1;
- (void)scrollActionSheetDidTapTransparent:(id)arg1;
- (void)reportForwordWith:(id)arg1;
- (id)generTopicShareItemWithTopicTitleWithType:(int)arg1;
- (id)getMusicTopicInfoModel;
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
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isHalfScreenMode;
- (void)setIsHalfScreenMode:(BOOL)arg1;
- (id)params;
- (void)setParams:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setPageViewManagerArray:(id)arg1;
- (id)musicTopicInfo;
- (void)setMusicTopicInfo:(id)arg1;
- (id)topicTitle;
- (void)setTopicTitle:(id)arg1;
- (id)anchorSetRingBtnDataItem;
- (void)setAnchorSetRingBtnDataItem:(id)arg1;
- (void)setFeedAudioHelper:(id)arg1;
- (void)setLoadingView:(id)arg1;
- (void)setCardBriefView:(id)arg1;
- (id)firstAppearForegroundView;
- (void)setFirstAppearForegroundView:(id)arg1;
- (void)setTabPageView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)moreActionSheet;
- (void)setMoreActionSheet:(id)arg1;
- (id)authorsActionSheet;
- (void)setAuthorsActionSheet:(id)arg1;
- (id)playerView;
- (void)setPlayerView:(id)arg1;
- (BOOL)isOnPostLoading;
- (void)setIsOnPostLoading:(BOOL)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (long long)exposeCount;
- (void)setExposeCount:(long long)arg1;
- (void).cxx_destruct;
@end

