@interface MMFinderLiveShopShelfAudienceLocalLifeHeaderView : UIView <MMFinderLiveShopShelfHeaderContentView>
{
    MMFinderLiveShopShelfHeaderViewModel * _viewModel; // +0x8
    MMFinderLiveShopShelfAudienceHeaderButtonGroupView * _audienceButtonGroupView; // +0x10
    MMFinderLiveShopShelfAudienceLocalLifeMiniAppButton * _miniAppButton; // +0x18
    UILabel * _titleLabel; // +0x20
    MMLiveShopShelfDragBar * _dragBar; // +0x28
    UIView * _line; // +0x30
    UILabel * _productsLabel; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateWithHeaderViewModel:(id)arg1;
- (void)onMiniAppButtonClicked:(id)arg1;
- (id)shoppingCartButton;
- (id)goodsOrderCenterButton;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)audienceButtonGroupView;
- (void)setAudienceButtonGroupView:(id)arg1;
- (id)miniAppButton;
- (void)setMiniAppButton:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)dragBar;
- (void)setDragBar:(id)arg1;
- (id)line;
- (void)setLine:(id)arg1;
- (id)productsLabel;
- (void)setProductsLabel:(id)arg1;
- (void).cxx_destruct;
@end
