@interface MMLiveRewardGiftSendingMoreButton : WCLiveBottomTextButton <MMFinderLiveGiftSendMoreBubbleHosting>
{
    BOOL _isEnableSendAgain; // +0x8
    BOOL _sendButtonTouchIsNotFinish; // +0x9
    BOOL _isInterrupted; // +0xa
    BOOL _shouldUseQuickSendAnimation; // +0xb
    BOOL _hasRecognizedAsLongPress; // +0xc
    id <MMLiveRewardGiftSendingMoreLogicDelegate> _logicDelegate; // +0x10
    id /* block */ _sendingMoreButtonEnableCallback; // +0x18
    id /* block */ _sendingMoreButtonComboActionBeginCallback; // +0x20
    id /* block */ _sendingMoreButtonSendingCountIncreasedCallback; // +0x28
    id /* block */ _sendingMoreButtonLongPressingCallback; // +0x30
    unsigned long long _sendingCount; // +0x38
    NSString * _currentComboId; // +0x40
    MMFinderLiveTaskId * _liveTaskId; // +0x48
    MMFinderLiveRewardGiftItem * _currentSendMoreGiftItem; // +0x50
    LOTAnimationView * _breatheAnimationView; // +0x58
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (void)dealloc;
- (id)getFinderLiveTask;
- (void)setupViews;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)sendGiftButtonEnlargeAnimation;
- (void)sendGiftButtonReduceAnimation;
- (void)startGiftButtonBreatheAnimation;
- (void)stopGiftButtonBreatheAnimation:(BOOL)arg1;
- (void)setEnableSendAgainWithGiftItem:(id)arg1 comboId:(id)arg2 targetHost:(unsigned long long)arg3;
- (void)setIsEnableSendAgain:(BOOL)arg1;
- (void)sendFirstGiftComboCountDirectly:(unsigned long long)arg1;
- (void)closeCurrentGiftSendingBatchForTargetHost:(unsigned long long)arg1;
- (void)setInterruptedFlag:(BOOL)arg1 targetHost:(unsigned long long)arg2;
- (void)onSendButtonClickedStart;
- (void)onSendButtonClickedEnd;
- (void)beginSendButtonLongPressRecognition;
- (void)endSendButtonLongPressRecognition;
- (void)longPressSendingGiftOperation;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id /* block */)sendingMoreButtonEnableCallback;
- (void)setSendingMoreButtonEnableCallback:(id /* block */)arg1;
- (id /* block */)sendingMoreButtonComboActionBeginCallback;
- (void)setSendingMoreButtonComboActionBeginCallback:(id /* block */)arg1;
- (id /* block */)sendingMoreButtonSendingCountIncreasedCallback;
- (void)setSendingMoreButtonSendingCountIncreasedCallback:(id /* block */)arg1;
- (id /* block */)sendingMoreButtonLongPressingCallback;
- (void)setSendingMoreButtonLongPressingCallback:(id /* block */)arg1;
- (BOOL)isEnableSendAgain;
- (unsigned long long)sendingCount;
- (void)setSendingCount:(unsigned long long)arg1;
- (id)currentComboId;
- (void)setCurrentComboId:(id)arg1;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)currentSendMoreGiftItem;
- (void)setCurrentSendMoreGiftItem:(id)arg1;
- (BOOL)sendButtonTouchIsNotFinish;
- (void)setSendButtonTouchIsNotFinish:(BOOL)arg1;
- (BOOL)isInterrupted;
- (void)setIsInterrupted:(BOOL)arg1;
- (id)breatheAnimationView;
- (void)setBreatheAnimationView:(id)arg1;
- (BOOL)shouldUseQuickSendAnimation;
- (void)setShouldUseQuickSendAnimation:(BOOL)arg1;
- (BOOL)hasRecognizedAsLongPress;
- (void)setHasRecognizedAsLongPress:(BOOL)arg1;
- (void).cxx_destruct;
@end
