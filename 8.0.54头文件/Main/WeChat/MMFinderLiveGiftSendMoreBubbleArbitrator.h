@interface MMFinderLiveGiftSendMoreBubbleArbitrator : NSObject <MMLiveRewardGiftSendingMoreLogicDelegate, MMFinderLiveGiftSendMoreBubbleHosting>
{
    MMFinderLiveGiftGoalView * _giftGoalView; // +0x8
    MMLiveRewardGiftSendingMoreButton * _quickSendGiftButton; // +0x10
    id <MMLiveRewardGiftSendingMoreLogicDelegate> _logicDelegate; // +0x18
    MMLiveRewardGiftSendingMoreBubbleView * _sendMoreBubbleView; // +0x20
}
- (id)initWithSendMoreBubbleView:(id)arg1;
- (void)setGiftGoalView:(id)arg1;
- (void)setQuickSendGiftButton:(id)arg1;
- (void)setEnableSendAgainWithGiftItem:(id)arg1 comboId:(id)arg2 targetHost:(unsigned long long)arg3;
- (void)closeCurrentGiftSendingBatchForTargetHost:(unsigned long long)arg1;
- (void)sendFirstGiftComboCountDirectly:(unsigned long long)arg1;
- (void)setInterruptedFlag:(BOOL)arg1 targetHost:(unsigned long long)arg2;
- (void)onSendingGiftBatchUpdate:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 fromLongPress:(BOOL)arg4 sourceHost:(unsigned long long)arg5;
- (void)onLongPressSendingGiftFinished:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 sourceHost:(unsigned long long)arg4;
- (void)onSendingGiftBatchFinish:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 sourceHost:(unsigned long long)arg4;
- (void)delayCallOnSendingGiftBatchFinish:(id)arg1 sendingComboId:(id)arg2 comboGiftCount:(unsigned long long)arg3 delayInterval:(double)arg4 sourceHost:(unsigned long long)arg5;
- (id)giftGoalView;
- (id)quickSendGiftButton;
- (id)logicDelegate;
- (void)setLogicDelegate:(id)arg1;
- (id)sendMoreBubbleView;
- (void)setSendMoreBubbleView:(id)arg1;
- (void).cxx_destruct;
@end

