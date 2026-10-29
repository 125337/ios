@interface MMFinderLiveSwitchToPublicVisibilityBubbleLogicPlugin : MMFinderLiveBaseBubbleCardPlugin <WCFinderLiveExt>
{
    BOOL _isCurrentBubbleShow; // +0x8
}
- (id)initWithLiveTask:(id)arg1;
- (BOOL)checkCanShowBubbleWithTaskId:(id)arg1 liveBubbleInfo:(id)arg2;
- (long long)supportedBubbleType;
- (id)bubbleIdentifier;
- (void)showBubble;
- (void)dismissBubbleByTimer;
- (void)dismissBubbleByClick;
- (void)dismissBubble:(BOOL)arg1;
- (void)dismissBubbleOnTapClose;
- (BOOL)isCurrentBubbleShow;
- (void)setIsCurrentBubbleShow:(BOOL)arg1;
@end
