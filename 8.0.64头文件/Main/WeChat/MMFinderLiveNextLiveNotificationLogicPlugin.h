@interface MMFinderLiveNextLiveNotificationLogicPlugin : MMFinderLiveBaseBubbleCardPlugin <WCFinderLiveExt>
{
    BOOL _isCurrentBubbleShow; // +0x8
    MMFinderLiveNextLiveNotificationBubbleView * _nextLiveNotiBubbleView; // +0x10
}
- (id)initWithLiveTask:(id)arg1;
- (BOOL)checkCanShowBubbleWithTaskId:(id)arg1 liveBubbleInfo:(id)arg2;
- (long long)supportedBubbleType;
- (id)bubbleIdentifier;
- (void)showBubble;
- (void)dismissBubbleByTimer;
- (void)dismissBubbleByClick;
- (void)dismissBubble:(BOOL)arg1;
- (void)localCreateNextLiveNotification;
- (void)localCreate;
- (BOOL)isCurrentBubbleShow;
- (void)setIsCurrentBubbleShow:(BOOL)arg1;
- (id)nextLiveNotiBubbleView;
- (void)setNextLiveNotiBubbleView:(id)arg1;
- (void).cxx_destruct;
@end
