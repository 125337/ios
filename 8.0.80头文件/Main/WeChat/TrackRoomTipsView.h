@interface TrackRoomTipsView : UIView
{
    id <TrackRoomTipsViewDelegate> _delegate; // +0x8
    CContact * _contact; // +0x10
    BOOL _isUnfold; // +0x18
    BOOL _isAnimating; // +0x19
    UIImageView * _bgView; // +0x20
    UIImageView * _iconView; // +0x28
    UIImageView * _iconHLView; // +0x30
    UILabel * _foldTipsLabel; // +0x38
    UIImageView * _arrowView; // +0x40
    UILabel * _unfoldTipsLabel; // +0x48
    UIButton * _enterButton; // +0x50
    UIButton * _cancelButton; // +0x58
}
- (id)initWithContact:(id)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initView;
- (void)updateTipsView;
- (void)setTipsTitle:(id)arg1;
- (void)unfoldAnimationFinish;
- (void)doUnfoldAnimation;
- (void)unfold;
- (void)doFoldAnimation;
- (void)resetTipsView;
- (void)startIconChangeAnimation;
- (void)doIconHighlightAnimation;
- (void)doIconDarkAnimation;
- (void)stopIconChangeAnimation;
- (BOOL)checkTouchPoint:(CGPoint)arg1 IfInView:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)onCancelButtonPress;
- (void)onEnterButtonPress;
- (void)onEnterForeground;
- (void)onEnterBackground;
- (double)getUnFoldTipHeight;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (void).cxx_destruct;
@end
