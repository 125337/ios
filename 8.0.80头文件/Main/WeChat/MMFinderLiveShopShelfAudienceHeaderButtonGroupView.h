@interface MMFinderLiveShopShelfAudienceHeaderButtonGroupView : UIView
{
    MMFinderLiveShopShelfAudienceHeaderButtonGroupViewConfig * _config; // +0x8
    MMUIButton * _searchButton; // +0x10
    MMUIButton * _shoppingCartButton; // +0x18
    MMUIView * _favoriteButton; // +0x20
    MMWebImageView * _favoriteIconView; // +0x28
    MMUIButton * _customerServiceButton; // +0x30
    MMUIButton * _goodsOrderCenterButton; // +0x38
    MMFinderLiveShopShelfHeaderViewModel * _viewModel; // +0x40
    MMUILabel * _favoriteTextView; // +0x48
}
- (id)initWithConfig:(id)arg1;
- (id)favoriteButton;
- (id)favoriteIconView;
- (id)favoriteTextView;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)layoutFavoriteButton;
- (id)buttons;
- (void)onClickSearchButton:(id)arg1;
- (void)onClickGoodsOrderButton:(id)arg1;
- (void)onClickFavoritesButton:(id)arg1;
- (void)onClickShopAssistantButton:(id)arg1;
- (void)onClickShoppingCartButton:(id)arg1;
- (void)updateWithHeaderViewModel:(id)arg1;
- (void)updateEdgeInsetsForButton:(id)arg1;
- (id)getFavoriteButton;
- (id)getLikeButton;
- (id)config;
- (void)setConfig:(id)arg1;
- (id)searchButton;
- (void)setSearchButton:(id)arg1;
- (id)shoppingCartButton;
- (void)setShoppingCartButton:(id)arg1;
- (void)setFavoriteButton:(id)arg1;
- (void)setFavoriteIconView:(id)arg1;
- (id)customerServiceButton;
- (void)setCustomerServiceButton:(id)arg1;
- (id)goodsOrderCenterButton;
- (void)setGoodsOrderCenterButton:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void)setFavoriteTextView:(id)arg1;
- (void).cxx_destruct;
@end
