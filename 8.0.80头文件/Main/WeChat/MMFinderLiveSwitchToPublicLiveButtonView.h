@interface MMFinderLiveSwitchToPublicLiveButtonView : UIView
{
    MMUIButton * _button; // +0x8
    id /* block */ _clickAction; // +0x10
}
+ (CGSize)defaultSize;
- (id)initWithClickAction:(id /* block */)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)sizeToFit;
- (id)button;
- (void)onButtonClicked;
- (void)setButton:(id)arg1;
- (id /* block */)clickAction;
- (void)setClickAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
