@interface MMFinderLiveShopContext_AnchorFlashSaleConfig : NSObject
{
    BOOL _enableShowFlashSale; // +0x8
    BOOL _targetedFlashSaleEnable; // +0x9
    BOOL _publicFlashSaleEnable; // +0xa
    BOOL _flashSaleFirstOpenFlag; // +0xb
    BOOL _historyEnable; // +0xc
    FinderWxAppInfo * _sendPage; // +0x10
    FinderWxAppInfo * _orderPage; // +0x18
}
- (id)init;
- (void)updateWithShopShelfInfo:(id)arg1;
- (void)updateWithConfigInfo:(id)arg1;
- (BOOL)shouldShowSwitch;
- (BOOL)shouldShowOrderHistory;
- (BOOL)shouldShowPublicFlashSale;
- (BOOL)shouldShowTargetedFlashSale;
- (void)setEnableShowFlashSale:(BOOL)arg1;
- (BOOL)enableShowFlashSale;
- (id)sendPage;
- (void)setSendPage:(id)arg1;
- (id)orderPage;
- (void)setOrderPage:(id)arg1;
- (BOOL)targetedFlashSaleEnable;
- (void)setTargetedFlashSaleEnable:(BOOL)arg1;
- (BOOL)publicFlashSaleEnable;
- (void)setPublicFlashSaleEnable:(BOOL)arg1;
- (BOOL)flashSaleFirstOpenFlag;
- (void)setFlashSaleFirstOpenFlag:(BOOL)arg1;
- (BOOL)historyEnable;
- (void)setHistoryEnable:(BOOL)arg1;
- (void).cxx_destruct;
@end

