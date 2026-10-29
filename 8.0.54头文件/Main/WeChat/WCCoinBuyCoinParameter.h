@interface WCCoinBuyCoinParameter : MMObject
{
    BOOL _panelAlwaysDarkMode; // +0x8
    BOOL _shouldStartNewSession; // +0x9
    int _scene; // +0xc
    unsigned int _diffWecoinCount; // +0x10
    id <MMPageSheetProvider> _pageSheetProvider; // +0x18
    unsigned long long _businessId; // +0x20
    unsigned long long _panelShowType; // +0x28
    NSString * _directBuyProductId; // +0x30
    GetWecoinPriceListResponse * _priceListResponse; // +0x38
    id _customData; // +0x40
}
- (void)setPayLogicOberver:(id)arg1;
- (id)payLogicOberver;
- (id)init;
- (BOOL)panelAlwaysDarkMode;
- (void)setPanelAlwaysDarkMode:(BOOL)arg1;
- (id)pageSheetProvider;
- (void)setPageSheetProvider:(id)arg1;
- (unsigned long long)businessId;
- (void)setBusinessId:(unsigned long long)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (unsigned long long)panelShowType;
- (void)setPanelShowType:(unsigned long long)arg1;
- (id)directBuyProductId;
- (void)setDirectBuyProductId:(id)arg1;
- (id)priceListResponse;
- (void)setPriceListResponse:(id)arg1;
- (unsigned int)diffWecoinCount;
- (void)setDiffWecoinCount:(unsigned int)arg1;
- (id)customData;
- (void)setCustomData:(id)arg1;
- (BOOL)shouldStartNewSession;
- (void)setShouldStartNewSession:(BOOL)arg1;
- (void).cxx_destruct;
@end

