@interface MMFinderLiveBaseCardView : UIView
{
    UIView * _shadowView; // +0x8
    UIView * _closeButton; // +0x10
    UIView * _cardView; // +0x18
    UIView * _contentView; // +0x20
    id /* block */ _closeBlock; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)initSubViews;
- (void)createConstraints;
- (void)showIn:(id)arg1;
- (void)hide:(id /* block */)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)cardView;
- (void)setCardView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
