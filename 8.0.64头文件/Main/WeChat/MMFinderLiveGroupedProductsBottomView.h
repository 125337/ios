@interface MMFinderLiveGroupedProductsBottomView : UIView
{
    UILabel * _titleLabel; // +0x8
    UILabel * _subtitleLabel; // +0x10
    MMUIButton * _routerButton; // +0x18
    MMFinderLiveGroupedProductsViewModel * _viewModel; // +0x20
}
+ (double)preferHeight;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)subtitleLabel;
- (void)setSubtitleLabel:(id)arg1;
- (id)routerButton;
- (void)setRouterButton:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
