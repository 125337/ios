@interface MMFinderLiveCommentTableViewCell : MMLiveCommentTableViewCell <MMLiveGestureRecognizerDelegate, CAAnimationDelegate, PAGViewListener, MMMenuControllerExt, MMLiveCommentDataExt>
{
    BOOL _isShowMenu; // +0x8
    BOOL _isInGetContactProcess; // +0x9
    BOOL _hasStartCustomAppend; // +0xa
    BOOL _isCustomAppending; // +0xb
    double _minimumPressDuration; // +0x10
    MMLiveTaskId * _taskId; // +0x18
    id /* block */ _cellActionInvokeBlock; // +0x20
    id /* block */ _cellDidTapBlock; // +0x28
    id /* block */ _cellDidLongPressedBlock; // +0x30
    id /* block */ _cellLongPressTouchChangedBlock; // +0x38
    id /* block */ _needStopTableAutoScrollBlock; // +0x40
    id /* block */ _getSingleEnableCommentBlock; // +0x48
    id /* block */ _cellDidDoubleTapBlock; // +0x50
    id /* block */ _retryPostBlock; // +0x58
    MMLiveCommentPubbleCell * _pubbleCell; // +0x60
    UIColor * _initialPubbleBackColor; // +0x68
    UITapGestureRecognizer * _tapGesture; // +0x70
    MMLiveLongPressRecognizer * _longPressGesture; // +0x78
    UITapGestureRecognizer * _doubleTapGesture; // +0x80
    unsigned long long _lastGetContactTime; // +0x88
    UIView * _rightEmptyAreaView; // +0x90
    MMUIButton * _likeButton; // +0x98
    UITapGestureRecognizer * _rightEmptyAreaTapGesture; // +0xa0
    PAGView * _likeAnimationView; // +0xa8
    PAGView * _likeAnimationViewForMenu; // +0xb0
    WCFinderAnimationLoadingView * _statusLoadingView; // +0xb8
    MMUIButton * _statusFailButton; // +0xc0
    id /* block */ _customAppendCompletion; // +0xc8
    FinderLiveContact * _peerContact; // +0xd0
}
+ (BOOL)isSupportTap:(id)arg1;
+ (BOOL)isSupportLongPress:(id)arg1;
+ (BOOL)isSupportDoubleTap:(id)arg1;
+ (long long)getPubbleCellTapActionType:(id)arg1 taskId:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;
- (void)prepareForReuse;
- (void)prepareForDisplay;
- (void)reloadLikeInfo;
- (void)willDisplay;
- (void)initNotifications;
- (void)registerExtensions;
- (id)tapGesture;
- (id)getRightEmptyAreaTapGesture;
- (id)longPressGesture;
- (id)doubleTapGesture;
- (void)addGestureForPubbleFrame:(id)arg1;
- (void)layoutSubviews;
- (void)layoutPubbleCell;
- (void)updatePubbleCellOrigin;
- (void)createStatusLoadingView;
- (void)layoutStatusLoadingView;
- (void)createStatusFailButton;
- (void)layoutStatusFailButton;
- (void)statusButtonClick:(id)arg1;
- (BOOL)isStatusWidgetsVisible;
- (void)updateLikeWidgetsVisible;
- (void)layoutLikeButton;
- (void)likeButtonClick:(id)arg1;
- (void)doubleTapLikeButton:(id)arg1;
- (void)setCellFrame:(id)arg1;
- (void)layoutRightEmptyAreaView;
- (void)refreshUIForCommentStatus;
- (void)setHasStartCustomAppend:(BOOL)arg1;
- (id)finderLiveCellFrame;
- (void)onPubbleTapGestureRecognizer:(id)arg1;
- (void)onRightEmptyAreaTapGestureRecognizer:(id)arg1;
- (BOOL)selfIsCommentAssistant;
- (void)operateManagementEvent:(id /* block */)arg1;
- (BOOL)showMenuForAnchorIfNeeded;
- (void)showMenuItemsForCommentAssistantSelf;
- (void)showMenuItemsForCommentAssistant;
- (void)realShowMenuItemsForCommentAssistantWithCommentBannedFlag:(unsigned long long)arg1;
- (void)showMenuItemsForAnchorOrAssistant;
- (id)getMenuItem:(unsigned long long)arg1 isNoSense:(BOOL)arg2;
- (void)realShowMenuItemsForAnchorOrAssistantWithCommentBannedFlag:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)showMenuItemsForAnchorOrAssistantSelf;
- (void)showMenuItemsForAudience;
- (void)startCustomAppend:(id /* block */)arg1;
- (double)getCustomAppendDelayEndDuration;
- (void)invokeCustomAppend;
- (BOOL)enableCustomAppend;
- (void)delayEndCustomAppend;
- (void)cancelCustomAppend;
- (void)endCustomAppend:(id)arg1;
- (void)handleEndCustomAppend:(BOOL)arg1;
- (double)getCustomAppendAnimationDuration;
- (double)getCustomAppendPubbleCellInitTop;
- (double)calculateMenuControllerY;
- (unsigned int)commentSenderRoleType;
- (BOOL)isCommentSenderRoleTypeValid;
- (id)finderLiveTask;
- (void)onPubbleLongPressGestureRecognizer:(id)arg1;
- (void)onPubbleDoubleTapGestureRecognizer:(id)arg1;
- (void)onTouchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)onTouchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)onTouchesCancel:(id)arg1 withEvent:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)onCommentActionTop:(id)arg1;
- (void)onCommentActionRoleProfile:(id)arg1;
- (void)onCommentActionRoleWXProfile:(id)arg1;
- (void)onCommentActionRoleFinder:(id)arg1;
- (void)onCommentActionClap:(id)arg1;
- (void)onCommentActionBanComment:(id)arg1;
- (void)onCommentActionBanNoSenseComment:(id)arg1;
- (void)onCommentActionAllowNoSenseComment:(id)arg1;
- (void)onCommentActionAllowComment:(id)arg1;
- (void)onCommentActionExpose:(id)arg1;
- (void)onCommentActionSendFlashSale:(id)arg1;
- (void)onCommentActionKickOut:(id)arg1;
- (void)onCommentActionReply:(id)arg1;
- (void)onCommentActionCopy:(id)arg1;
- (void)onCommentActionLike:(id)arg1;
- (void)onCommentActionUnLike:(id)arg1;
- (void)onCommentActionLikeFromMenu:(id)arg1;
- (void)onCommentActionUnLike;
- (void)reportCommentLike:(long long)arg1 comment:(id)arg2;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onMenuControllerDidShowFailed:(id)arg1;
- (void)updateNotShowMenuDelayed;
- (void)updateNotShowMenu;
- (unsigned long long)getCommentSenderSingleDisableCommentDef;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)onSelfMMLiveCommentDataStatusUpdated:(id)arg1 forTaskId:(id)arg2;
- (void)playLikeAnimation;
- (void)onAnimationStart:(id)arg1;
- (void)onAnimationEnd:(id)arg1;
- (void)playLikeAnimationInMenuItemView:(id)arg1;
- (id)createLikeAnimationView;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)checkSelfHasConsumeTouch:(CGPoint)arg1 withEvent:(id)arg2;
- (double)minimumPressDuration;
- (void)setMinimumPressDuration:(double)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id /* block */)cellActionInvokeBlock;
- (void)setCellActionInvokeBlock:(id /* block */)arg1;
- (id /* block */)cellDidTapBlock;
- (void)setCellDidTapBlock:(id /* block */)arg1;
- (id /* block */)cellDidLongPressedBlock;
- (void)setCellDidLongPressedBlock:(id /* block */)arg1;
- (id /* block */)cellLongPressTouchChangedBlock;
- (void)setCellLongPressTouchChangedBlock:(id /* block */)arg1;
- (id /* block */)needStopTableAutoScrollBlock;
- (void)setNeedStopTableAutoScrollBlock:(id /* block */)arg1;
- (id /* block */)getSingleEnableCommentBlock;
- (void)setGetSingleEnableCommentBlock:(id /* block */)arg1;
- (id /* block */)cellDidDoubleTapBlock;
- (void)setCellDidDoubleTapBlock:(id /* block */)arg1;
- (id /* block */)retryPostBlock;
- (void)setRetryPostBlock:(id /* block */)arg1;
- (id)pubbleCell;
- (void)setPubbleCell:(id)arg1;
- (BOOL)isShowMenu;
- (void)setIsShowMenu:(BOOL)arg1;
- (id)initialPubbleBackColor;
- (void)setInitialPubbleBackColor:(id)arg1;
- (void)setTapGesture:(id)arg1;
- (void)setLongPressGesture:(id)arg1;
- (void)setDoubleTapGesture:(id)arg1;
- (unsigned long long)lastGetContactTime;
- (void)setLastGetContactTime:(unsigned long long)arg1;
- (BOOL)isInGetContactProcess;
- (void)setIsInGetContactProcess:(BOOL)arg1;
- (id)rightEmptyAreaView;
- (void)setRightEmptyAreaView:(id)arg1;
- (id)likeButton;
- (void)setLikeButton:(id)arg1;
- (id)rightEmptyAreaTapGesture;
- (void)setRightEmptyAreaTapGesture:(id)arg1;
- (id)likeAnimationView;
- (void)setLikeAnimationView:(id)arg1;
- (id)likeAnimationViewForMenu;
- (void)setLikeAnimationViewForMenu:(id)arg1;
- (id)statusLoadingView;
- (void)setStatusLoadingView:(id)arg1;
- (id)statusFailButton;
- (void)setStatusFailButton:(id)arg1;
- (BOOL)hasStartCustomAppend;
- (BOOL)isCustomAppending;
- (void)setIsCustomAppending:(BOOL)arg1;
- (id /* block */)customAppendCompletion;
- (void)setCustomAppendCompletion:(id /* block */)arg1;
- (id)peerContact;
- (void)setPeerContact:(id)arg1;
- (void).cxx_destruct;
@end

