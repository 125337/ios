@interface WCFinderBulletInputView : UIView <WCFinderBulletInputToolbarViewDelegate>
{
    WCFinderBulletInputToolbarView * _inputToolbarView; // +0x8
    EmoticonBoardView * _emoticonBoardView; // +0x10
    id <WCFinderBulletInputViewDelegate> _delegate; // +0x18
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
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

