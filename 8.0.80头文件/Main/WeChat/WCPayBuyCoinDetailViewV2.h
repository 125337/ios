@interface WCPayBuyCoinDetailViewV2 : UIView <ILinkEventExt, IMMFontMgrExt>
{
    BOOL _stackedPriceLayout; // +0x8
    WCCoinBuyCoinView * _parent; // +0x10
    GetWecoinPriceListResponse * _priceListsResponse; // +0x18
    UIButton * _selectBoxButton; // +0x20
    UIView * _rows; // +0x28
    UIView * _protocolView; // +0x30
    RichTextView * _protocolTextView; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layout;
- (double)resolvedContentWidth;
- (void)rebuildContentWithResponse:(id)arg1;
- (void)applyYogaLayout;
- (void)setPriceListsResponse:(id)arg1;
- (void)onFontSizeChange;
- (BOOL)shouldUseStackedLayoutForItems:(id)arg1;
- (void)layoutRows;
- (void)layoutProtocolView;
- (void)shakeAgreementView;
- (void)clickSelectBox;
- (void)clickCoin:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (BOOL)shouldFetchNewProductInfos:(id)arg1;
- (id)getProductIdsWith:(id)arg1;
- (id)selectBoxButton;
- (id)protocolTextView;
- (id)parent;
- (void)setParent:(id)arg1;
- (id)priceListsResponse;
- (void)setSelectBoxButton:(id)arg1;
- (id)rows;
- (void)setRows:(id)arg1;
- (id)protocolView;
- (void)setProtocolView:(id)arg1;
- (void)setProtocolTextView:(id)arg1;
- (BOOL)stackedPriceLayout;
- (void)setStackedPriceLayout:(BOOL)arg1;
- (void).cxx_destruct;
@end
