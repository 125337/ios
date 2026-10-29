@interface CBTBrandLiveCommentListView : UIView <UITableViewDataSource, UITableViewDelegate, UIScrollViewDelegate, MMMenuControllerExt, UIGestureRecognizerDelegate>
{
    BOOL _disableAnimationsWhileUserScrolling; // +0x8
    BOOL _fadeEnabled; // +0x9
    BOOL _isApplyingBatch; // +0xa
    BOOL _userIsScrolling; // +0xb
    BOOL _awayFromLatest; // +0xc
    BOOL _pinnedShown; // +0xd
    BOOL _pinnedUpdateScheduled; // +0xe
    BOOL _highlightUpdateScheduled; // +0xf
    long long _maxVisibleCount; // +0x10
    long long _maxCacheCount; // +0x18
    double _insertAnimDuration; // +0x20
    double _fadeTopHeight; // +0x28
    double _fadeBottomHeight; // +0x30
    NSString * _currentAnsweringTraceId; // +0x38
    ChatBotBrandDataReporter * _dataReporter; // +0x40
    UIView * _tableContainer; // +0x48
    UITableView * _tableView; // +0x50
    NSMutableArray * _items; // +0x58
    NSMutableSet * _knownTraceIds; // +0x60
    NSMutableArray * _pendingAddQueue; // +0x68
    NSIndexPath * _pendingAnimateIndexPath; // +0x70
    long long _pendingNewCount; // +0x78
    UIButton * _unreadTipButton; // +0x80
    UILabel * _unreadTipLabel; // +0x88
    CAGradientLayer * _fadeMaskLayer; // +0x90
    UIView * _answeringPinnedView; // +0x98
    CBTBrandLiveCommentCell * _answeringPinnedCell; // +0xa0
    NSLayoutConstraint * _answeringPinnedHeight; // +0xa8
    CBTBrandLiveCommentCell * _pinnedMeasureCell; // +0xb0
    NSString * _menuTraceId; // +0xb8
    NSString * _selectedForMenuTraceId; // +0xc0
    UILongPressGestureRecognizer * _longPressGR; // +0xc8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)indexPathForTraceId:(id)arg1;
- (id)infoForTraceId:(id)arg1;
- (id)visibleCellForTraceId:(id)arg1;
- (BOOL)isMenuVisibleNow;
- (double)cbt_latestOffsetY;
- (CGPoint)cbt_targetOffsetForLatestConsideringBottomMask;
- (void)scheduleHighlightUpdate;
- (void)updateHighlightForVisibleCellsExclusive;
- (void)setCurrentAnsweringTraceId:(id)arg1;
- (id)deltaInfosFromServerFullList_noSort:(id)arg1;
- (void)restoreContentOffsetIfNeededWithOldOffset:(CGPoint)arg1 oldContentSize:(CGSize)arg2 shouldFreeze:(BOOL)arg3;
- (void)addCellInfo:(id)arg1;
- (void)addCellInfos:(id)arg1;
- (void)clear;
- (void)processNextAddIfNeeded;
- (void)processSingleMaybeAnim:(id)arg1;
- (void)processBatchAddInfosNoAnim_keepArrivalOrderButNewestAtBottom:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)onLongPressTable:(id)arg1;
- (void)syncMenuSelectionVisualIfNeeded;
- (void)cancelMenuSelectionIfNeeded;
- (id)menuItems;
- (void)onMenuControllerDidHide;
- (void)copyQuery:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (BOOL)isAtLatestPosition;
- (void)tryBackToLatestAndResetIfNeeded;
- (void)scrollToLatestAnimated:(BOOL)arg1;
- (void)setupUnreadTipView;
- (void)onTapUnreadTip;
- (void)resetUnreadTip;
- (void)updateUnreadTipUI;
- (void)schedulePinnedUpdate;
- (BOOL)cbt_isScrollableNow;
- (double)calcPinnedHeightForInfo:(id)arg1;
- (void)updateAnsweringPinnedUI;
- (void)setupAnsweringPinnedView;
- (void)hidePinned;
- (void)setupFadeMaskIfNeeded;
- (void)updateFadeMaskFrameAndStops;
- (void)tryReportIfNeededWithCellInfo:(id)arg1;
- (void)tryReportVisibleCellsIfNeeded;
- (void)willMoveToSuperview:(id)arg1;
- (long long)maxVisibleCount;
- (void)setMaxVisibleCount:(long long)arg1;
- (long long)maxCacheCount;
- (void)setMaxCacheCount:(long long)arg1;
- (double)insertAnimDuration;
- (void)setInsertAnimDuration:(double)arg1;
- (BOOL)disableAnimationsWhileUserScrolling;
- (void)setDisableAnimationsWhileUserScrolling:(BOOL)arg1;
- (double)fadeTopHeight;
- (void)setFadeTopHeight:(double)arg1;
- (double)fadeBottomHeight;
- (void)setFadeBottomHeight:(double)arg1;
- (BOOL)fadeEnabled;
- (void)setFadeEnabled:(BOOL)arg1;
- (id)currentAnsweringTraceId;
- (id)dataReporter;
- (void)setDataReporter:(id)arg1;
- (id)tableContainer;
- (void)setTableContainer:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)items;
- (void)setItems:(id)arg1;
- (id)knownTraceIds;
- (void)setKnownTraceIds:(id)arg1;
- (id)pendingAddQueue;
- (void)setPendingAddQueue:(id)arg1;
- (BOOL)isApplyingBatch;
- (void)setIsApplyingBatch:(BOOL)arg1;
- (id)pendingAnimateIndexPath;
- (void)setPendingAnimateIndexPath:(id)arg1;
- (BOOL)userIsScrolling;
- (void)setUserIsScrolling:(BOOL)arg1;
- (BOOL)awayFromLatest;
- (void)setAwayFromLatest:(BOOL)arg1;
- (long long)pendingNewCount;
- (void)setPendingNewCount:(long long)arg1;
- (id)unreadTipButton;
- (void)setUnreadTipButton:(id)arg1;
- (id)unreadTipLabel;
- (void)setUnreadTipLabel:(id)arg1;
- (id)fadeMaskLayer;
- (void)setFadeMaskLayer:(id)arg1;
- (id)answeringPinnedView;
- (void)setAnsweringPinnedView:(id)arg1;
- (id)answeringPinnedCell;
- (void)setAnsweringPinnedCell:(id)arg1;
- (id)answeringPinnedHeight;
- (void)setAnsweringPinnedHeight:(id)arg1;
- (BOOL)pinnedShown;
- (void)setPinnedShown:(BOOL)arg1;
- (BOOL)pinnedUpdateScheduled;
- (void)setPinnedUpdateScheduled:(BOOL)arg1;
- (id)pinnedMeasureCell;
- (void)setPinnedMeasureCell:(id)arg1;
- (BOOL)highlightUpdateScheduled;
- (void)setHighlightUpdateScheduled:(BOOL)arg1;
- (id)menuTraceId;
- (void)setMenuTraceId:(id)arg1;
- (id)selectedForMenuTraceId;
- (void)setSelectedForMenuTraceId:(id)arg1;
- (id)longPressGR;
- (void)setLongPressGR:(id)arg1;
- (void).cxx_destruct;
@end
