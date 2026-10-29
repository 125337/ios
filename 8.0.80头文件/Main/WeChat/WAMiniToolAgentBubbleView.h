@interface WAMiniToolAgentBubbleView : UIView <WAMiniToolAgentChannelDelegate, IChatbotAudioStateExt, WAMiniToolAgentBubbleProtocol>
{
    BOOL _hasDraggedCapsule; // +0x8
    BOOL _isDraggingOutToHide; // +0x9
    BOOL _needCancelSendVoice; // +0xa
    BOOL _isDarkModeEnabled; // +0xb
    BOOL _isListening; // +0xc
    BOOL _hasEverShown; // +0xd
    BOOL _waitingFirstReplyForFirstShow; // +0xe
    BOOL _isWaitingAsrTextForSend; // +0xf
    BOOL _isScrollingDimmed; // +0x10
    WAContact * _contact; // +0x18
    unsigned long long _state; // +0x20
    id <WAMiniToolAgentBubbleViewDelegate> _bubbleDelegate; // +0x28
    id _bubbleDelegateRetainer; // +0x30
    WAMiniToolAgentChannel * _channel; // +0x38
    UIView * _capsuleView; // +0x40
    UILabel * _capsuleTitleLabel; // +0x48
    UIImageView * _capsuleIconImageView; // +0x50
    PAGView * _capsuleIconPagView; // +0x58
    WAMiniToolVoiceRecordingOverlay * _recordingOverlay; // +0x60
    UILongPressGestureRecognizer * _longPressGes; // +0x68
    UIPanGestureRecognizer * _panGes; // +0x70
    UITapGestureRecognizer * _tapGes; // +0x78
    UIView * _hideHintMaskView; // +0x80
    UILabel * _hideHintLabel; // +0x88
    CAShapeLayer * _hideHintGlowLayer; // +0x90
    NSString * _latestAsrText; // +0x98
    unsigned long long _unreadResultCount; // +0xa0
    NSString * _dedupConvoId; // +0xa8
    NSString * _thinkingText; // +0xb0
    UIView * _badgeView; // +0xb8
    UILabel * _badgeCountLabel; // +0xc0
    CGPoint _capsuleCenter; // +0xc8
    CGPoint _panStartCenter; // +0xd8
}
- (id)sessionId;
- (id)initWithContact:(id)arg1;
- (void)dealloc;
- (void)setupCapsuleView;
- (void)setupCapsuleIconView;
- (void)setupBadgeView;
- (id)ensureIconPagView;
- (void)setupLongPressGesture;
- (void)setupPanGesture;
- (void)setupTapGesture;
- (BOOL)ensureSessionReadyForInteraction;
- (void)reportMiniToolAgentAction:(id)arg1;
- (void)reportMiniToolAgentAction:(id)arg1 actionNote:(id)arg2;
- (void)handleTap;
- (void)notifyUnreadStateChanged;
- (void)clearUnreadResult;
- (void)layoutSubviews;
- (double)capsuleHeight;
- (CGSize)capsuleSizeForState:(unsigned long long)arg1;
- (double)capsuleIconSlotWidth;
- (double)capsuleTitleWidthForState:(unsigned long long)arg1;
- (double)maxCapsuleTitleWidth;
- (id)capsuleTitleTextForState:(unsigned long long)arg1;
- (void)layoutCapsuleContent;
- (void)layoutBadgeView;
- (double)badgeWidth;
- (id)badgeCountText;
- (void)handlePanWithGesture:(id)arg1;
- (void)snapCapsuleToEdge;
- (double)snapBackCenterThreshold;
- (void)snapBackToInitialPosition;
- (CGPoint)clampedCapsuleCenter:(CGPoint)arg1;
- (CGPoint)anchoredCenterForSize:(CGSize)arg1;
- (void)setDraggingOutToHide:(BOOL)arg1;
- (void)ensureHideHintViews;
- (void)layoutHideHintGlow;
- (CGPath *)buildHideHintGlowRingPathInBounds:(CGRect)arg1;
- (void)hideHideHint;
- (void)confirmHideByDragOut;
- (void)cancelDraggingOutHint;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (void)prepareForShow;
- (CGRect)applyReappearStartState;
- (void)show;
- (void)prepareForReappear;
- (void)showWithReappearAnimation;
- (void)hide;
- (void)notifyWebViewScrolling;
- (void)setScrollingDimmed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)scheduleScrollingDimRestore;
- (void)cancelScrollingDimRestore;
- (void)restoreScrollingDim;
- (void)startListeningIfNeeded;
- (void)onAppDidEnterBackground;
- (void)cancelRecordingAndBackToIdle;
- (void)stopListeningIfNeeded;
- (void)setState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)applyCapsuleTitleForState:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)applyCapsuleIconForState:(unsigned long long)arg1;
- (void)finishThinkingRound;
- (void)scheduleThinkingTimeout;
- (void)cancelThinkingTimeout;
- (void)onThinkingTimeout;
- (void)scheduleFirstShowFirstReplyTimeout;
- (void)cancelFirstShowFirstReplyTimeout;
- (void)onFirstShowFirstReplyTimeout;
- (void)presentAfterFirstShowWait;
- (void)scheduleWaitAsrTimeout;
- (void)cancelWaitAsrTimeout;
- (void)onWaitAsrTimeout;
- (id)ensureRecordingOverlay;
- (void)showRecordingChromeAnimated:(BOOL)arg1;
- (void)hideRecordingChromeAnimated:(BOOL)arg1;
- (void)handleLongPressWithState:(long long)arg1 gesture:(id)arg2;
- (void)onLongPressBegan;
- (void)onLongPressChangedWithGesture:(id)arg1;
- (void)onLongPressEndedWithGesture:(id)arg1;
- (void)miniToolAgentChannel:(id)arg1 didReceiveAsrText:(id)arg2;
- (void)enterThinking;
- (void)miniToolAgentChannel:(id)arg1 didReceiveEvent:(id)arg2;
- (void)miniToolAgentChannel:(id)arg1 didFailToSendUpstreamEventWithReason:(id)arg2;
- (void)miniToolAgentChannelDidSendTurn:(id)arg1;
- (void)onAudioStartStateChange:(long long)arg1 error:(id)arg2;
- (void)onRecordStartStateChange:(long long)arg1 error:(id)arg2;
- (id)contact;
- (unsigned long long)state;
- (id)bubbleDelegate;
- (void)setBubbleDelegate:(id)arg1;
- (id)bubbleDelegateRetainer;
- (void)setBubbleDelegateRetainer:(id)arg1;
- (id)channel;
- (void)setChannel:(id)arg1;
- (id)capsuleView;
- (void)setCapsuleView:(id)arg1;
- (id)capsuleTitleLabel;
- (void)setCapsuleTitleLabel:(id)arg1;
- (id)capsuleIconImageView;
- (void)setCapsuleIconImageView:(id)arg1;
- (id)capsuleIconPagView;
- (void)setCapsuleIconPagView:(id)arg1;
- (id)recordingOverlay;
- (void)setRecordingOverlay:(id)arg1;
- (id)longPressGes;
- (void)setLongPressGes:(id)arg1;
- (id)panGes;
- (void)setPanGes:(id)arg1;
- (id)tapGes;
- (void)setTapGes:(id)arg1;
- (BOOL)hasDraggedCapsule;
- (void)setHasDraggedCapsule:(BOOL)arg1;
- (CGPoint)capsuleCenter;
- (void)setCapsuleCenter:(CGPoint)arg1;
- (CGPoint)panStartCenter;
- (void)setPanStartCenter:(CGPoint)arg1;
- (BOOL)isDraggingOutToHide;
- (void)setIsDraggingOutToHide:(BOOL)arg1;
- (id)hideHintMaskView;
- (void)setHideHintMaskView:(id)arg1;
- (id)hideHintLabel;
- (void)setHideHintLabel:(id)arg1;
- (id)hideHintGlowLayer;
- (void)setHideHintGlowLayer:(id)arg1;
- (BOOL)needCancelSendVoice;
- (void)setNeedCancelSendVoice:(BOOL)arg1;
- (BOOL)isDarkModeEnabled;
- (void)setIsDarkModeEnabled:(BOOL)arg1;
- (BOOL)isListening;
- (void)setIsListening:(BOOL)arg1;
- (BOOL)hasEverShown;
- (void)setHasEverShown:(BOOL)arg1;
- (BOOL)waitingFirstReplyForFirstShow;
- (void)setWaitingFirstReplyForFirstShow:(BOOL)arg1;
- (BOOL)isWaitingAsrTextForSend;
- (void)setIsWaitingAsrTextForSend:(BOOL)arg1;
- (id)latestAsrText;
- (void)setLatestAsrText:(id)arg1;
- (unsigned long long)unreadResultCount;
- (void)setUnreadResultCount:(unsigned long long)arg1;
- (id)dedupConvoId;
- (void)setDedupConvoId:(id)arg1;
- (id)thinkingText;
- (void)setThinkingText:(id)arg1;
- (id)badgeView;
- (void)setBadgeView:(id)arg1;
- (id)badgeCountLabel;
- (void)setBadgeCountLabel:(id)arg1;
- (BOOL)isScrollingDimmed;
- (void)setIsScrollingDimmed:(BOOL)arg1;
- (void).cxx_destruct;
@end
