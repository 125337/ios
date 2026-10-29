@interface MMFinderLiveStartGuideBubbleView : MMFinderLiveBottomRightBubbleView
{
    MMFinderLiveBubbleInfo * _bubble; // +0x8
    id /* block */ _closeAction; // +0x10
    id /* block */ _createAction; // +0x18
}
- (id)initWithTaskId:(id)arg1 bubble:(id)arg2;
- (id)currentTaskId;
- (void)onCloseTapped;
- (void)updateActionButton;
- (void)updateTitleLabel;
- (void)onActionTapped;
- (id)bubble;
- (void)setBubble:(id)arg1;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg1;
- (id /* block */)createAction;
- (void)setCreateAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
