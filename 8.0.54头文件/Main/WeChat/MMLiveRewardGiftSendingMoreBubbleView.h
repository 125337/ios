@interface MMLiveRewardGiftSendingMoreBubbleView : MMUIView <MMFinderLiveGiftSendMoreBubbleHosting>
{
    BOOL _isEnableSendAgain; // +0x8
    BOOL _sendButtonTouchIsNotFinish; // +0x9
    BOOL _sendButtonLongPressIsOver; // +0xa
    BOOL _isInterrupted; // +0xb
    BOOL _shouldUseQuickSendAnimation; // +0xc
    id <MMLiveRewardGiftSendingMoreLogicDelegate> _logicDelegate; // +0x10
    id /* block */ _sendingMoreBubbleEnableCallback; // +0x18
    MMFinderLiveTaskId * _liveTaskId; // +0x20
    MMFinderLiveRewardGiftItem * _currentSendMoreGiftItem; // +0x28
    unsigned long long _sendingCount; // +0x30
    NSString * _currentComboId; // +0x38
    MMUIView * _contentView; // +0x40
    LOTAnimationView * _breatheAnimationView; // +0x48
    LOTAnimationView * _shockAnimationView; // +0x50
    MMUIButton * _sendButton; // +0x58
    MMUILabel * _sendingCountLabel; // +0x60
    UILongPressGestureRecognizer * _sendButtonLongPressGesture; // +0x68
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (void)dealloc;
- (id)getFinderLiveTask;
- (void)setupViews;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)countLabelDanceAnimation:(double)arg1;
- (void)setEnableSendAgainWithGiftItem:(id)arg1 comboId:(id)arg2 targetHost:(unsigned long long)arg3;
- (void)setIsEnableSendAgain:(BOOL)arg1;
- (void)closeCurrentGiftSendingBatchForTargetHost:(unsigned long long)arg1;
- (void)setInterruptedFlag:(BOOL)arg1 targetHost:(unsigned long long)arg2;
- (void)sendFirstGiftComboCountDirectly:(unsigned long long)arg1;
- (void)onSendButtonClickedStart;
- (void)onSendButtonClickedEnd;
- (void)beginSendButtonLongPressRecognition;
- (void)endSendButtonLongPressRecognition;
- (void)longPressSendingGiftOperation;
- (id)sendButtonLongPressGesture;
- (void)onLongpressSendButton:(id)arg1;
- (void)startBubbleBreatheAnimation;
- (void)stopBubbleBreatheAnimation;
- (void)startBubbleShockAnimation;
- (void)stopBubbleShockAnimation;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id /* block */)sendingMoreBubbleEnableCallback;
- (void)setSendingMoreBubbleEnableCallback:(id /* block */)arg1;
- (BOOL)isEnableSendAgain;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)currentSendMoreGiftItem;
- (void)setCurrentSendMoreGiftItem:(id)arg1;
- (unsigned long long)sendingCount;
- (void)setSendingCount:(unsigned long long)arg1;
- (id)currentComboId;
- (void)setCurrentComboId:(id)arg1;
- (BOOL)sendButtonTouchIsNotFinish;
- (void)setSendButtonTouchIsNotFinish:(BOOL)arg1;
- (BOOL)sendButtonLongPressIsOver;
- (void)setSendButtonLongPressIsOver:(BOOL)arg1;
- (BOOL)isInterrupted;
- (void)setIsInterrupted:(BOOL)arg1;
- (BOOL)shouldUseQuickSendAnimation;
- (void)setShouldUseQuickSendAnimation:(BOOL)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)breatheAnimationView;
- (void)setBreatheAnimationView:(id)arg1;
- (id)shockAnimationView;
- (void)setShockAnimationView:(id)arg1;
- (id)sendButton;
- (void)setSendButton:(id)arg1;
- (id)sendingCountLabel;
- (void)setSendingCountLabel:(id)arg1;
- (void)setSendButtonLongPressGesture:(id)arg1;
- (void).cxx_destruct;
@end

