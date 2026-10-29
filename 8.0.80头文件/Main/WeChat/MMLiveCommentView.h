@interface MMLiveCommentView : UIView <WCActionSheetDelegate, MMLiveConnectMicExt, IMMFontMgrExt, MMLiveInputToolViewDelegate, MMLiveCommentDataPostExt, MMLiveTaskMgrExt>
{
    BOOL _isForeignerUnableComment; // +0x8
    BOOL _isCloseComment; // +0x9
    BOOL _isContentShow; // +0xa
    BOOL _isAntispamUnableCommentInChatRoom; // +0xb
    BOOL _isInLive; // +0xc
    BOOL _isEnterLiveWithError; // +0xd
    BOOL _hasExitLive; // +0xe
    BOOL _isAssumingAudienceCommentEnabled; // +0xf
    BOOL _isLayoutStandardChanged; // +0x10
    BOOL _isLayoutFontScaleChanged; // +0x11
    BOOL _shouldRestoreInputAlphaAfterRotation; // +0x12
    BOOL _isAntispamUnableCommentInQuestionBox; // +0x13
    id <MMLiveCommentViewDelegate> _delegate; // +0x18
    MMLiveTaskId * _taskId; // +0x20
    MMLiveCommentDataItem * _selectedComment; // +0x28
    double _inputViewAlpha; // +0x30
    WCLiveBottomTextButton * _commentButton; // +0x38
    WCLiveBottomTextButton * _barrageSettingBtn; // +0x40
    WCLiveBottomTextButton * _barrageSwitchButton; // +0x48
    unsigned long long _liveId; // +0x50
    NSString * _roomId; // +0x58
    NSMutableArray * _selfCommitTimeArray; // +0x60
    MMLiveCommentDataPostEngine * _commentPostEngine; // +0x68
    MMLiveCommentDataFetchEngne * _commentFetchEngine; // +0x70
    unsigned long long _previousCommentState; // +0x78
    unsigned long long _lastCommentState; // +0x80
    unsigned long long _commentState; // +0x88
    long long _roleType; // +0x90
    UIView * _cancelEditMaskView; // +0x98
    CAGradientLayer * _cancelEditMaskGradientLayer; // +0xa0
    MMLiveCustomTouchView * _contentBackView; // +0xa8
    MMUIButton * _cancelEditButton; // +0xb0
    UIView * _commentTableBackView; // +0xb8
    CAGradientLayer * _commentTableBackGradientLayer; // +0xc0
    MMTableView * _commentTableView; // +0xc8
    MMLiveCustomTouchView * _commentTableTapView; // +0xd0
    MMLiveCommentTableViewModel * _commentTableViewModel; // +0xd8
    MMLiveInputToolView * _liveInputView; // +0xe0
    EmoticonBoardView * _emoticonBoardView; // +0xe8
    MMLiveUnReadCountView * _unReadCountLabel; // +0xf0
    MMLiveCommentPubbleView * _banCommentPubbleView; // +0xf8
    UIView * _notifyCommentContentView; // +0x100
    NSError * _enterLiveError; // +0x108
    NSIndexPath * _visbleIndexPathBeforeCollapse; // +0x110
    long long _currentOrientation; // +0x118
    long long _currentLayoutOrientation; // +0x120
    double _currentLayoutStandardWidth; // +0x128
    double _currentLayoutStandardLeft; // +0x130
    double _currentLayoutFontScale; // +0x138
}
- (id)initWithTaskId:(id)arg1 delegate:(id)arg2;
- (id)initWithTaskId:(id)arg1 assumeAudienceCommentEnabled:(BOOL)arg2 delegate:(id)arg3;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)initNotification;
- (void)layoutSubviews;
- (void)judgeLayoutStandardWidthChanged;
- (void)judgeLayoutFontScaleChanged;
- (void)handleLayoutOrientationChangedBeforeLayout;
- (void)handleLayoutOrientationChangedAfterLayout;
- (void)storeVisibleCommentBeforeLayout;
- (void)restoreVisibleCommentAfterLayout;
- (void)limitCommentCntBeforeLayout;
- (long long)currentOrientation;
- (void)initDefaultData;
- (id)createCommentPostEngine;
- (void)initDefaultLayoutStandard;
- (void)initDefaultLayoutFontScale;
- (void)updateLayoutStandardWidth;
- (void)updateLayoutFontScale;
- (void)addGestureRecognizers;
- (void)layoutUI;
- (void)hideContent;
- (void)showContent;
- (void)forceLayoutForOrientationChanged;
- (void)updateCommentButtonBgColor:(id)arg1;
- (void)layoutContentBackView;
- (double)commentTableBackViewBottom;
- (void)layoutCommentTableBackView;
- (void)changeCommentTableBackViewFrame:(double)arg1 isTop:(BOOL)arg2;
- (double)commentTableHeightForInputShow:(BOOL)arg1;
- (double)commentTableWidth;
- (double)commentTableHeight;
- (Class)commentTableCellClass;
- (id)registerCellClasses;
- (void)layoutCommentTableView;
- (id)genCommentTableView;
- (void)handleTableViewPanGesture:(id)arg1;
- (CGRect)commentTableTapViewFrame;
- (void)layoutCommentTableTapView;
- (void)layoutInputView;
- (CGSize)getCommentTableBackBottomAreaSize;
- (void)adjustCommentTableHeightForInputShowChange:(BOOL)arg1;
- (void)layoutEmoticonBoardView;
- (id)createUnReadCountLabel;
- (void)layoutUnReadCountLabel;
- (void)updateUnReadCountLabel:(unsigned long long)arg1;
- (id)createUnReadCountStr;
- (void)layoutCommentButton;
- (void)updateCommentButtonAlpha;
- (void)updateCommentButtonAlpha:(double)arg1;
- (void)updateTableBackViewHidden;
- (void)layoutCancelEditMaskView;
- (void)updateEditMaskGradientBottomPosition:(double)arg1;
- (void)layoutCancelEditButton;
- (void)updateCommentButtonImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)updateCommentState:(unsigned long long)arg1;
- (void)updateCommentState:(unsigned long long)arg1 banOrAllowCommentNotify:(id)arg2;
- (void)resignCommentInput;
- (void)checkAndCloseHalfScreenViewAnimated:(BOOL)arg1;
- (void)updateComponentHiddenForCommentEnableChanged;
- (void)handleEnableCommentState:(id)arg1;
- (void)handleDisableCommentState:(id)arg1;
- (void)displayBanCommentPubbleView:(id)arg1;
- (BOOL)isChangeToDisableState;
- (id)createCommentTableViewModel;
- (id)commentTableViewModel;
- (void)setDelegate:(id)arg1;
- (id)commentDataMgr;
- (void)adjustCommentTableViewHeight;
- (void)onEnterLiveWithError:(id)arg1;
- (void)onEnterLive;
- (void)onExitLive;
- (void)updateCommentTableBottom;
- (void)updateCommentTableHeight;
- (void)updateCommentButtonLeft;
- (void)banOrOpenComment;
- (void)setIsInLive:(BOOL)arg1;
- (id)selfCommitTimeArray;
- (BOOL)isShowingInputView;
- (double)commentTableRight;
- (id)liveTask;
- (BOOL)isCommentLandscapeBarrageStyle;
- (void)showInputViewAtCommentTableViewRow:(long long)arg1;
- (void)recordSelfComment;
- (BOOL)checkCommentAbilityForAudience;
- (BOOL)checkEnableCommitText;
- (BOOL)didCommitText:(id)arg1;
- (BOOL)checkIsSelfCommitOverFrequency;
- (double)getVisibleHeight;
- (void)onInputViewShowChange:(BOOL)arg1;
- (void)handleBanOrOpenCommentFailed:(BOOL)arg1;
- (void)showToastForBanOrAllowComment:(BOOL)arg1 success:(BOOL)arg2;
- (void)onLiveConnectedMic:(id)arg1;
- (void)onLiveUnConnectedMic:(id)arg1;
- (void)onLiveCanApplyConnecteMicChanged:(BOOL)arg1;
- (void)onLiveConnectMicConditionSettingChanged:(unsigned long long)arg1;
- (void)onLiveConnectMicModeChanged:(id)arg1;
- (void)onLiveConnectMicAudienceMutedByAnchorStatusChanged:(BOOL)arg1;
- (void)onPostFailError:(id)arg1 localSeq:(double)arg2 taskId:(id)arg3;
- (void)onCancelEditTouched:(id)arg1;
- (void)closeGesture:(id)arg1;
- (void)scrollToCommentTableBottom:(id)arg1;
- (BOOL)applyUpdateLiveCommentEnabled:(BOOL)arg1 taskId:(id)arg2;
- (void)handleOnUpdateLiveCommentEnabledResult:(id)arg1 taskId:(id)arg2 enableComment:(BOOL)arg3 silence:(BOOL)arg4;
- (void)handleOnNotifyLiveIsEnableComment:(BOOL)arg1;
- (void)handleLiveIsEnableCommentForAnchor:(BOOL)arg1;
- (void)handleLiveIsEnableCommentFromServerForAnchorMainScene:(BOOL)arg1;
- (void)handleLiveIsEnableCommentForAudience:(BOOL)arg1;
- (void)handleUIOrientationChanged:(id)arg1;
- (void)updateInputViewAlpha:(double)arg1 record:(BOOL)arg2;
- (void)updateInputViewAccessibility:(BOOL)arg1;
- (void)onCollapseAnimationWillStartBeforeRotation:(id)arg1;
- (void)onMinimizeInteractiveWillEnd:(id)arg1;
- (void)storeCommentDataBeforeMinimize;
- (void)onExtendFromCollapseAnimationDidEndWithLiveTask:(id)arg1;
- (void)restoreCommentDataAfterMinimize;
- (BOOL)isCommentItemSupportDisplay:(id)arg1;
- (void)onAppendCommentDataItemList:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3 preAppend:(BOOL)arg4;
- (void)onAppendCommentDataItem:(id)arg1 forTaskId:(id)arg2;
- (void)onAppendCommentDataItem:(id)arg1 forTaskId:(id)arg2 isPublic:(BOOL)arg3;
- (void)onAppendCommentDataItem:(id)arg1 forTaskId:(id)arg2 boxId:(id)arg3;
- (void)onFontSizeChange;
- (void)refreshWidgetsForFontSizeChange;
- (void)updateCommentAutoScrollStop:(BOOL)arg1;
- (BOOL)checkUITouchInCommentTableView:(id)arg1;
- (id)delegate;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)selectedComment;
- (void)setSelectedComment:(id)arg1;
- (double)inputViewAlpha;
- (void)setInputViewAlpha:(double)arg1;
- (id)commentButton;
- (void)setCommentButton:(id)arg1;
- (id)barrageSettingBtn;
- (void)setBarrageSettingBtn:(id)arg1;
- (id)barrageSwitchButton;
- (void)setBarrageSwitchButton:(id)arg1;
- (unsigned long long)liveId;
- (void)setLiveId:(unsigned long long)arg1;
- (id)roomId;
- (void)setRoomId:(id)arg1;
- (void)setSelfCommitTimeArray:(id)arg1;
- (id)commentPostEngine;
- (void)setCommentPostEngine:(id)arg1;
- (id)commentFetchEngine;
- (unsigned long long)previousCommentState;
- (void)setPreviousCommentState:(unsigned long long)arg1;
- (unsigned long long)lastCommentState;
- (void)setLastCommentState:(unsigned long long)arg1;
- (unsigned long long)commentState;
- (void)setCommentState:(unsigned long long)arg1;
- (long long)roleType;
- (void)setRoleType:(long long)arg1;
- (id)cancelEditMaskView;
- (void)setCancelEditMaskView:(id)arg1;
- (id)cancelEditMaskGradientLayer;
- (void)setCancelEditMaskGradientLayer:(id)arg1;
- (id)contentBackView;
- (void)setContentBackView:(id)arg1;
- (id)cancelEditButton;
- (void)setCancelEditButton:(id)arg1;
- (id)commentTableBackView;
- (void)setCommentTableBackView:(id)arg1;
- (id)commentTableBackGradientLayer;
- (void)setCommentTableBackGradientLayer:(id)arg1;
- (id)commentTableView;
- (void)setCommentTableView:(id)arg1;
- (id)commentTableTapView;
- (void)setCommentTableTapView:(id)arg1;
- (void)setCommentTableViewModel:(id)arg1;
- (id)liveInputView;
- (void)setLiveInputView:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (id)unReadCountLabel;
- (void)setUnReadCountLabel:(id)arg1;
- (id)banCommentPubbleView;
- (void)setBanCommentPubbleView:(id)arg1;
- (id)notifyCommentContentView;
- (void)setNotifyCommentContentView:(id)arg1;
- (BOOL)isForeignerUnableComment;
- (void)setIsForeignerUnableComment:(BOOL)arg1;
- (BOOL)isCloseComment;
- (void)setIsCloseComment:(BOOL)arg1;
- (BOOL)isContentShow;
- (void)setIsContentShow:(BOOL)arg1;
- (BOOL)isAntispamUnableCommentInChatRoom;
- (void)setIsAntispamUnableCommentInChatRoom:(BOOL)arg1;
- (BOOL)isInLive;
- (BOOL)isEnterLiveWithError;
- (void)setIsEnterLiveWithError:(BOOL)arg1;
- (id)enterLiveError;
- (void)setEnterLiveError:(id)arg1;
- (BOOL)hasExitLive;
- (void)setHasExitLive:(BOOL)arg1;
- (BOOL)isAssumingAudienceCommentEnabled;
- (void)setIsAssumingAudienceCommentEnabled:(BOOL)arg1;
- (id)visbleIndexPathBeforeCollapse;
- (void)setVisbleIndexPathBeforeCollapse:(id)arg1;
- (void)setCurrentOrientation:(long long)arg1;
- (long long)currentLayoutOrientation;
- (void)setCurrentLayoutOrientation:(long long)arg1;
- (double)currentLayoutStandardWidth;
- (void)setCurrentLayoutStandardWidth:(double)arg1;
- (double)currentLayoutStandardLeft;
- (void)setCurrentLayoutStandardLeft:(double)arg1;
- (BOOL)isLayoutStandardChanged;
- (void)setIsLayoutStandardChanged:(BOOL)arg1;
- (double)currentLayoutFontScale;
- (void)setCurrentLayoutFontScale:(double)arg1;
- (BOOL)isLayoutFontScaleChanged;
- (void)setIsLayoutFontScaleChanged:(BOOL)arg1;
- (BOOL)shouldRestoreInputAlphaAfterRotation;
- (void)setShouldRestoreInputAlphaAfterRotation:(BOOL)arg1;
- (BOOL)isAntispamUnableCommentInQuestionBox;
- (void)setIsAntispamUnableCommentInQuestionBox:(BOOL)arg1;
- (void).cxx_destruct;
@end
