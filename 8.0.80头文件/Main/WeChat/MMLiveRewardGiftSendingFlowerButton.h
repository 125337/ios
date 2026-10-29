@interface MMLiveRewardGiftSendingFlowerButton : MMUIButton <MMFinderLiveGiftSendMoreBubbleHosting>
{
    BOOL _isExposed; // +0x8
    BOOL _isEnableSendAgain; // +0x9
    BOOL _sendButtonTouchIsNotFinish; // +0xa
    BOOL _isInterrupted; // +0xb
    BOOL _shouldUseQuickSendAnimation; // +0xc
    BOOL _hasRecognizedAsLongPress; // +0xd
    id <MMLiveRewardGiftSendingMoreLogicDelegate> _logicDelegate; // +0x10
    id /* block */ _sendingFlowerButtonEnableCallback; // +0x18
    id /* block */ _sendingFlowerButtonComboActionBeginCallback; // +0x20
    id /* block */ _sendingFlowerButtonSendingCountIncreasedCallback; // +0x28
    id /* block */ _sendingFlowerButtonLongPressingCallback; // +0x30
    id /* block */ _dismissBlock; // +0x38
    unsigned long long _sendingCount; // +0x40
    NSString * _currentComboId; // +0x48
    double _iconLeftPadding; // +0x50
    MMFinderLiveTaskId * _liveTaskId; // +0x58
    MMFinderLiveRewardGiftItem * _currentSendMoreGiftItem; // +0x60
    CGSize _iconSize; // +0x68
}
- (id)initWithTaskId:(id)arg1 frame:(CGRect)arg2;
- (void)dealloc;
- (id)getFinderLiveTask;
- (void)setupViews;
- (void)layoutSubviews;
- (CGRect)titleRectForContentRect:(CGRect)arg1;
- (CGRect)imageRectForContentRect:(CGRect)arg1;
- (void)setIconSize:(CGSize)arg1;
- (void)setIconLeftPadding:(double)arg1;
- (void)setEnableSendAgainWithGiftItem:(id)arg1 comboId:(id)arg2 targetHost:(unsigned long long)arg3;
- (void)setIsEnableSendAgain:(BOOL)arg1;
- (void)closeCurrentGiftSendingBatchForTargetHost:(unsigned long long)arg1;
- (void)setInterruptedFlag:(BOOL)arg1 targetHost:(unsigned long long)arg2;
- (void)sendFirstGiftComboCountDirectly:(unsigned long long)arg1;
- (void)sendGiftButtonEnlargeAnimation;
- (void)sendGiftButtonReduceAnimation;
- (void)onSendButtonClickedStart;
- (void)onSendButtonClickedEnd;
- (void)beginSendButtonLongPressRecognition;
- (void)endSendButtonLongPressRecognition;
- (void)longPressSendingGiftOperation;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id /* block */)sendingFlowerButtonEnableCallback;
- (void)setSendingFlowerButtonEnableCallback:(id /* block */)arg1;
- (id /* block */)sendingFlowerButtonComboActionBeginCallback;
- (void)setSendingFlowerButtonComboActionBeginCallback:(id /* block */)arg1;
- (id /* block */)sendingFlowerButtonSendingCountIncreasedCallback;
- (void)setSendingFlowerButtonSendingCountIncreasedCallback:(id /* block */)arg1;
- (id /* block */)sendingFlowerButtonLongPressingCallback;
- (void)setSendingFlowerButtonLongPressingCallback:(id /* block */)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (BOOL)isExposed;
- (void)setIsExposed:(BOOL)arg1;
- (BOOL)isEnableSendAgain;
- (unsigned long long)sendingCount;
- (void)setSendingCount:(unsigned long long)arg1;
- (id)currentComboId;
- (void)setCurrentComboId:(id)arg1;
- (CGSize)iconSize;
- (double)iconLeftPadding;
- (id)liveTaskId;
- (void)setLiveTaskId:(id)arg1;
- (id)currentSendMoreGiftItem;
- (void)setCurrentSendMoreGiftItem:(id)arg1;
- (BOOL)sendButtonTouchIsNotFinish;
- (void)setSendButtonTouchIsNotFinish:(BOOL)arg1;
- (BOOL)isInterrupted;
- (void)setIsInterrupted:(BOOL)arg1;
- (BOOL)shouldUseQuickSendAnimation;
- (void)setShouldUseQuickSendAnimation:(BOOL)arg1;
- (BOOL)hasRecognizedAsLongPress;
- (void)setHasRecognizedAsLongPress:(BOOL)arg1;
- (void).cxx_destruct;
@end
