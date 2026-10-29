@interface MMFinderLiveShopShelfAudienceHeaderButtonGroupView : UIView
{
    MMFinderLiveShopShelfAudienceHeaderButtonGroupViewConfig * _config; // +0x8
    MMUIButton * _searchButton; // +0x10
    MMUIButton * _shoppingCartButton; // +0x18
    MMUIButton * _customerServiceButton; // +0x20
    MMUIButton * _goodsOrderCenterButton; // +0x28
    MMFinderLiveShopShelfHeaderViewModel * _viewModel; // +0x30
}
- (id)initWithConfig:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)buttons;
- (void)onClickSearchButton:(id)arg1;
- (void)onClickGoodsOrderButton:(id)arg1;
- (void)onClickShopAssistantButton:(id)arg1;
- (void)onClickShoppingCartButton:(id)arg1;
- (void)updateWithHeaderViewModel:(id)arg1;
- (void)updateEdgeInsetsForButton:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)searchButton;
- (void)setSearchButton:(id)arg1;
- (id)shoppingCartButton;
- (void)setShoppingCartButton:(id)arg1;
- (id)customerServiceButton;
- (void)setCustomerServiceButton:(id)arg1;
- (id)goodsOrderCenterButton;
- (void)setGoodsOrderCenterButton:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end

