@interface MMLiveVerticalTextButtonView : UIView
{
    UIButton * _button; // +0x8
    UILabel * _label; // +0x10
    MMLiveVerticalTextButtonViewConfig * _config; // +0x18
    id /* block */ _actionBlock; // +0x20
}
- (id)initWithConfig:(id)arg1 actionBlock:(id /* block */)arg2;
- (void)updateWithImage:(id)arg1 title:(id)arg2;
- (void)updateConfig:(id)arg1;
- (void)initView;
- (void)layoutSubviews;
- (id)button;
- (id)label;
- (void)onTapInside:(id)arg1;
- (void)setButton:(id)arg1;
- (void)setLabel:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
