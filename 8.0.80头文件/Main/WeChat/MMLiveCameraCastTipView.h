@interface MMLiveCameraCastTipView : UIView
{
    id /* block */ _actionClickBlock; // +0x8
    long long _state; // +0x10
    MMUIButton * _backgroundButton; // +0x18
    MMUIButton * _foregroundButton; // +0x20
    MMUILabel * _titleLabel; // +0x28
}
- (id)initWithState:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)updateContentWithType;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (id)backgroundButton;
- (id)titleLabel;
- (id)foregroundButton;
- (void)actionButtonClick;
- (void)setActionClickBlock:(id /* block */)arg1;
- (long long)state;
- (void)setState:(long long)arg1;
- (void)setBackgroundButton:(id)arg1;
- (void)setForegroundButton:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void).cxx_destruct;
@end
