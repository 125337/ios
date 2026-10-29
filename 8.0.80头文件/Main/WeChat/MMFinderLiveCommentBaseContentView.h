@interface MMFinderLiveCommentBaseContentView : UIView <UIGestureRecognizerDelegate, MMTableViewDelegate>
{
    BOOL _forbidCommentTableViewScroll; // +0x8
    BOOL _isSynchronizeLayout; // +0x9
    BOOL _isInLive; // +0xa
    BOOL _hasPrepared; // +0xb
    BOOL _isDisplay; // +0xc
    BOOL _needTableViewAutoScrollToRereshBeforeRotate; // +0xd
    BOOL _needTableViewAutoScrollToRereshBeforeMinimize; // +0xe
    BOOL _needTableViewAutoScrollToRereshBeforeEnterBackground; // +0xf
    BOOL _needHandleRestoreAfterLayout; // +0x10
    BOOL _needHandleRestoreAfterMinimize; // +0x11
    BOOL _needHandleRestoreAfterEnterForeground; // +0x12
    MMLiveTaskId * _taskId; // +0x18
    FinderLiveBoxId * _boxId; // +0x20
    id <MMFinderLiveCommentBaseContentDelegate> _delegate; // +0x28
    id /* block */ _commentContentAreaTopChangedCallback; // +0x30
    id /* block */ _getContentShowCallback; // +0x38
    id /* block */ _onCommentContentViewDidTapCallback; // +0x40
    id /* block */ _getCommentTableViewModelCallback; // +0x48
    UIView * _commentTableBackView; // +0x50
    MMTableView * _commentTableView; // +0x58
    MMLiveCommentTableViewModel * _commentTableViewModel; // +0x60
    UIView * _commentTableTapView; // +0x68
    MMLiveUnReadCountView * _unReadCountLabel; // +0x70
    MMLiveCommentPubbleView * _banCommentPubbleView; // +0x78
    double _commentTableBottomInset; // +0x80
    id /* block */ _getNeedHideCommentTableBackViewCallback; // +0x88
    id /* block */ _onCommentTipTapCallback; // +0x90
    id /* block */ _getContentFadeCallback; // +0x98
    CAGradientLayer * _commentTableBackGradientLayer; // +0xa0
    MMLiveCommentDataItem * _visbleCommentItemBeforeLayout; // +0xa8
    MMLiveCommentDataItem * _visbleCommentItemBeforeMinimize; // +0xb0
    MMLiveCommentDataItem * _visbleCommentItemBeforeEnterBackground; // +0xb8
    UIPanGestureRecognizer * _contentPanGesture; // +0xc0
    MMUIButton * _commentContentButton; // +0xc8
    UIView * _commentTableViewTopCommentContainerView; // +0xd0
    UIView * _commentTableViewTopHotWordsContainerView; // +0xd8
    MMFinderLiveCommentDirectDisplayCellWrapper * _currDirectDisplayCell; // +0xe0
    double _previousCommentContentTop; // +0xe8
    id <MMLiveCommentWidthProvider> _widthProvider; // +0xf0
    CGPoint _panBeginContentOffset; // +0xf8
}
- (id)initWithTaskId:(id)arg1 commentWidthProvider:(id)arg2;
- (void)dealloc;
- (void)addGestures;
- (id)getCommentContentButton;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutCommentContentTapView;
- (void)layoutCommentTableBackView;
- (void)updateCommentTableHeightRecord:(double)arg1;
- (double)gradientMaskTopSpacing;
- (BOOL)isGradientMaskMustExist;
- (void)createCommentTableBackGradientLayer;
- (void)recreateCommentTableBackGradientLayerIfExists;
- (void)layoutDirectDisplayCell;
- (void)layoutCommentTableView;
- (id)createCommentTableView;
- (CGRect)getCommentTableViewFrame;
- (id)createTopCommentContainerViewIfNeeded;
- (id)createHotWordsCommentContainerViewIfNeeded;
- (void)layoutCommentTableViewTopHotWordsContainerView;
- (void)layoutCommentTableViewTopCommentContainerView;
- (void)layoutCommentTableTapView;
- (void)layoutUnReadCountLabel;
- (id)createUnReadCountLabel;
- (void)adjustCommentTableViewHeight;
- (void)adjustCommentTableViewHeightAnimated:(BOOL)arg1;
- (double)commentTableTop;
- (void)removeViewsForUnPrepare;
- (BOOL)showDirectDisplayComment:(id)arg1 checkCallback:(id /* block */)arg2 endCallback:(id /* block */)arg3;
- (void)onDirectDisplayCommentCellDismiss:(id)arg1 checkCallback:(id /* block */)arg2 endCallback:(id /* block */)arg3;
- (void)onEnterLive;
- (void)onExitLive;
- (void)prepareForDisplay;
- (void)unPrepare;
- (id)commentDataMgr;
- (void)display;
- (void)unDisplay;
- (void)forceLayoutIfNeed;
- (void)reloadDataIfNeed;
- (void)checkCommentContentTopIsChanged;
- (void)updateUnReadCountLabel:(unsigned long long)arg1;
- (void)updateTrackingTipLabelWithDataUpdateDirection:(BOOL)arg1;
- (void)updateCommentTableDisplay;
- (void)updateCommentTableContentDisplay:(BOOL)arg1;
- (void)updateEnableScroll:(BOOL)arg1;
- (double)getCommentTableRelativeRight;
- (double)getCommentTableRelativeLeft;
- (void)hideBanCommentTipPubbleView;
- (void)displayBanCommentPubbleView:(id)arg1;
- (void)handleForCommentContentViewDisplay:(BOOL)arg1;
- (void)setCommentTableContentOffset:(CGPoint)arg1;
- (CGPoint)getCommentTablePanBeginContentOffset;
- (void)makeCommentTableContentAtBottom;
- (void)addCommentGradientMask;
- (void)removeCommentGradientMask;
- (CGRect)getDisablePivotPanGestureArea;
- (void)tapOnUnReadCountLabel;
- (BOOL)checkSelfDidScrollToBottom;
- (double)commentContentViewTop;
- (void)setForbidCommentTableViewScroll:(BOOL)arg1;
- (double)commentTableWidth;
- (double)commentTableHeight;
- (double)commentTableWidth:(id)arg1;
- (double)currentCommentTableWidth:(id)arg1;
- (CGRect)commentTableTapViewFrame;
- (id)registerCellClasses;
- (Class)commentTableCellClass;
- (BOOL)getIsContentShow;
- (BOOL)getNeedHideCommentTableBackView;
- (BOOL)getIsContentFade;
- (BOOL)getEnableShowContentTabBar;
- (id)lastLoadedComment;
- (BOOL)getIsShowingInputView;
- (BOOL)getIsEnableChangeContentState;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (BOOL)mmTableView:(id)arg1 shouldBeginRecognizeGesture:(id)arg2;
- (void)handleCommentContentViewPanGesture:(id)arg1;
- (void)handleTableViewPanGesture:(id)arg1;
- (void)handleScrollConflicts:(id)arg1;
- (void)handleInteractiveForCommentContentContainerView:(id)arg1 tableView:(id)arg2;
- (void)handleCommentContentViewTapGesture:(id)arg1;
- (void)buttonAction:(id)arg1 event:(id)arg2;
- (void)handleCommentTableBackTapGesture:(id)arg1;
- (void)handleUnReadCountLabelTap:(id)arg1;
- (void)storeVisibleCommentBeforeLayout;
- (void)limitCommentCntBeforeLayout;
- (void)restoreVisibleCommentAfterLayout;
- (void)delayCheckAndRestartRefresh;
- (void)storeCommentDataBeforeMinimize;
- (void)restoreCommentDataAfterMinimize;
- (void)storeCommentDataBeforeEnterBackground;
- (void)restoreCommentDataAfterEnterForeground;
- (void)restoreCommentDataWithAutoScrollToRefresh:(BOOL)arg1 lastVisibleItem:(id)arg2;
- (void)clearCommentRestoreData;
- (void)clearMinimizeRestoreData;
- (void)clearLayoutRestoreData;
- (void)clearEnterBackgroundRestoreData;
- (void)reportForDisplay;
- (void)reportForUnDisplay;
- (void)disableOffscreenWithState:(long long)arg1;
- (void)onMatrixPerfWarning:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)boxId;
- (void)setBoxId:(id)arg1;
- (BOOL)forbidCommentTableViewScroll;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)commentContentAreaTopChangedCallback;
- (void)setCommentContentAreaTopChangedCallback:(id /* block */)arg1;
- (id /* block */)getContentShowCallback;
- (void)setGetContentShowCallback:(id /* block */)arg1;
- (id /* block */)onCommentContentViewDidTapCallback;
- (void)setOnCommentContentViewDidTapCallback:(id /* block */)arg1;
- (id /* block */)getCommentTableViewModelCallback;
- (void)setGetCommentTableViewModelCallback:(id /* block */)arg1;
- (id)commentTableBackView;
- (void)setCommentTableBackView:(id)arg1;
- (id)commentTableView;
- (void)setCommentTableView:(id)arg1;
- (id)commentTableViewModel;
- (void)setCommentTableViewModel:(id)arg1;
- (id)commentTableTapView;
- (void)setCommentTableTapView:(id)arg1;
- (id)unReadCountLabel;
- (void)setUnReadCountLabel:(id)arg1;
- (id)banCommentPubbleView;
- (void)setBanCommentPubbleView:(id)arg1;
- (double)commentTableBottomInset;
- (void)setCommentTableBottomInset:(double)arg1;
- (id /* block */)getNeedHideCommentTableBackViewCallback;
- (void)setGetNeedHideCommentTableBackViewCallback:(id /* block */)arg1;
- (id /* block */)onCommentTipTapCallback;
- (void)setOnCommentTipTapCallback:(id /* block */)arg1;
- (id /* block */)getContentFadeCallback;
- (void)setGetContentFadeCallback:(id /* block */)arg1;
- (id)commentTableBackGradientLayer;
- (void)setCommentTableBackGradientLayer:(id)arg1;
- (BOOL)isSynchronizeLayout;
- (void)setIsSynchronizeLayout:(BOOL)arg1;
- (BOOL)isInLive;
- (void)setIsInLive:(BOOL)arg1;
- (BOOL)hasPrepared;
- (void)setHasPrepared:(BOOL)arg1;
- (BOOL)isDisplay;
- (void)setIsDisplay:(BOOL)arg1;
- (id)visbleCommentItemBeforeLayout;
- (void)setVisbleCommentItemBeforeLayout:(id)arg1;
- (id)visbleCommentItemBeforeMinimize;
- (void)setVisbleCommentItemBeforeMinimize:(id)arg1;
- (id)visbleCommentItemBeforeEnterBackground;
- (void)setVisbleCommentItemBeforeEnterBackground:(id)arg1;
- (BOOL)needTableViewAutoScrollToRereshBeforeRotate;
- (void)setNeedTableViewAutoScrollToRereshBeforeRotate:(BOOL)arg1;
- (BOOL)needTableViewAutoScrollToRereshBeforeMinimize;
- (void)setNeedTableViewAutoScrollToRereshBeforeMinimize:(BOOL)arg1;
- (BOOL)needTableViewAutoScrollToRereshBeforeEnterBackground;
- (void)setNeedTableViewAutoScrollToRereshBeforeEnterBackground:(BOOL)arg1;
- (BOOL)needHandleRestoreAfterLayout;
- (void)setNeedHandleRestoreAfterLayout:(BOOL)arg1;
- (BOOL)needHandleRestoreAfterMinimize;
- (void)setNeedHandleRestoreAfterMinimize:(BOOL)arg1;
- (BOOL)needHandleRestoreAfterEnterForeground;
- (void)setNeedHandleRestoreAfterEnterForeground:(BOOL)arg1;
- (id)contentPanGesture;
- (void)setContentPanGesture:(id)arg1;
- (id)commentContentButton;
- (void)setCommentContentButton:(id)arg1;
- (id)commentTableViewTopCommentContainerView;
- (void)setCommentTableViewTopCommentContainerView:(id)arg1;
- (id)commentTableViewTopHotWordsContainerView;
- (void)setCommentTableViewTopHotWordsContainerView:(id)arg1;
- (id)currDirectDisplayCell;
- (void)setCurrDirectDisplayCell:(id)arg1;
- (CGPoint)panBeginContentOffset;
- (void)setPanBeginContentOffset:(CGPoint)arg1;
- (double)previousCommentContentTop;
- (void)setPreviousCommentContentTop:(double)arg1;
- (id)widthProvider;
- (void)setWidthProvider:(id)arg1;
- (void).cxx_destruct;
@end
