@interface WCFinderNearbyMoreLivePageViewManager : NSObject <WCFinderFeedFlowViewDataSource, WCFinderFeedFlowViewDelegate, WCFinderNearbyMoreLivePageViewModelDelegate, WCFinderFeedFlowViewLayoutDelegate, WCFinderDiscoveryNearbyLiveCollectionViewCellDelegate, WCFinderStreamFooterViewActionDelegate, UIGestureRecognizerDelegate, MMLiveTaskMgrExt, IVOIPUILogicMgrExt, MultiTalkMgrExt, MonoServiceLogicExt, MMLiveMorphTransitionExt, WCFinderMoreLiveTagListHeaderViewDelegate, WCFinderLiveDiscoveryRelatedLiveCellDelegate, MMScrollActionSheetDelegate, RecentForwardScrollViewDelegate>
{
    BOOL _isFirstPageRequestFinished; // +0x8
    BOOL _isViewCurrentAppear; // +0x9
    BOOL _relatedRecommendVisible; // +0xa
    id <WCFinderNearbyMoreLivePageViewManagerDelegate> _delegate; // +0x10
    WCFinderFeedFlowView * _feedFlowView; // +0x18
    MMUIViewController<WCFinderFeedBaseViewControllerProtocol> * _currentViewController; // +0x20
    WCFinderNearbyMoreLivePageViewModel * _viewModel; // +0x28
    NSIndexPath * _playingIndexPath; // +0x30
    WCFinderNearbyMoreLiveCellPlayModel * _playingIndexModel; // +0x38
    UIPanGestureRecognizer * _panGestureRecognizer; // +0x40
    NSString * _byPassInfo; // +0x48
    WCFinderStreamFooterView * _footerLoadingView; // +0x50
    WCFinderDataItem * _enterRoomDataItem; // +0x58
    WCFinderMoreLiveTagListHeaderView * _tagListHeaderView; // +0x60
    WCFinderLiveHomePageScrollActionSheet * _currentActionSheet; // +0x68
}
- (void)exposeItemViewDisappear;
- (int)getViewModelTargetCommentScene:(int)arg1 tabInfo:(id)arg2;
- (BOOL)isMoreLiveReportScene:(int)arg1;
- (void)onMoreLiveEnterFromTabId:(unsigned long long)arg1 subTabId:(unsigned long long)arg2 index:(unsigned long long)arg3;
- (void)reportLiveCardElementAction:(unsigned long long)arg1 dataItem:(id)arg2 index:(unsigned long long)arg3;
- (void)bindNewExposeReport:(id)arg1 contentVM:(id)arg2 indexPath:(id)arg3;
- (id)contentVMWithCell:(id)arg1;
- (void)reportNewValidRatioExposeStart:(id)arg1 indexPath:(id)arg2;
- (void)reportNewValidRatioExposeEnd:(id)arg1 indexPath:(id)arg2;
- (void)reportNewPlayStateWithModel:(id)arg1 state:(unsigned long long)arg2 indexPath:(id)arg3;
- (void)manualReportOnDisAppear;
- (id)initWithLiveTabInfo:(id)arg1 view:(id)arg2 InViewController:(id)arg3 fromScene:(int)arg4 byPassInfo:(id)arg5 scene:(unsigned long long)arg6 delegate:(id)arg7;
- (void)refreshTop;
- (void)initTagListView;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)cleanCloseLive;
- (void)viewDidBePopedOrDismissed;
- (void)tryStopVisibleCell;
- (BOOL)isUsingDarkMode;
- (void)checkAppendReadyRelatedList;
- (BOOL)isCellExposed:(id)arg1;
- (void)resumePlayIfCan;
- (void)checkLivePageReady;
- (void)checkIfCanAutoPlay;
- (void)tryAutoPlayAtIndex:(id)arg1 enableSound:(BOOL)arg2;
- (void)reportAutoPlayIndex:(id)arg1;
- (id)topAutoPlayModel;
- (BOOL)isCellFullExpose:(id)arg1;
- (id)centerAutoPlayModel;
- (id)autoPlayModelWithPoint:(CGPoint)arg1;
- (id)getPlayModelWithCenterY_TwoFeed:(double)arg1;
- (void)stopPlayIfCan:(id)arg1;
- (BOOL)isAudioTabInfo;
- (void)onExpandFollowAction;
- (BOOL)checkStartLiveRecommendInRedDotScene;
- (id)tabInfo;
- (unsigned long long)selectSubTabId;
- (void)setTabInfo:(id)arg1;
- (id)reportExposeCommentScene;
- (void)nearbyLiveAnchorsReloadAllData;
- (void)nearbyLiveAnchorsAppendDataFrom:(long long)arg1 toIndex:(long long)arg2 section:(unsigned long long)arg3;
- (void)nearbyLiveAnchorsAppendToSection:(long long)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3 insertSection:(id)arg4;
- (void)nearbyLiveAnchorsNoMoreData;
- (void)nearbyLiveAnchorsFetchFailWithErrorCode:(int)arg1;
- (void)nearbyLiveAnchorsDeleteWithTid:(id)arg1;
- (BOOL)nearbyLiveAnchorsIsAppearing;
- (long long)numberOfSectionsInFinderFeedFlowView:(id)arg1;
- (long long)finderFeedFlowView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)finderFeedFlowView:(id)arg1 contentVMAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomCellAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 customCellAtIndexPath:(id)arg2;
- (void)bindYReportSdk:(id)arg1 andViewId:(id)arg2 andContentVM:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomCellAtIndexPath:(id)arg2 itemWidth:(double)arg3;
- (id)finderFeedFlowView:(id)arg1 cellConfigAtIndexPath:(id)arg2;
- (BOOL)finderFeedFlowView:(id)arg1 isCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowView:(id)arg1 customSupplementaryViewOfKind:(id)arg2 atIndexPath:(id)arg3;
- (double)finderFeedFlowView:(id)arg1 heightForCustomSupplementaryViewOfKind:(id)arg2 atSection:(long long)arg3;
- (id)finderFeedFlowViewCurrentViewController:(id)arg1;
- (BOOL)finderFeedFlowViewCanPrefetchData:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 requestDataWithType:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowViewState:(id)arg1;
- (void)finderFeedFlowView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)finderFeedFlowView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)finderFeedFlowView:(id)arg1 reportExtStatsReportAtIndexPath:(id)arg2;
- (id)finderFeedFlowView:(id)arg1 tipsType:(unsigned long long)arg2 inState:(unsigned long long)arg3;
- (void)finderFeedFlowView:(id)arg1 didClickLinkWithUrl:(id)arg2;
- (void)finderFeedFlowViewDidEndScrolling:(id)arg1;
- (void)finderFeedFlowViewWillBeginDragging:(id)arg1 atIndexPath:(id)arg2;
- (void)finderFeedFlowViewDidScroll:(id)arg1;
- (void)finderFeedFlowViewDidFooterViewStateChange:(id)arg1 state:(unsigned long long)arg2;
- (void)finderFeedFlowViewReloadData:(id)arg1;
- (id)finderFeedFlowView:(id)arg1 reportParametersAtIndexPath:(id)arg2;
- (CGSize)finderFeedFlowView:(id)arg1 cellSpaceAtSection:(unsigned long long)arg2;
- (UIEdgeInsets)finderFeedFlowView:(id)arg1 edgeInsetsAtSection:(unsigned long long)arg2;
- (unsigned long long)finderFeedFlowView:(id)arg1 columnCountAtSection:(unsigned long long)arg2;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (void)onClickCoverContact:(id)arg1 contentVM:(id)arg2;
- (void)clickRecommendUrl:(id)arg1;
- (void)onPlayStateChanged:(id)arg1 state:(unsigned long long)arg2;
- (void)onNearbyLiveCellForwardAction:(id)arg1;
- (void)onNearbyRelatedLiveCellForwardAction:(id)arg1;
- (void)onForwardAction:(id)arg1;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollActionSheetDidAppeared:(id)arg1;
- (void)clickRFItemCallBack:(id)arg1;
- (void)relayoutScrollSheet;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)onMMLiveWillStart;
- (void)onExitLiveSuccessWithLiveTaskId:(id)arg1;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)onCollapseAnimationWillStartBeforeRotation:(id)arg1;
- (void)onMinimizeInteractiveWillEnd:(id)arg1;
- (void)_innelCancelDelayFetchByMinimizeLiveTask:(id)arg1;
- (BOOL)isLiveTaskValidForFetchRelatedRecommendList:(id)arg1;
- (void)onLiveTaskDisliked:(id)arg1;
- (void)onBeginMultiTalk;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onMonoServiceDidEnd;
- (void)morphTransitionEnding;
- (void)morphTransitionCanceled;
- (void)onTagListHeaderView:(id)arg1 didSelectedTabInfo:(id)arg2 isToggle:(BOOL)arg3;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)feedFlowView;
- (void)setFeedFlowView:(id)arg1;
- (BOOL)isFirstPageRequestFinished;
- (void)setIsFirstPageRequestFinished:(BOOL)arg1;
- (id)currentViewController;
- (void)setCurrentViewController:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)playingIndexPath;
- (void)setPlayingIndexPath:(id)arg1;
- (id)playingIndexModel;
- (void)setPlayingIndexModel:(id)arg1;
- (BOOL)isViewCurrentAppear;
- (void)setIsViewCurrentAppear:(BOOL)arg1;
- (id)panGestureRecognizer;
- (void)setPanGestureRecognizer:(id)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (id)footerLoadingView;
- (void)setFooterLoadingView:(id)arg1;
- (id)enterRoomDataItem;
- (void)setEnterRoomDataItem:(id)arg1;
- (BOOL)relatedRecommendVisible;
- (void)setRelatedRecommendVisible:(BOOL)arg1;
- (id)tagListHeaderView;
- (void)setTagListHeaderView:(id)arg1;
- (id)currentActionSheet;
- (void)setCurrentActionSheet:(id)arg1;
- (void).cxx_destruct;
@end

