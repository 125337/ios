@interface MMFinderLiveCommentContentScrollView : UIScrollView <MMFinderLiveCommentBaseContentDelegate, MMFinderGroupLiveChatManagerExt>
{
    BOOL _isScaleAdjusting; // +0x8
    BOOL _forbidChangeContainerStyle; // +0x9
    BOOL _isInLive; // +0xa
    BOOL _hasStartFetch; // +0xb
    BOOL _isResetingChatRoom; // +0xc
    BOOL _isSynchronizeLayout; // +0xd
    BOOL _isExitLive; // +0xe
    BOOL _isExpandAnimating; // +0xf
    BOOL _isFoldAnimating; // +0x10
    BOOL _needRestoreVisibleCommentAfterLayout; // +0x11
    long long _currentState; // +0x18
    long long _currentTransitionState; // +0x20
    FinderLiveBoxId * _unAuthorizedChatRoomId; // +0x28
    MMFinderLivePublicCommentContentView * _publicCommentContentView; // +0x30
    MMFinderLivePrivateCommentContentView * _currPrivateCommentContentView; // +0x38
    id /* block */ _onCommentContentTransitionChangeCallback; // +0x40
    id /* block */ _onCommentContentStateChangeCallback; // +0x48
    id /* block */ _onCurrentCommentStateContentTopChangeCallback; // +0x50
    id /* block */ _getCurrentPublicCommentContentBottomInsetCallback; // +0x58
    id /* block */ _onCommentContentChatBoxChangeCallback; // +0x60
    id /* block */ _onCommentContentChatBoxAddCallback; // +0x68
    id /* block */ _queryIsShowingInputViewBlock; // +0x70
    id /* block */ _onCommentContainerStyleDidChangeCallback; // +0x78
    double _publicContentHeight; // +0x80
    long long _currentStyle; // +0x88
    id /* block */ _getCommentContainterHeightCallback; // +0x90
    id /* block */ _getCommentTableHeightCallback; // +0x98
    id /* block */ _onCommentContainerStyleChangeCallback; // +0xa0
    MMFinderLiveTaskId * _taskId; // +0xa8
    long long _contentStyle; // +0xb0
    long long _currContentIndex; // +0xb8
    FinderLiveBoxId * _currContentBox; // +0xc0
    long long _commentContentEnableFlag; // +0xc8
    MMFinderLiveCommentEntranceTabBar * _commentEntranceTabBar; // +0xd0
    NSMutableArray * _contentViewList; // +0xd8
    NSMutableArray * _pendingContentViewList; // +0xe0
    NSMutableArray * _redDotModelList; // +0xe8
    NSMutableArray * _chatRoomBoxList; // +0xf0
    double _currentStateContentTop; // +0xf8
    CGPoint _beginInteractContentOffset; // +0x100
}
+ (BOOL)checkChatRoomHasAuthorities:(id)arg1 toast:(BOOL)arg2;
+ (BOOL)checkChatRoomIsDismiss:(id)arg1;
+ (BOOL)checkChatRoomIsBlocked:(id)arg1;
+ (BOOL)checkIsSelfNotInChatRoom:(id)arg1;
- (id)initWithPublicCommentContentView:(id)arg1 taskId:(id)arg2 contentStyle:(long long)arg3;
- (void)configScrollView;
- (void)configContentView;
- (void)configIsEnableChangeContentStateCallback:(id)arg1;
- (BOOL)enableShowCommentContentTabBar;
- (void)configCommentContentDelegate:(id)arg1;
- (void)initData;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)setFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutPublicCommentContentView:(id)arg1 leftInset:(double)arg2;
- (void)layoutPrivateCommentContentView:(id)arg1 leftInset:(double)arg2;
- (void)updateContentSize;
- (void)updatePublicContentHeight;
- (void)updatePublicContentSize;
- (void)updatePrivateContentHeight:(id)arg1;
- (void)updatePrivateContentSize:(id)arg1;
- (double)getCurrPublicContentHeight;
- (double)getCurrPrivateContentHeight;
- (void)updateUIForCommentAreaBottomInsetChange;
- (void)startExpandAnimated;
- (void)inner_startExpandAnimated:(id /* block */)arg1;
- (void)startFoldAnimated;
- (void)inner_startFoldAnimated:(id /* block */)arg1;
- (BOOL)invokeAreaChangeAnimatedToNewContainerStyle:(long long)arg1 completion:(id /* block */)arg2;
- (void)adjustAreaWithVerticalChangeOffset:(double)arg1;
- (BOOL)checkCurrentEnableInvokeFold;
- (BOOL)checkCurrentEnableInvokeExpand;
- (void)changeContainerStyle:(long long)arg1;
- (void)notifyCurrContainerStyle;
- (double)getCurrentPublicCommentContentBottomInset;
- (CGPoint)getContentOffsetForContentIndex:(unsigned long long)arg1;
- (CGPoint)getCurrentAdjustedContentOffset;
- (void)updateCurrentContentState;
- (void)handleBeforeCurrentContentViewChange;
- (void)handleAfterCurrentContentViewChange;
- (void)updatePendingContentViews;
- (long long)getCommentContentStateForContentOffset:(CGPoint)arg1;
- (unsigned long long)getCommentContentIndexForContentOffset:(CGPoint)arg1;
- (void)updateTransitionState;
- (void)checkContentTopForStateChanged;
- (void)innerChangeCommentContentToIndex:(unsigned long long)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)updatePrivateCommentContentView:(unsigned long long)arg1;
- (BOOL)enableChangeContentState;
- (void)handleChangeContentViewForUnableComment;
- (void)notifyPendingEnterLive;
- (void)notifyEnterLive:(id)arg1;
- (void)notifyAllExitLive;
- (void)prepareDisplay:(id)arg1;
- (void)display:(id)arg1;
- (void)unDisplay:(id)arg1;
- (void)startFetch;
- (void)stopFetch;
- (BOOL)hasPrivateCommentContentView;
- (void)innerAddChatRoomContentView:(id)arg1;
- (void)innerAddChatRoomContentView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)innerAddChatRoomBoxId:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)getCurrFinderLiveTask;
- (double)getContainerStyleChangeAnimationDuration;
- (BOOL)enableChangeContainerStyle;
- (BOOL)enableChangeContainerStyleIgnoreOrientation:(BOOL)arg1;
- (BOOL)enableChangeContainerToExpand;
- (double)defaultCommentTableHeight;
- (id)getChatBoxIdListWithType:(unsigned int)arg1;
- (id)currentCommentContentView;
- (BOOL)isInTransition;
- (void)setEnablePublicComment:(BOOL)arg1;
- (BOOL)enablePublicComment;
- (void)setEnablePrivateComment:(BOOL)arg1;
- (BOOL)enablePrivateComment;
- (BOOL)enableComment;
- (id)contentViewList;
- (id)pendingContentViewList;
- (id)currentBoxId;
- (id)boxIdList;
- (id)chatRoomBoxList;
- (id)redDotModelList;
- (void)setCurrContentBox:(id)arg1;
- (BOOL)isScaleAnimating;
- (BOOL)isInScaleTransition;
- (double)defaultHeight;
- (double)expandHeight;
- (void)setIsFoldAnimating:(BOOL)arg1;
- (void)setIsExpandAnimating:(BOOL)arg1;
- (id)groupChatRoomBoxList;
- (id)productQuestionChatRoomBoxList;
- (void)changeNotifyContentViewSuperview:(id)arg1;
- (void)addChatRoomContentView:(id)arg1;
- (void)addChatRoomContentView:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)resetChatRoomContentView:(id)arg1 autoSwitch:(BOOL)arg2;
- (void)resetChatRoomContentView:(id)arg1 atIndex:(unsigned long long)arg2 autoSwitch:(BOOL)arg3;
- (void)onEnterLive;
- (void)onExitLive;
- (void)forceLayoutIfNeed;
- (void)reloadDataIfNeed;
- (void)showContent:(long long)arg1;
- (void)hideContent:(long long)arg1;
- (void)notifyUpdateCommentTableBottom;
- (void)updateCommentEntranceTabBarDisplay;
- (void)updateCommentTableDisplay:(long long)arg1;
- (void)updateEnableScroll:(BOOL)arg1 flag:(long long)arg2;
- (void)updateComponentHiddenForCommentEnableChanged:(long long)arg1;
- (void)updateNotifyContentViewDisplay:(long long)arg1;
- (void)hideNotifyContentView:(long long)arg1;
- (void)hideCommentTableForDisableComment:(long long)arg1;
- (void)hideBanCommentTipPubbleView:(long long)arg1;
- (void)displayBanCommentPubbleView:(id)arg1 flag:(long long)arg2;
- (double)getCurrentTransitionPercentFromPublicToPrivate;
- (double)getCurrentStateContentTop;
- (double)getContentTopForContentState:(long long)arg1;
- (id)getCommentContentViewWithType:(unsigned int)arg1;
- (id)getCommentContentViewWithBoxId:(id)arg1;
- (void)changeCommentContentToLiveBox:(id)arg1 animated:(BOOL)arg2;
- (void)changeCommentContentToLiveBox:(id)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
- (unsigned long long)indexForBoxId:(id)arg1;
- (unsigned long long)indexForBoxType:(unsigned int)arg1;
- (void)changeCommentContentToContentIndex:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)changeCommentContentToContentIndex:(unsigned long long)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)changeCommentContentToPublic:(BOOL)arg1;
- (BOOL)isContainChatRoom:(id)arg1;
- (BOOL)isContainChatRoom;
- (BOOL)isContainGroupChatRoom;
- (BOOL)isChatRoomContentToLimit;
- (BOOL)isContainChatBox:(id)arg1;
- (void)clearChatRoomContentIfOverLimit;
- (void)clearChatBoxsWithType:(unsigned int)arg1 exceptBoxId:(id)arg2;
- (void)clearAllPrivateChatBoxs;
- (void)clearContentView:(id)arg1;
- (void)clearChatBoxForContentView:(id)arg1;
- (void)clearRedDotModelForContentView:(id)arg1;
- (void)limitCommentCntBeforeLayout;
- (void)adjustCommentTableInsetTop;
- (void)storeVisibleCommentBeforeLayout;
- (void)restoreVisibleCommentAfterLayout;
- (void)storeCommentDataBeforeMinimize;
- (void)restoreCommentDataAfterMinimize;
- (void)storeCommentDataBeforeEnterBackground;
- (void)restoreCommentDataAfterEnterForeground;
- (void)notifyAudioModeChanged:(BOOL)arg1;
- (void)notifyViewCapturingChanged:(BOOL)arg1;
- (void)notifyInConnectMicStateChanged:(BOOL)arg1;
- (void)checkContainerStyleIsEnableIgnoreOrientation;
- (void)configEntranceTabBar:(id)arg1;
- (CGRect)getDisablePivotPanGestureArea;
- (BOOL)checkSelfHasConsumePivotCollectionTapGesture:(id)arg1;
- (void)forceRefreshContentView:(id)arg1;
- (BOOL)finderLiveCommentContentViewCanDragHorizontally:(id)arg1;
- (void)onHandleHorizontalDragInteractiveChanged:(double)arg1 fromContentView:(id)arg2;
- (void)onHandleHorizontalDragInteractiveEnded:(double)arg1 speed:(CGPoint)arg2 fromContentView:(id)arg3;
- (void)onHandleVerticalDragInteractiveChanged:(double)arg1 speed:(CGPoint)arg2 fromContentView:(id)arg3;
- (void)onHandleVerticalDragInteractiveEnded:(double)arg1 speed:(CGPoint)arg2 fromContentView:(id)arg3;
- (void)onHandleChangeToContentBox:(unsigned int)arg1;
- (BOOL)checkNeedAdjustCommentContainerArea:(double)arg1;
- (void)recoverTableViewContentOffset:(CGPoint)arg1 contentOffsetDistance:(double)arg2;
- (BOOL)checkNeedEndCommentContainerAreaAjudst:(double)arg1;
- (void)handleStyleChangeWithPrevStyle:(long long)arg1;
- (void)onMMFinderGroupLiveChatRedPoint:(id)arg1 reddotList:(id)arg2 boxId:(id)arg3;
- (void)updateRedDotList:(id)arg1;
- (void)addRedDotModel:(id)arg1;
- (void)checkNeedContineFetchRedDot;
- (BOOL)isHasFetchRedDot:(id)arg1;
- (void)clearRedDotForBoxId:(id)arg1;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)checkSelfHasConsumeTouch:(CGPoint)arg1 withEvent:(id)arg2;
- (long long)currentState;
- (void)setCurrentState:(long long)arg1;
- (long long)currentTransitionState;
- (void)setCurrentTransitionState:(long long)arg1;
- (id)unAuthorizedChatRoomId;
- (void)setUnAuthorizedChatRoomId:(id)arg1;
- (id)publicCommentContentView;
- (void)setPublicCommentContentView:(id)arg1;
- (id)currPrivateCommentContentView;
- (void)setCurrPrivateCommentContentView:(id)arg1;
- (id /* block */)onCommentContentTransitionChangeCallback;
- (void)setOnCommentContentTransitionChangeCallback:(id /* block */)arg1;
- (id /* block */)onCommentContentStateChangeCallback;
- (void)setOnCommentContentStateChangeCallback:(id /* block */)arg1;
- (id /* block */)onCurrentCommentStateContentTopChangeCallback;
- (void)setOnCurrentCommentStateContentTopChangeCallback:(id /* block */)arg1;
- (id /* block */)getCurrentPublicCommentContentBottomInsetCallback;
- (void)setGetCurrentPublicCommentContentBottomInsetCallback:(id /* block */)arg1;
- (id /* block */)onCommentContentChatBoxChangeCallback;
- (void)setOnCommentContentChatBoxChangeCallback:(id /* block */)arg1;
- (id /* block */)onCommentContentChatBoxAddCallback;
- (void)setOnCommentContentChatBoxAddCallback:(id /* block */)arg1;
- (id /* block */)queryIsShowingInputViewBlock;
- (void)setQueryIsShowingInputViewBlock:(id /* block */)arg1;
- (id /* block */)onCommentContainerStyleDidChangeCallback;
- (void)setOnCommentContainerStyleDidChangeCallback:(id /* block */)arg1;
- (double)publicContentHeight;
- (void)setPublicContentHeight:(double)arg1;
- (long long)currentStyle;
- (void)setCurrentStyle:(long long)arg1;
- (BOOL)isScaleAdjusting;
- (void)setIsScaleAdjusting:(BOOL)arg1;
- (BOOL)forbidChangeContainerStyle;
- (void)setForbidChangeContainerStyle:(BOOL)arg1;
- (id /* block */)getCommentContainterHeightCallback;
- (void)setGetCommentContainterHeightCallback:(id /* block */)arg1;
- (id /* block */)getCommentTableHeightCallback;
- (void)setGetCommentTableHeightCallback:(id /* block */)arg1;
- (id /* block */)onCommentContainerStyleChangeCallback;
- (void)setOnCommentContainerStyleChangeCallback:(id /* block */)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (BOOL)isInLive;
- (void)setIsInLive:(BOOL)arg1;
- (BOOL)hasStartFetch;
- (void)setHasStartFetch:(BOOL)arg1;
- (long long)contentStyle;
- (void)setContentStyle:(long long)arg1;
- (long long)currContentIndex;
- (void)setCurrContentIndex:(long long)arg1;
- (id)currContentBox;
- (long long)commentContentEnableFlag;
- (void)setCommentContentEnableFlag:(long long)arg1;
- (id)commentEntranceTabBar;
- (void)setCommentEntranceTabBar:(id)arg1;
- (void)setContentViewList:(id)arg1;
- (void)setPendingContentViewList:(id)arg1;
- (void)setRedDotModelList:(id)arg1;
- (void)setChatRoomBoxList:(id)arg1;
- (CGPoint)beginInteractContentOffset;
- (void)setBeginInteractContentOffset:(CGPoint)arg1;
- (BOOL)isResetingChatRoom;
- (void)setIsResetingChatRoom:(BOOL)arg1;
- (double)currentStateContentTop;
- (void)setCurrentStateContentTop:(double)arg1;
- (BOOL)isSynchronizeLayout;
- (void)setIsSynchronizeLayout:(BOOL)arg1;
- (BOOL)isExitLive;
- (void)setIsExitLive:(BOOL)arg1;
- (BOOL)isExpandAnimating;
- (BOOL)isFoldAnimating;
- (BOOL)needRestoreVisibleCommentAfterLayout;
- (void)setNeedRestoreVisibleCommentAfterLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end

