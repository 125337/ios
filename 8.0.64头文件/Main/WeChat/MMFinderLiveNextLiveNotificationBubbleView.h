@interface MMFinderLiveNextLiveNotificationBubbleView : MMFinderLiveBottomRightBubbleView
{
    BOOL _isReserved; // +0x8
    id /* block */ _reserveAction; // +0x10
    MMFinderLiveBubbleInfo * _nextLiveBubbleInfo; // +0x18
    id /* block */ _closeAction; // +0x20
}
- (id)initWithTaskId:(id)arg1 nextLiveBubbleInfo:(id)arg2 closeAction:(id /* block */)arg3 reserveAction:(id /* block */)arg4;
- (void)onCloseTapped;
- (void)updateReserved:(BOOL)arg1 buttonTitle:(id)arg2;
- (void)updateActionButton;
- (void)updateTitleLabel;
- (void)onActionTapped;
- (id /* block */)reserveAction;
- (void)setReserveAction:(id /* block */)arg1;
- (id)nextLiveBubbleInfo;
- (void)setNextLiveBubbleInfo:(id)arg1;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg1;
- (BOOL)isReserved;
- (void)setIsReserved:(BOOL)arg1;
- (void).cxx_destruct;
@end
