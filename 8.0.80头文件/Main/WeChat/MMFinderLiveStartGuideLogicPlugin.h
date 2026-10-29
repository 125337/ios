@interface MMFinderLiveStartGuideLogicPlugin : MMFinderLiveBaseBubbleCardPlugin
{
    UIView * _currBubbleView; // +0x8
    MMFinderLiveBubbleInfo * _currBubble; // +0x10
    double _lastInvokeTime; // +0x18
}
+ (void)startLive:(id)arg1;
+ (id)getChnlextraDictionaryWithGuideBubble:(id)arg1;
- (BOOL)checkCanShowBubbleWithTaskId:(id)arg1 liveBubbleInfo:(id)arg2;
- (long long)supportedBubbleType;
- (id)bubbleIdentifier;
- (void)showBubble;
- (void)dismissBubbleByTimer;
- (void)dismissBubbleByClick;
- (void)modifyBubbleViewAfterShowed:(id)arg1;
- (void)innerDismiss:(BOOL)arg1;
- (void)clearDatas;
- (void)startNewLiveAfterCloseCurrLive:(id)arg1;
- (BOOL)isCurrentBubbleShow;
- (void)dismissCurrBubble:(BOOL)arg1;
- (void)reportOnBubbleShow;
- (void)reportOnBubbleStartLiveAction;
- (void)reportOnBubbleCloseAction;
- (id)currBubbleView;
- (void)setCurrBubbleView:(id)arg1;
- (id)currBubble;
- (void)setCurrBubble:(id)arg1;
- (double)lastInvokeTime;
- (void)setLastInvokeTime:(double)arg1;
- (void).cxx_destruct;
@end
