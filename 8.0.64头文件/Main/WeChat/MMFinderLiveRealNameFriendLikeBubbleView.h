@interface MMFinderLiveRealNameFriendLikeBubbleView : MMFinderLiveBottomRightBubbleView
{
    BOOL _isLiked; // +0x8
    id /* block */ _likeAction; // +0x10
    id /* block */ _closeAction; // +0x18
}
- (id)initWithTaskId:(id)arg1 closeAction:(id /* block */)arg2 likeAction:(id /* block */)arg3;
- (void)onCloseTapped;
- (void)updateLiked:(BOOL)arg1;
- (void)updateActionButton;
- (void)updateTitleLabel;
- (void)onActionTapped;
- (id /* block */)likeAction;
- (void)setLikeAction:(id /* block */)arg1;
- (id /* block */)closeAction;
- (void)setCloseAction:(id /* block */)arg1;
- (BOOL)isLiked;
- (void)setIsLiked:(BOOL)arg1;
- (void).cxx_destruct;
@end
