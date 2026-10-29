@interface MMFinderLiveSwitchToPublicVisibilityBubbleView : MMFinderLiveBottomRightBubbleView
{
    MMFinderLiveBubbleInfo * _bubbleInfo; // +0x8
    id /* block */ _closeAction; // +0x10
    id /* block */ _actionAction; // +0x18
}
+ (CGSize)defaultSize;
- (id)initWithTaskId:(id)arg1 bubbleInfo:(id)arg2 closeAction:(id /* block */)arg3 actionAction:(id /* block */)arg4;
- (void)updateActionButton;
- (void)updateTitleLabel;
- (void)onCloseTapped;
- (void)onActionTapped;
- (id)bubbleInfo;
- (void)setBubbleInfo:(id)arg1;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg1;
- (id /* block */)actionAction;
- (void)setActionAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
