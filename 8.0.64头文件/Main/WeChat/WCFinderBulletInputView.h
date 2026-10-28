@interface WCFinderBulletInputView : UIView <WCFinderBulletInputToolbarViewDelegate>
{
    BOOL _isReplying; // +0x8
    WCFinderBulletInputToolbarView * _inputToolbarView; // +0x10
    EmoticonBoardView * _emoticonBoardView; // +0x18
    id <WCFinderBulletInputViewDelegate> _delegate; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)layoutInputView;
- (void)layoutEmoticonBoardView;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;
- (void)showInputViewWithDisable;
- (void)showInputViewAtScrollViewY:(BOOL)arg1;
- (void)showInteractionLimitView;
- (double)getVisibleHeight;
- (void)didCommitText:(id)arg1;
- (void)onInputViewShowChange:(BOOL)arg1;
- (void)onBulletSwitchChangeOpenState:(BOOL)arg1;
- (BOOL)inputViewShouldDismisAfterCommit:(id)arg1;
- (id)inputToolbarView;
- (void)setInputToolbarView:(id)arg1;
- (id)emoticonBoardView;
- (void)setEmoticonBoardView:(id)arg1;
- (BOOL)isReplying;
- (void)setIsReplying:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
