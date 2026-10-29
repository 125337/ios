@interface VoiceTransViewV2 : UIView <VoiceTransLogicObserver, VoiceTransView_ContentDelegate>
{
    BOOL _isRequestingXiaoweiSug; // +0x8
    BOOL _canShowQuickReplyEmojiForCurrentSession; // +0x9
    BOOL _didStartRecord; // +0xa
    BOOL _didReceiveTouchEnd; // +0xb
    BOOL _pendingSendOnTransEnd; // +0xc
    BOOL _pendingXiaoweiHalfScreenOnTransEnd; // +0xd
    BOOL _softProtocolActive; // +0xe
    BOOL _pendingCommandReleaseSend; // +0xf
    BOOL _didCommitCommandReleaseSend; // +0x10
    BOOL _touchEndStillEntranceCircle; // +0x11
    BOOL _usesVoiceOverRelativeSelection; // +0x12
    BOOL _hasVoiceOverTouchOrigin; // +0x13
    id <VoiceTransViewDelegate> _delegate; // +0x18
    long long _scene; // +0x20
    NSString * _hotwordASREndInputBoxText; // +0x28
    NSString * _hotwordCommandInputBoxText; // +0x30
    NSString * _hotwordVoiceId; // +0x38
    UIView * _backgroundBlurView; // +0x40
    UIView * _backgroundView; // +0x48
    UIView * _editingBackgroundView; // +0x50
    CAGradientLayer * _backgroundGradientLayer; // +0x58
    VoiceTransView_ContentV2 * _infoContentView; // +0x60
    id <VoiceTransSendCollapseAnimating> _sendCollapseAnimator; // +0x68
    VoiceTransView_BottomV2 * _bottomContentView; // +0x70
    SightIconView * _preparingCircleView; // +0x78
    CAShapeLayer * _cancelOperateLayer; // +0x80
    CAShapeLayer * _commandOperateLayer; // +0x88
    CAShapeLayer * _translateOperateLayer; // +0x90
    VoiceRecordArcLabel * _cancelArcLabel; // +0x98
    VoiceRecordArcLabel * _commandArcLabel; // +0xa0
    VoiceRecordArcLabel * _translateArcLabel; // +0xa8
    UIImageView * _commandImageView; // +0xb0
    UIImageView * _xiaoweiBoneImageView; // +0xb8
    UIImageView * _xiaoweiImageView; // +0xc0
    VoiceTransQuickReplyView * _quickReplyView; // +0xc8
    VoiceTransCommandLogic * _quickReplyCommandLogic; // +0xd0
    VoiceTransXiaoWeiSugView * _sugView; // +0xd8
    VoiceTransXiaoWeiLogic * _xiaoweiSugLogic; // +0xe0
    NSString * _xiaoweiSugSessionId; // +0xe8
    NSArray * _xiaoweiSugList; // +0xf0
    long long _selectedSugIndex; // +0xf8
    VoiceTransLogic * _voiceTransLogic; // +0x100
    double _sendCollapseStartOffsetY; // +0x108
    unsigned long long _pendingHardProtocolAction; // +0x110
    NSString * _precommandBasePrefix; // +0x118
    NSString * _hardProtocolTextSnapshot; // +0x120
    NSString * _xiaoweiTranslateResult; // +0x128
    NSData * _analyzedChatContext; // +0x130
    unsigned long long _chatContextGeneration; // +0x138
    UIScreenEdgePanGestureRecognizer * _edgePanGesture; // +0x140
    double _voiceOverTouchOriginX; // +0x148
    MMVoiceAtContactCoordinator * _atContactCoordinator; // +0x150
    UIEdgeInsets _operateViewLayoutInsets; // +0x158
}
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2;
- (id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 scene:(long long)arg3;
- (void)dealloc;
- (UIEdgeInsets)horizontalLayoutInsets;
- (double)horizontalLayoutWidth;
- (double)horizontalLayoutCenterX;
- (void)updateOperateArcGradientMaskForLayer:(id)arg1 isLeft:(BOOL)arg2 animated:(BOOL)arg3;
- (void)animateOperateArcLayer:(id)arg1 strokeColor:(id)arg2 lineWidth:(double)arg3;
- (void)safeAreaInsetsDidChange;
- (void)setFrame:(CGRect)arg1;
- (void)layoutOperateViewsForCurrentBounds;
- (void)prepareLayoutForPresentation;
- (void)layoutSubviews;
- (BOOL)canFitMinimumTextBubble;
- (void)startRecordingWithRect:(CGRect)arg1;
- (BOOL)canShowQuickReplyEmoji;
- (void)requestQuickReplyEmoji;
- (void)onTouchMoveWithTouches:(id)arg1;
- (void)requestXiaoweiSugIfNeeded;
- (void)configureAndRevealSugView;
- (void)updateSugViewVisibilityForState:(unsigned long long)arg1;
- (void)onTouchMoveWithTouchPoint:(CGPoint)arg1;
- (void)enterXiaoweiAndSelectSugAtPoint:(CGPoint)arg1;
- (void)onTouchEndWithTouches:(id)arg1;
- (void)onTouchCancelWithTouches:(id)arg1;
- (void)onHostViewControllerWillDisappear;
- (void)doShowAnimation:(CGRect)arg1;
- (void)doRevealContentAnimation;
- (void)doExitAnimation;
- (void)doExitAnimation:(int)arg1;
- (void)exitAndShowXiaoWeiHalfScreen;
- (void)doHideExceptBubbleAnimation;
- (void)doSendCollapseAfterTransEnd;
- (void)doSendCollapseAfterTransEndWithText:(id)arg1;
- (void)doSendCollapseAfterTransEndWithText:(id)arg1 hotwordInputBoxText:(id)arg2;
- (void)beginSendCollapseCaptureOffset;
- (BOOL)isPointAboveQuickReply:(CGPoint)arg1;
- (void)commitQuickReplyEmojiSend;
- (void)handleCommandReleaseSend;
- (void)onCommandReleaseListeningTimeout;
- (void)onCommandOutcomeSettledForRelease;
- (void)commitCommandReleaseSend;
- (void)hideOperateArcsForCommandRelease;
- (void)doSendCollapseAnimationWithMsg:(id)arg1;
- (void)retrySendCollapseAnimationWithMsg:(id)arg1 retryCount:(unsigned long long)arg2;
- (id)collapseBubbleCellViewsForCellView:(id)arg1;
- (BOOL)tryCollapseBubbleToCellForMsg:(id)arg1;
- (id)sendCollapseAnimator;
- (void)doFadeAnimationCompletion:(id /* block */)arg1;
- (void)doAnimationForEdit;
- (void)updateGradientLocationsForKeyboard:(BOOL)arg1;
- (void)layoutEditingBackgroundView;
- (id)backgroundBlurView;
- (id)infoContentView;
- (id)preparingCircleView;
- (id)bottomContentView;
- (id)cancelOperateLayer;
- (id)commandOperateLayer;
- (CGPoint)xiaoweiBoneCenter;
- (BOOL)xiaoweiTipsTopAboveBoneForTipsHeight:(double)arg1 resultTop:(double *)arg2;
- (id)translateOperateLayer;
- (id)cancelArcLabel;
- (id)commandArcLabel;
- (id)translateArcLabel;
- (BOOL)isAllowCommand;
- (BOOL)isSupportXiaowei;
- (BOOL)isSupportXiaoweiSug;
- (double)sideArcInnerAngle;
- (id)makeOperateLayerWithStartAngle:(double)arg1 endAngle:(double)arg2;
- (void)applyOperateArcStyle:(unsigned long long)arg1 layer:(id)arg2 label:(id)arg3;
- (void)applyOperateStyleForRecordState:(unsigned long long)arg1;
- (void)applyXiaoweiSideArcDim;
- (void)transformToRecordState:(unsigned long long)arg1;
- (id)getBaseMsgContentViewController;
- (void)updateTransExtraDataAllowCommand:(BOOL)arg1;
- (id)buildChatSendExtraDataWithPrefix:(id)arg1 allowCommand:(BOOL)arg2;
- (BOOL)shouldAnalyzeChatContext;
- (void)beginAnalyzedChatContextSession;
- (void)invalidateAnalyzedChatContextSession;
- (void)requestAnalyzedChatContext;
- (void)applyAnalyzedChatContext:(id)arg1 forGeneration:(unsigned long long)arg2;
- (void)pauseCommandRecognitionForTextEditing;
- (void)restartCommandRecognitionAfterTextEditing;
- (void)onVoiceTransBegan:(id)arg1;
- (void)onVoiceTransLevelMeter:(float)arg1;
- (void)onVoiceTransResultChange;
- (void)onVoiceTransPreSegmentFinalResult:(id)arg1;
- (void)onVoiceTransVadIsEnd:(BOOL)arg1;
- (void)onVoiceTransDidEnd:(int)arg1;
- (void)onVoiceTransFail:(long long)arg1;
- (double)getVoiceTransTopObstructionBottomInWindow;
- (void)sendCommandResultAfterStateSettled;
- (void)onClickCancelButton;
- (void)onClickDictationProtocolPrimaryButton;
- (void)onClickDictationProtocolLink;
- (void)onClickSendButton;
- (BOOL)canSendTextMessage:(id)arg1;
- (void)handleEdgePanGesture:(id)arg1;
- (BOOL)shouldApplyDictationProtocol;
- (BOOL)shouldRequireHardProtocol;
- (BOOL)hasValidProtocolText;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)hotwordASREndInputBoxText;
- (void)setHotwordASREndInputBoxText:(id)arg1;
- (id)hotwordCommandInputBoxText;
- (void)setHotwordCommandInputBoxText:(id)arg1;
- (id)hotwordVoiceId;
- (void)setHotwordVoiceId:(id)arg1;
- (void)setBackgroundBlurView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)editingBackgroundView;
- (void)setEditingBackgroundView:(id)arg1;
- (id)backgroundGradientLayer;
- (void)setBackgroundGradientLayer:(id)arg1;
- (UIEdgeInsets)operateViewLayoutInsets;
- (void)setOperateViewLayoutInsets:(UIEdgeInsets)arg1;
- (void)setInfoContentView:(id)arg1;
- (void)setSendCollapseAnimator:(id)arg1;
- (void)setBottomContentView:(id)arg1;
- (void)setPreparingCircleView:(id)arg1;
- (void)setCancelOperateLayer:(id)arg1;
- (void)setCommandOperateLayer:(id)arg1;
- (void)setTranslateOperateLayer:(id)arg1;
- (void)setCancelArcLabel:(id)arg1;
- (void)setCommandArcLabel:(id)arg1;
- (void)setTranslateArcLabel:(id)arg1;
- (id)commandImageView;
- (void)setCommandImageView:(id)arg1;
- (id)xiaoweiBoneImageView;
- (void)setXiaoweiBoneImageView:(id)arg1;
- (id)xiaoweiImageView;
- (void)setXiaoweiImageView:(id)arg1;
- (id)quickReplyView;
- (void)setQuickReplyView:(id)arg1;
- (id)quickReplyCommandLogic;
- (void)setQuickReplyCommandLogic:(id)arg1;
- (id)sugView;
- (void)setSugView:(id)arg1;
- (id)xiaoweiSugLogic;
- (void)setXiaoweiSugLogic:(id)arg1;
- (id)xiaoweiSugSessionId;
- (void)setXiaoweiSugSessionId:(id)arg1;
- (id)xiaoweiSugList;
- (void)setXiaoweiSugList:(id)arg1;
- (BOOL)isRequestingXiaoweiSug;
- (void)setIsRequestingXiaoweiSug:(BOOL)arg1;
- (long long)selectedSugIndex;
- (void)setSelectedSugIndex:(long long)arg1;
- (BOOL)canShowQuickReplyEmojiForCurrentSession;
- (void)setCanShowQuickReplyEmojiForCurrentSession:(BOOL)arg1;
- (id)voiceTransLogic;
- (void)setVoiceTransLogic:(id)arg1;
- (BOOL)didStartRecord;
- (void)setDidStartRecord:(BOOL)arg1;
- (BOOL)didReceiveTouchEnd;
- (void)setDidReceiveTouchEnd:(BOOL)arg1;
- (BOOL)pendingSendOnTransEnd;
- (void)setPendingSendOnTransEnd:(BOOL)arg1;
- (BOOL)pendingXiaoweiHalfScreenOnTransEnd;
- (void)setPendingXiaoweiHalfScreenOnTransEnd:(BOOL)arg1;
- (double)sendCollapseStartOffsetY;
- (void)setSendCollapseStartOffsetY:(double)arg1;
- (unsigned long long)pendingHardProtocolAction;
- (void)setPendingHardProtocolAction:(unsigned long long)arg1;
- (id)precommandBasePrefix;
- (void)setPrecommandBasePrefix:(id)arg1;
- (id)hardProtocolTextSnapshot;
- (void)setHardProtocolTextSnapshot:(id)arg1;
- (BOOL)softProtocolActive;
- (void)setSoftProtocolActive:(BOOL)arg1;
- (id)xiaoweiTranslateResult;
- (void)setXiaoweiTranslateResult:(id)arg1;
- (id)analyzedChatContext;
- (void)setAnalyzedChatContext:(id)arg1;
- (unsigned long long)chatContextGeneration;
- (void)setChatContextGeneration:(unsigned long long)arg1;
- (BOOL)pendingCommandReleaseSend;
- (void)setPendingCommandReleaseSend:(BOOL)arg1;
- (BOOL)didCommitCommandReleaseSend;
- (void)setDidCommitCommandReleaseSend:(BOOL)arg1;
- (id)edgePanGesture;
- (void)setEdgePanGesture:(id)arg1;
- (BOOL)touchEndStillEntranceCircle;
- (void)setTouchEndStillEntranceCircle:(BOOL)arg1;
- (BOOL)usesVoiceOverRelativeSelection;
- (void)setUsesVoiceOverRelativeSelection:(BOOL)arg1;
- (BOOL)hasVoiceOverTouchOrigin;
- (void)setHasVoiceOverTouchOrigin:(BOOL)arg1;
- (double)voiceOverTouchOriginX;
- (void)setVoiceOverTouchOriginX:(double)arg1;
- (id)atContactCoordinator;
- (void)setAtContactCoordinator:(id)arg1;
- (void).cxx_destruct;
@end
