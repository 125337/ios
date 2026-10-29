@interface MMFinderLiveShopShelfHeaderView : UIView <MMFinderLiveShopShelfHeaderViewModelView, MMFinderLiveShopShelfHeaderContentView>
{
    MMFinderLiveShopShelfHeaderViewModel * _viewModel; // +0x8
    UIView * _contentView; // +0x10
    MMLiveShopShelfDragBar * _dragBar; // +0x18
    MMFinderLiveShopShelfAudienceHeaderButtonGroupView * _audienceButtonGroupView; // +0x20
    MMUIButton * _anchorSettingBtn; // +0x28
    UIButton * _displayWindowBtn; // +0x30
    MMFinderLiveShopShelfDisplayWindowButton * _displayWindowButton; // +0x38
    MMFinderLiveShopShelfHeaderSubInfosView * _subInfosView; // +0x40
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)initView;
- (void)updateWithHeaderViewModel:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)onClickDisplayWindowButton:(id)arg1;
- (void)onClickAnchorSettingBtn:(id)arg1;
- (id)anchorSettingButton;
- (id)goodsOrderCenterButton;
- (id)shoppingCartButton;
- (id)displayWindowView;
- (id)searchButton;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)dragBar;
- (void)setDragBar:(id)arg1;
- (id)audienceButtonGroupView;
- (void)setAudienceButtonGroupView:(id)arg1;
- (id)anchorSettingBtn;
- (void)setAnchorSettingBtn:(id)arg1;
- (id)displayWindowBtn;
- (void)setDisplayWindowBtn:(id)arg1;
- (id)displayWindowButton;
- (void)setDisplayWindowButton:(id)arg1;
- (id)subInfosView;
- (void)setSubInfosView:(id)arg1;
- (void).cxx_destruct;
@end

