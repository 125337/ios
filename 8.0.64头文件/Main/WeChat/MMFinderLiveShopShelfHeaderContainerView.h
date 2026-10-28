@interface MMFinderLiveShopShelfHeaderContainerView : UIView <MMFinderLiveShopShelfHeaderViewModelView>
{
    MMFinderLiveShopShelfHeaderViewModel * _viewModel; // +0x8
    UIView<MMFinderLiveShopShelfHeaderContentView> * _contentView; // +0x10
}
- (Class)preferContentClass;
- (void)updateWithHeaderViewModel:(id)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)handleContentGestureChangeTo:(double)arg1;
- (void)handleContentGestureEnd;
- (id)goodsOrderCenterButton;
- (id)shoppingCartButton;
- (id)favoriteButton;
- (id)favoriteIconView;
- (id)anchorSettingButton;
- (void)reportElementsExposed;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void).cxx_destruct;
@end
