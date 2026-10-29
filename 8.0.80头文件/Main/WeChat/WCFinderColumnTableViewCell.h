@interface WCFinderColumnTableViewCell : WCFinderTableViewCell <WCFinderColumnCellViewModelDelegate, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, WCFinderFeedListViewControllerDelegate, WCFinderColumnCollectionViewCellDelegate, WCFinderTransferPlayerDelegate, WCFinderColumnCollectionViewLiveCellDelegate, WCFinderColumnFullInteractiveCellDelegate, WCFinderFocusCellProtocol>
{
    BOOL _appliedStrengthenTitleAndSwipe; // +0x8
    BOOL _isSelfDisplayingInTableView; // +0x9
    BOOL _isSilencePlay; // +0xa
    BOOL _playbackRequested; // +0xb
    BOOL _hasClickCard; // +0xc
    BOOL _isUserScrolling; // +0xd
    BOOL _isApplyingSnapshot; // +0xe
    BOOL _needsFocusPositionUpdate; // +0xf
    BOOL _isProgrammaticScrolling; // +0x10
    id <WCFinderColumnTableViewCellDelegate> _delegate; // +0x18
    WCFinderColumnCellViewModel * _viewModel; // +0x20
    unsigned long long _tableViewCellIndex; // +0x28
    WCFinderFeedContentVM * _contentVM; // +0x30
    WCFinderRichTextView * _showWordingLabel; // +0x38
    WCFinderTransferPlayerAnimator * _playerAnimator; // +0x40
    unsigned long long _openIndexBeforePush; // +0x48
    double _scrollOffsetXBeforePush; // +0x50
    UICollectionView * _collectionView; // +0x58
    UICollectionViewFlowLayout * _collectionViewFlowLayout; // +0x60
    WCFinderColumnCollectionFooterView * _footerView; // +0x68
    WCFinderRichTextView * _continueWordingLabel; // +0x70
    UICollectionViewDiffableDataSource * _diffableDataSource; // +0x78
    WCFinderRichTextView * _titleCoverLabel; // +0x80
    UIView * _titleCoverContainerView; // +0x88
    UICollectionViewCell<WCFinderColumnCollectionViewBaseCellProtocol> * _currentFocusCell; // +0x90
    WCFinderColumnPostButton * _postBtn; // +0x98
    NSTimer * _autoScrollTimer; // +0xa0
    WCFinderSwipPageControl * _pageControl; // +0xa8
    double _collectionViewLayoutPageWidth; // +0xb0
    unsigned long long _snapshotGeneration; // +0xb8
    NSTimer * _snapshotDebounceTimer; // +0xc0
    WCFinderColumnSpeedPlayPanelView * _speedPlayPanelView; // +0xc8
    WCFinderColumnSwipeEduCoordinator * _swipeEduCoordinator; // +0xd0
    WCFinderColumnSwipeGuideCoordinator * _swipeGuideCoordinator; // +0xd8
    CGSize _collectionViewLayoutSize; // +0xe0
    CGRect _playerFrameBeforePush; // +0xf0
}
+ (id)cellID;
- (id)swipeGuideHostView;
- (BOOL)swipeGuideCanShow;
- (id)swipeGuideTitle;
- (id)swipeGuideColumnId;
- (id)swipeEduHostView;
- (id)swipeEduTargetScrollView;
- (BOOL)swipeEduCanShow;
- (id)swipeEduTitle;
- (id)swipeEduColumnId;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)prepareForReuse;
- (void)_resetUIElementsForReuse;
- (void)_resetPlayerStateForReuse;
- (void)_resetCollectionViewForReuse;
- (void)setupSubViews;
- (void)setupDataReport;
- (void)setupShowWordingLabel;
- (void)setupCollectionView;
- (void)setupCollectionViewDataSource;
- (void)setupContinueWordingLabel;
- (void)setupTitleCoverLabel;
- (void)updateTitleStyleForStrengthen:(BOOL)arg1;
- (void)setupPageControl;
- (void)setupPostButton;
- (void)setupSpeedPlayPanelView;
- (void)willBeginDisplay:(long long)arg1;
- (void)didBeginDisplay;
- (void)doworkDisplay;
- (void)didEndDisplay:(long long)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)disablePIPSwitch;
- (void)updateWithContentVM:(id)arg1 index:(unsigned long long)arg2;
- (double)decelerationRate;
- (void)applyDiffSnapshotWithCompletion:(id /* block */)arg1 isFromDebounce:(BOOL)arg2 source:(id)arg3;
- (void)refreshFooterView:(id /* block */)arg1;
- (void)tryFetchMoreDataWithReason:(id)arg1 index:(long long)arg2;
- (void)layoutSubviews;
- (void)restoreFocusPositionIfNeeded;
- (unsigned long long)columnMediaType;
- (unsigned long long)fullCardCount;
- (double)firstLeftMargin;
- (double)collectionViewCellMarginValue;
- (double)pageRInsetValue;
- (double)pageLInsetValue;
- (double)getCollectionViewCellW;
- (double)getPlayerH;
- (struct)currentConfig;
- (double)getPageW;
- (void)updateFocusCellAndAutoPlay;
- (void)updateFocusCellIfNeeded;
- (void)_resetStayStartForFocusVMAtIndex:(unsigned long long)arg1;
- (void)checkFeedAutoPlayIfNeeded;
- (id)getCollectionViewCellAt:(long long)arg1;
- (void)scrollToIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)_scrollToIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)adjustContentOffsetToIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (double)getScrollViewOffSetXWithIndex:(unsigned long long)arg1;
- (void)_stopVisibleCellsPlayingExceptCell:(id)arg1;
- (BOOL)_shouldAutoPlayVideo;
- (BOOL)_isPlayerCurrentlyPlaying;
- (id)_currentFocusContentVM;
- (id)getCurrentShowingCell;
- (BOOL)pushSwipeGestureShouldBeginWithLocation:(CGPoint)arg1;
- (BOOL)_isShowing;
- (BOOL)curIsColumnTimeAutoScroll;
- (BOOL)curIsColumnEndAutoScroll;
- (BOOL)isVideoColumn;
- (BOOL)isColumnTimeAutoScroll;
- (BOOL)isColumnEndAutoScroll;
- (unsigned long long)currentFocusIndex;
- (void)setCurrentFocusIndex:(unsigned long long)arg1;
- (int)commentScene;
- (id)genBaseReportDict;
- (id)columnTraceId;
- (id)genTableViewCellReportDict;
- (id)genCollViewCellReportDictWithContentVM:(id)arg1 index:(unsigned long long)arg2 eventId:(id)arg3;
- (void)reportSlideBottom:(int)arg1;
- (id)currentShowingLiveCell;
- (void)onClickPostButton:(id)arg1;
- (void)pourStatsIntoPoolWithContentVM:(id)arg1;
- (void)reportStatsReport;
- (BOOL)updateCurrentFeedStateReportData;
- (BOOL)shouldCaluculateAsFocusCell;
- (CGRect)convertFocusRectToView:(id)arg1;
- (BOOL)shouldAutoPlay;
- (void)playVideoIfSupport:(double)arg1 silencePlay:(BOOL)arg2;
- (void)stopVideoIfSupport;
- (BOOL)currentMediaIsPlay;
- (id)getReportInfo;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)navigateToDetailAtIndexPath:(id)arg1;
- (void)jumpLiveRoom:(id)arg1 indexPath:(id)arg2;
- (void)checkAutoScrollTimer;
- (BOOL)curColumnIsVaild;
- (void)startAutoScrollTimer;
- (void)startAutoScrollTimer:(BOOL)arg1;
- (void)_startAutoScrollTimer;
- (void)stopAutoScrollTimer;
- (void)_stopAutoScrollTimer;
- (void)autoScrollToNextItem;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)updatePageControlState;
- (void)_updatePageControlIfNeeded;
- (void)_setCurrentPageIndex:(unsigned long long)arg1;
- (void)_endScrolling;
- (void)onColumnCollectionCellClickLikeButtonWithVM:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)onColumnCollectionCellPlayToEnd:(id)arg1;
- (void)onColumnFullInteractiveCellClickLikeButtonWithVM:(id)arg1 isPrivateLike:(BOOL)arg2;
- (void)onColumnFullInteractiveCellPlayToEnd:(id)arg1;
- (void)columnFullInteractiveCell:(id)arg1 didReachPlayPositionMilestone:(double)arg2;
- (void)onColumnFullInteractiveCellClickDetailButton:(id)arg1;
- (id)finderColumnCellVMGetReportInfo;
- (void)finderColumnCellVMInternalFlowItemIndexChanged;
- (void)onColumnDataChange:(id)arg1;
- (void)refreshCurColumn;
- (void)onFinderFeedListVCWillBePoped:(id)arg1;
- (void)onFinderFeedListVCDidBePoped:(id)arg1;
- (void)onFinderFeedListSlideBottom:(id)arg1 scene:(int)arg2;
- (void)onFinderFeedListDidChangeFocusIndex:(id)arg1 focusIndex:(unsigned long long)arg2;
- (void)onVCDidBePoped;
- (void)executeSnapshotWithDebounce:(id)arg1 completion:(id /* block */)arg2;
- (void)cancelDebounceTimer;
- (void)_scheduleSnapshotWithCompletion:(id /* block */)arg1;
- (void)_delayApplySnapshot:(id)arg1;
- (id)viewModel;
- (CGRect)onTransferPlayerAnimator:(id)arg1 globalFrameForPlayerWithTid:(id)arg2 cornerRadius:(double *)arg3;
- (BOOL)onTransferPlayerAnimator:(id)arg1 finishTransferPlayer:(id)arg2 feedTid:(id)arg3;
- (void)onTransferPlayerAnimatorComplete:(id)arg1 isExpand:(BOOL)arg2;
- (void)_handleVideoPlaybackForSelectedCell:(id)arg1 atIndexPath:(id)arg2 isNotFocusIndex:(BOOL)arg3;
- (id)_createTargetViewControllerForScene:(int)arg1 atIndexPath:(id)arg2;
- (void)_setupPlayerTransferAnimatorForTargetVC:(id)arg1 selectedCell:(id)arg2 config:(struct)arg3 atIndexPath:(id)arg4;
- (BOOL)_validateSnapshotConditions;
- (void)_executeSnapshotWithCompletion:(id /* block */)arg1 isFromDebounce:(BOOL)arg2 source:(id)arg3;
- (void)_handleSnapshotCompletion:(id /* block */)arg1 isFromDebounce:(BOOL)arg2 source:(id)arg3;
- (id)currentFeedTid;
- (void)_updateVisibleCellsPauseButtonState;
- (void)onClickCoverContact:(id)arg1 contentVM:(id)arg2;
- (void)clickRecommendUrl:(id)arg1;
- (void)onLiveCellClickFriendLikeReason:(id)arg1;
- (void)columnFullInteractiveCell:(id)arg1 startSpeedPlayWithRateType:(long long)arg2;
- (void)columnFullInteractiveCell:(id)arg1 changeSpeedPlayWithRateType:(long long)arg2;
- (void)columnFullInteractiveCell:(id)arg1 stopSpeedPlayWithType:(long long)arg2;
- (void)_layoutSpeedPlayPanelView;
- (void)_hideAllUIElementsForSpeedPlay;
- (void)_restoreUIElementsVisibility;
- (void)_stopSpeedPlayIfNeeded;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setViewModel:(id)arg1;
- (unsigned long long)tableViewCellIndex;
- (void)setTableViewCellIndex:(unsigned long long)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (id)showWordingLabel;
- (void)setShowWordingLabel:(id)arg1;
- (id)playerAnimator;
- (void)setPlayerAnimator:(id)arg1;
- (unsigned long long)openIndexBeforePush;
- (void)setOpenIndexBeforePush:(unsigned long long)arg1;
- (CGRect)playerFrameBeforePush;
- (void)setPlayerFrameBeforePush:(CGRect)arg1;
- (double)scrollOffsetXBeforePush;
- (void)setScrollOffsetXBeforePush:(double)arg1;
- (id)collectionView;
- (void)setCollectionView:(id)arg1;
- (id)collectionViewFlowLayout;
- (void)setCollectionViewFlowLayout:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)continueWordingLabel;
- (void)setContinueWordingLabel:(id)arg1;
- (id)diffableDataSource;
- (void)setDiffableDataSource:(id)arg1;
- (id)titleCoverLabel;
- (void)setTitleCoverLabel:(id)arg1;
- (id)titleCoverContainerView;
- (void)setTitleCoverContainerView:(id)arg1;
- (BOOL)appliedStrengthenTitleAndSwipe;
- (void)setAppliedStrengthenTitleAndSwipe:(BOOL)arg1;
- (id)currentFocusCell;
- (void)setCurrentFocusCell:(id)arg1;
- (BOOL)isSelfDisplayingInTableView;
- (void)setIsSelfDisplayingInTableView:(BOOL)arg1;
- (id)postBtn;
- (void)setPostBtn:(id)arg1;
- (BOOL)isSilencePlay;
- (void)setIsSilencePlay:(BOOL)arg1;
- (BOOL)playbackRequested;
- (void)setPlaybackRequested:(BOOL)arg1;
- (BOOL)hasClickCard;
- (void)setHasClickCard:(BOOL)arg1;
- (id)autoScrollTimer;
- (void)setAutoScrollTimer:(id)arg1;
- (id)pageControl;
- (void)setPageControl:(id)arg1;
- (BOOL)isUserScrolling;
- (void)setIsUserScrolling:(BOOL)arg1;
- (BOOL)isApplyingSnapshot;
- (void)setIsApplyingSnapshot:(BOOL)arg1;
- (BOOL)needsFocusPositionUpdate;
- (void)setNeedsFocusPositionUpdate:(BOOL)arg1;
- (BOOL)isProgrammaticScrolling;
- (void)setIsProgrammaticScrolling:(BOOL)arg1;
- (CGSize)collectionViewLayoutSize;
- (void)setCollectionViewLayoutSize:(CGSize)arg1;
- (double)collectionViewLayoutPageWidth;
- (void)setCollectionViewLayoutPageWidth:(double)arg1;
- (unsigned long long)snapshotGeneration;
- (void)setSnapshotGeneration:(unsigned long long)arg1;
- (id)snapshotDebounceTimer;
- (void)setSnapshotDebounceTimer:(id)arg1;
- (id)speedPlayPanelView;
- (void)setSpeedPlayPanelView:(id)arg1;
- (id)swipeEduCoordinator;
- (void)setSwipeEduCoordinator:(id)arg1;
- (id)swipeGuideCoordinator;
- (void)setSwipeGuideCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
