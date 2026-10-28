@interface WCFinderFlowFollowTabViewController : MMUIViewController <WCFinderRedDotNotifyExt, WCFinderFullMultiMediaTableViewCellDelegate, WCActionSheetDelegate, MMScrollActionSheetDelegate, WCFinderPostingCommentExt, WCFinderRedDotExt, WCFinderFeedFollowVMDelegate, WCFinderMoreHotContentTableViewCellDelegate, WCGeneralMonitorDelegate, MMTipsViewControllerDelegate, RecentForwardScrollViewDelegate, WCFinderCardWebViewControllerDelegate, ForwardMessageLogicDelegate, WCFinderTimelineTipsBubbleProtocol, MMLiveMorphDismissTarget, RingBackInfoDisplaySheetViewDelegate, WCFinderPostViewControllerDelegate, MMSightCameraViewControllerDelegate, WCFinderFeedFriendsLikeListViewControllerDelegate, WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderShareCustomTransitionProtocol, WCFinderDataItemExt, WCFinderFollowTabDetailVCDelegate, WCFinderFeedDetailViewControllerDelegate, WCFinderTabViewControllerProtocol, WCFinderFeedBaseViewControllerProtocol, WCFinderFollowViewControllerProtocol>
{
    BOOL _postFeedInsertMachineTab; // +0x70
    BOOL _hasReportCreateEvent; // +0x71
    BOOL _footerNoMoreData; // +0x72
    BOOL _isEnableMarkRead; // +0x73
    BOOL _isViewWillAppeaer; // +0x74
    BOOL _hasFetchData; // +0x75
    WCFinderFlowFollowTabVCParam * _param; // +0x78
    UIView * _fakeNaviBackView; // +0x80
    WCFinderFeedFlowView * _feedFlowView; // +0x88
    UITableView * _tableView; // +0x90
    WCFinderFeedFollowVM * _feedVM; // +0x98
    NSIndexPath * _currentForceIndexPath; // +0xa0
    NSMutableDictionary * _exposureDict; // +0xa8
    NSString * _currentVideoTid; // +0xb0
    NSString * _currentForceTid; // +0xb8
    long long _tabLastAnchorSecond; // +0xc0
    MMTipsViewController * _shareToSnsTips; // +0xc8
    UIView * _maskView; // +0xd0
    unsigned long long _enterTime; // +0xd8
    id <WCFinderFollowViewControllerDelegate> _delegate; // +0xe0
    unsigned long long _guideBarObjectId; // +0xe8
    WCFinderOpenTimelineParams * _openTimelineParams; // +0xf0
    WCFinderExtStatsReporter * _extStatReporter; // +0xf8
    unsigned long long _followStyle; // +0x100
}
+ (id)flowViewIndexPathForVMIndexPath:(id)arg1;
- (id)init;
- (id)initWithParam:(id)arg1;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (BOOL)useTransparentNavibar;
- (void)initSubview;
- (void)setupFakeNavigationBackGoundView;
- (void)setupFeedFlowView;
- (long long)currentVCTabType;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)onFinderTabAppear:(long long)arg1;
- (void)onFinderTabDisappear:(long long)arg1;
- (void)monitorView:(id)arg1 newExposedItems:(id)arg2 lastExposedItems:(id)arg3;
- (id)exposureDict;
- (id)indexPathWithDataIndex:(unsigned long long)arg1;
- (void)viewWillLayoutSubviews;
- (void)stopPreloadVisibleVideo;
- (void)needsUpdateCurrentVideo:(BOOL)arg1;
- (void)resetCurrentVideoThumb;
- (void)updateCurrentVideoThumb;
- (void)scrollTimelineToTop;
- (void)scrollTimelineToTopWithAnimation:(BOOL)arg1;
- (void)reloadRowAtIndexPath:(id)arg1 contentVM:(id)arg2 animation:(long long)arg3;
- (void)addObserverForForegroundNotification;
- (void)removeObserverForForegroundNotification;
- (void)onTimelineViewEnterForeground:(id)arg1;
- (void)onTimelineViewEnterBackground:(id)arg1;
- (id)getVisibleVideoIndexPathArray:(id)arg1;
- (void)reportFullStatsImmediately;
- (void)reportFullStatsExceptTidImmediately:(id)arg1;
- (void)currentForceIndexPathWillChanged;
- (void)fetchNextPage;
- (void)transferToRecommond;
- (void)onFeedVMDataLocalEmpty;
- (void)onFeedVMWillChangeOriginDataIndex:(BOOL)arg1;
- (void)onFeedVMDataChanged;
- (void)onFeedRevertPlayerState;
- (void)onFeedVMDataDeleteWithIndexSet:(id)arg1;
- (void)onFeedVMDataChangedWithDeletedIndexSet:(id)arg1;
- (void)scrollToNextVisibleCellAfterLoading:(CGRect)arg1;
- (void)onFeedVMInsertContentVM:(id)arg1 section:(long long)arg2;
- (void)onFeedVMDataAppend:(id)arg1;
- (void)onFeedVMDataChangedByPublish:(id)arg1 dataItem:(id)arg2;
- (void)showShareToSnsTipsWith:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (void)onFeedFollowVMUploadSucWithDataItem:(id)arg1;
- (id)feedTLVCCurrentForceTid;
- (void)feedTLVCScrollToTargetIndexPath:(id)arg1;
- (void)onFeedServerFetchSuccess;
- (void)onFeedServerFetchHistorySuccess:(BOOL)arg1;
- (void)onFeedVMDataPullRefreshStopLoading;
- (void)onFeedVMDataPullRefreshNoMore;
- (void)onFeedVMDataPullRefreshError:(unsigned long long)arg1;
- (void)onFeedVMDataFootRefreshNoMore;
- (void)updateFlowViewState;
- (void)onFeedVMDataFootRefreshError;
- (void)onFeedVMDataChangedAtIndexPath:(id)arg1 contentVM:(id)arg2;
- (void)onFeedVMDataChangedAtIndexPath:(id)arg1 contentVM:(id)arg2 animated:(BOOL)arg3;
- (void)onFeedVMDataWillRemoved:(id)arg1;
- (void)onFeedVMDataItemMediaResourceIsDeleted;
- (void)onFeedVMFetchLocalRedDotDataItem;
- (void)onFeedVMCommentFailNeedReload;
- (void)triggerHeaderRefreshLoading;
- (void)notifyTopRefreshActionByUser:(BOOL)arg1 isTopRefresh:(BOOL)arg2;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (id)finderFeedFlowViewAutoPlayParams:(id)arg1;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (unsigned long long)finderFeedFlowDataBeginRefreshTime:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (void)finderFeedFlowViewStateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 reportExtStatsReportAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didClickLinkWithUrl:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 didClickFollowTagLabel:(id)arg2;
- (BOOL)isInSubScene;
- (id)feedIdByIndex:(id)arg1;
- (id)specialParamsForFeedId:(id)arg1;
- (void)reloadDataWrap;
- (void)exposureTime:(id)arg1 index:(long long)arg2;
- (CGPoint)nearestTargetOffsetForOffset:(CGPoint)arg1;
- (void)clickRecommendUrl:(id)arg1;
- (void)inPicture;
- (id)minimizePlayInfo:(BOOL)arg1;
- (void)updateFloatContentMinimizePlayInfo:(id)arg1;
- (double)pauseCurrentPlayingFeedReturnPalybackTime;
- (id)getCommonViewModel;
- (id)contentScrollView;
- (BOOL)currentSelectedMediaIsPlay;
- (void)onFinderDataItemPostingCommentFailBySpecialError:(id)arg1 errorCode:(int)arg2 errorMsg:(id)arg3;
- (void)handleFeedExposeLogic;
- (void)exposeMarkRead:(id)arg1;
- (void)pourStateIntoPool:(id)arg1;
- (void)updateExposureStatusOfContentVM:(id)arg1;
- (void)handleDataReportLogicViewShow;
- (void)resetRefreshState;
- (BOOL)triggerRefreshLogic:(long long)arg1 toTab:(long long)arg2;
- (void)markNeedReloadTeenagerModeChange;
- (void)tabViewControllerWillDisappear:(unsigned long long)arg1;
- (void)tabViewControllerRecordEnterInfo;
- (void)cellEndExpose;
- (BOOL)isCurrentMediaBeginPlayed;
- (BOOL)isTopRrefreshing;
- (id)currentFeedContentVM;
- (id)currentFeedMediaCell;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (int)followVMGetVCCommentScene;
- (BOOL)WCFinderFeedFollowVMIsSelected;
- (void)onFeedFollowVMShouldReloadAtIndexPath:(id)arg1;
- (id)onFeedFollowVMGetHotTabLastBuff;
- (BOOL)onFeedFollowVMGetHotTabNeedTopRefresh;
- (int)feedViewControllerScene;
- (unsigned long long)feedViewerScene;
- (id)getCurMediaListObject;
- (void)tabViewControllerInitIfNeeded;
- (void)tabViewControllerSelectionWillChange:(BOOL)arg1;
- (void)tabViewControllerSelectionDidChange:(BOOL)arg1;
- (void)triggerSelectLogic;
- (unsigned long long)curFollowTabStyle;
- (void)triggerDeselectLogic;
- (void)handleDataReportLogicViewHidden;
- (void)tabViewControllerStopCurrentPlayVideo;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)handleHotContentExposeLogic;
- (BOOL)tabViewControllerGetSelectState;
- (unsigned long long)getCurTableViewVisibleBottomIndex;
- (void)tabViewControllerAutoRefreshTrigerByRedDot;
- (unsigned long long)tabViewControllerGetCurTableViewVisibleTopIndex;
- (id)getCurViewModelLastBuff;
- (id)getCurrentDataItemWithSessionBuffer;
- (id)getCurMaskView;
- (id)maskView;
- (void)onClickRealNameAction;
- (void)onMoreHotContentCellClick;
- (void)reportItemsExposed:(id)arg1 withIndex:(unsigned long long)arg2;
- (void)relayoutScrollSheet;
- (id)getCurrentViewController;
- (void)timelineTipsBubbleDidAppear;
- (void)timelineTipsBubbleDidDisappear;
- (id)timelineTabViewController;
- (BOOL)shouldLiveUseMorphDismissForCustomKey:(id)arg1;
- (CGRect)liveMorphDismissTargetFrameOnScreenForCustomKey:(id)arg1 videoSize:(CGSize)arg2;
- (id)extStatReporter;
- (void)onFinderDataItemWithTid:(id)arg1 jumpInfoContainerChanged:(id)arg2 commentScene:(int)arg3;
- (void)onFeedDetailDislikeFeedWithContentVM:(id)arg1;
- (void)onFeedDetailAbnormalFeedWithContentVM:(id)arg1;
- (void)onFollowDetailVCDislikeFeedWithContentVM:(id)arg1;
- (BOOL)tabViewControllerIsInPinchState;
- (BOOL)postFeedInsertMachineTab;
- (void)setPostFeedInsertMachineTab:(BOOL)arg1;
- (BOOL)hasReportCreateEvent;
- (void)setHasReportCreateEvent:(BOOL)arg1;
- (id)param;
- (void)setParam:(id)arg1;
- (id)fakeNaviBackView;
- (void)setFakeNaviBackView:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)feedVM;
- (void)setFeedVM:(id)arg1;
- (id)currentForceIndexPath;
- (void)setCurrentForceIndexPath:(id)arg1;
- (void)setExposureDict:(id)arg1;
- (BOOL)footerNoMoreData;
- (void)setFooterNoMoreData:(BOOL)arg1;
- (id)currentVideoTid;
- (void)setCurrentVideoTid:(id)arg1;
- (BOOL)isEnableMarkRead;
- (void)setIsEnableMarkRead:(BOOL)arg1;
- (BOOL)isViewWillAppeaer;
- (void)setIsViewWillAppeaer:(BOOL)arg1;
- (id)currentForceTid;
- (void)setCurrentForceTid:(id)arg1;
- (BOOL)hasFetchData;
- (void)setHasFetchData:(BOOL)arg1;
- (long long)tabLastAnchorSecond;
- (void)setTabLastAnchorSecond:(long long)arg1;
- (id)shareToSnsTips;
- (void)setShareToSnsTips:(id)arg1;
- (void)setMaskView:(id)arg1;
- (unsigned long long)enterTime;
- (void)setEnterTime:(unsigned long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (unsigned long long)guideBarObjectId;
- (void)setGuideBarObjectId:(unsigned long long)arg1;
- (id)openTimelineParams;
- (void)setOpenTimelineParams:(id)arg1;
- (void)setExtStatReporter:(id)arg1;
- (unsigned long long)followStyle;
- (void)setFollowStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
