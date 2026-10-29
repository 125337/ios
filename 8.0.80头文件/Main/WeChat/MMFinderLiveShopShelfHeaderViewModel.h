@interface MMFinderLiveShopShelfHeaderViewModel : NSObject
{
    MMFinderLiveShopShelfCoordinator * _coordinator; // +0x8
    NSPointerArray * _headerViews; // +0x10
    id <MMFinderLiveShopShelfHeaderViewModelDelegate> _delegate; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)updateWithCoordinator;
- (void)onShelfUpdateNotify:(id)arg1 shelfInfo:(id)arg2;
- (void)onHeaderViewAnchorSettingButtonClicked;
- (void)onHeaderViewSearchButtonClicked;
- (void)onHeaderViewGoodsOrderCenterButtonClicked;
- (void)onHeaderViewShopAssistantButtonClicked;
- (BOOL)shouldShowAccountRemind;
- (void)showAccountRemindIfNeeded:(id /* block */)arg1;
- (long long)reportServiceTypeForCustomerServiceAppType:(int)arg1;
- (void)invokeShopAssistantBtnClicked;
- (void)onHeaderViewShoppingCartButtonClicked;
- (void)onHeaderViewFavoriteButtonClicked;
- (void)onHeaderViewGuideBarClicked;
- (void)onHeaderViewDisplayWindowButtonClicked;
- (void)onHeaderViewMiniAppButtonClicked;
- (void)onHeaderViewScoreClicked;
- (void)onHeaderViewEntityClicked;
- (BOOL)shouldGoodsOrderCenterButtonHidden;
- (BOOL)shouldShoppingCartButtonHidden;
- (unsigned long long)headerViewShopAssistantButtonMode;
- (BOOL)shouldDisplayWindowButtonHidden;
- (BOOL)shouldAnchorSettingButtonHidden;
- (id)coordinator;
- (void)setCoordinator:(id)arg1;
- (id)headerViews;
- (void)setHeaderViews:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
