@interface MMFinderLiveShopShelfHeaderViewModel : NSObject
{
    MMFinderLiveShopShelfCoordinator * _coordinator; // +0x8
    UIView<MMFinderLiveShopShelfHeaderViewModelView> * _view; // +0x10
}
- (void)updateWithCoordinator;
- (void)onHeaderViewAnchorSettingButtonClicked;
- (void)onHeaderViewSearchButtonClicked;
- (void)onHeaderViewGoodsOrderCenterButtonClicked;
- (void)onHeaderViewShopAssistantButtonClicked;
- (void)onHeaderViewShoppingCartButtonClicked;
- (void)onHeaderViewDisplayWindowButtonClicked;
- (void)onHeaderViewMiniAppButtonClicked;
- (BOOL)shouldGoodsOrderCenterButtonHidden;
- (BOOL)shouldShoppingCartButtonHidden;
- (unsigned long long)headerViewShopAssistantButtonMode;
- (BOOL)shouldDisplayWindowButtonHidden;
- (BOOL)shouldAnchorSettingButtonHidden;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (id)view;
- (void)setView:(id)arg1;
- (void).cxx_destruct;
@end

