@interface MMFinderLiveShopShelfAnchorLocalLifeHeaderView : UIView <MMFinderLiveShopShelfHeaderContentView>
{
    MMFinderLiveShopShelfHeaderViewModel * _viewModel; // +0x8
    MMLiveShopShelfDragBar * _dragBar; // +0x10
    MMFinderLiveShopShelfAnchorLocalLifeMiniAppButton * _miniAppButton; // +0x18
    MMUIButton * _anchorSettingButton; // +0x20
    UIView * _line; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateWithHeaderViewModel:(id)arg1;
- (void)onMiniAppButtonClicked:(id)arg1;
- (void)onAnchorSettingButtonClicked:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)dragBar;
- (void)setDragBar:(id)arg1;
- (id)miniAppButton;
- (void)setMiniAppButton:(id)arg1;
- (id)anchorSettingButton;
- (void)setAnchorSettingButton:(id)arg1;
- (id)line;
- (void)setLine:(id)arg1;
- (void).cxx_destruct;
@end

