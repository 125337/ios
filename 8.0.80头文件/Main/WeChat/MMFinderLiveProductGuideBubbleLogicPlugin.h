@interface MMFinderLiveProductGuideBubbleLogicPlugin : MMFinderLiveBaseBubbleCardPlugin <WCFinderLiveExt>
{
    BOOL _isCurrentBubbleShow; // +0x8
    MMFinderLiveProductGuideBubbleView * _productGuideBubbleView; // +0x10
}
- (BOOL)checkCanShowBubbleWithTaskId:(id)arg1 liveBubbleInfo:(id)arg2;
- (BOOL)isPromotePubbleShowing;
- (long long)supportedBubbleType;
- (id)bubbleIdentifier;
- (void)showBubble;
- (void)dismissBubbleByTimer;
- (void)dismissBubbleByClick;
- (void)dismissBubble:(BOOL)arg1;
- (BOOL)isCurrentBubbleShow;
- (void)setIsCurrentBubbleShow:(BOOL)arg1;
- (id)productGuideBubbleView;
- (void)setProductGuideBubbleView:(id)arg1;
- (void).cxx_destruct;
@end
