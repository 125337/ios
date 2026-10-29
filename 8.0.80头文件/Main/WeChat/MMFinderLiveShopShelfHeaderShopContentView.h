@interface MMFinderLiveShopShelfHeaderShopContentView : UIView <MMFinderLiveShopShelfDisplayWindowButtonLoadDelegate, MMFinderLiveShopShelfHeaderSubInfosViewLoadDelegate>
{
    UIView * _contentView; // +0x8
    MMFinderLiveShopShelfAudienceHeaderButtonGroupView * _audienceButtonGroupView; // +0x10
    MMUIButton * _anchorSettingButton; // +0x18
    MMFinderLiveShopShelfDisplayWindowButton * _displayWindowButton; // +0x20
    MMFinderLiveShopShelfHeaderSubInfosView * _subInfosView; // +0x28
    MMFinderLiveShopShelfHeaderViewModel * _viewModel; // +0x30
}
- (id)initWithConfig:(id)arg1;
- (void)initViewWithConfig:(id)arg1;
- (void)onClickDisplayWindowButton:(id)arg1;
- (void)onClickAnchorSettingBtn:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithHeaderViewModel:(id)arg1;
- (void)reportExpose;
- (id)favoriteIconView;
- (id)goodsOrderCenterButton;
- (id)favoriteButton;
- (id)shoppingCartButton;
- (id)displayWindowView;
- (id)searchButton;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onLoadImageOK;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)audienceButtonGroupView;
- (void)setAudienceButtonGroupView:(id)arg1;
- (id)anchorSettingButton;
- (void)setAnchorSettingButton:(id)arg1;
- (id)displayWindowButton;
- (void)setDisplayWindowButton:(id)arg1;
- (id)subInfosView;
- (void)setSubInfosView:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
