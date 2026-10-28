@interface MMFinderLiveGuideAudienceApplyMicLogicPlugin : MMFinderLiveBaseBubbleCardPlugin
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
@end
