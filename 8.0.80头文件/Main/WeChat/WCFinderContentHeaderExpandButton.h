@interface WCFinderContentHeaderExpandButton : MMUIView
{
    id /* block */ _clickAction; // +0x8
    WCFinderContentHeaderExpandBtnConfig * _config; // +0x10
    UIView * _titleContainerView; // +0x18
    UILabel * _titleLabel; // +0x20
    WCFinderGradientView * _gradientView; // +0x28
    UITapGestureRecognizer * _tapGesture; // +0x30
}
- (id)initWithConfig:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (void)tapAction:(id)arg1;
- (CGSize)fittingSize;
- (void)updateTitleContainerBGColor:(id)arg1 maskGradientColor:(id)arg2;
- (id /* block */)clickAction;
- (void)setClickAction:(id /* block */)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)titleContainerView;
- (void)setTitleContainerView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)gradientView;
- (void)setGradientView:(id)arg1;
- (id)tapGesture;
- (void)setTapGesture:(id)arg1;
- (void).cxx_destruct;
@end
