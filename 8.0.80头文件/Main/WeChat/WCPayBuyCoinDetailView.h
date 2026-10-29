@interface WCPayBuyCoinDetailView : UIView <ILinkEventExt>
{
    unsigned int _settedHeight; // +0x8
    UIButton * _selectBoxButton; // +0x10
    UIView * _rows; // +0x18
    UIView * _protocolView; // +0x20
    RichTextView * _protocolTextView; // +0x28
    GetWecoinPriceListResponse * _priceListsResponse; // +0x30
    WCCoinBuyCoinView * _parent; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)setPriceListsResponse:(id)arg1;
- (void)refresh;
- (void)layoutRows;
- (id)layoutRowOne;
- (id)layoutRowTwo;
- (void)layoutProtocolView;
- (void)shakeAgreementView;
- (void)clickSelectBox;
- (void)clickCoin:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)rowOneInfos;
- (id)rowTwoInfos;
- (BOOL)shouldFetchNewProductInfos:(id)arg1;
- (id)getProductIdsWith:(id)arg1;
- (id)selectBoxButton;
- (id)protocolTextView;
- (void)setSelectBoxButton:(id)arg1;
- (id)rows;
- (void)setRows:(id)arg1;
- (id)protocolView;
- (void)setProtocolView:(id)arg1;
- (void)setProtocolTextView:(id)arg1;
- (id)priceListsResponse;
- (unsigned int)settedHeight;
- (void)setSettedHeight:(unsigned int)arg1;
- (id)parent;
- (void)setParent:(id)arg1;
- (void).cxx_destruct;
@end
