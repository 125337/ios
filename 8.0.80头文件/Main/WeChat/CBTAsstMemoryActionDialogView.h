@interface CBTAsstMemoryActionDialogView : UIControl
{
    UIView * _panelView; // +0x8
    UILabel * _titleLabel; // +0x10
    UIButton * _leftButton; // +0x18
    UIButton * _rightButton; // +0x20
    UIView * _horizontalSeparatorView; // +0x28
    UIView * _verticalSeparatorView; // +0x30
    id /* block */ _leftAction; // +0x38
    id /* block */ _rightAction; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithTitle:(id)arg1 leftButtonTitle:(id)arg2 rightButtonTitle:(id)arg3;
- (void)onLeftButtonTap;
- (void)onRightButtonTap;
- (id /* block */)leftAction;
- (void)setLeftAction:(id /* block */)arg1;
- (id /* block */)rightAction;
- (void)setRightAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
