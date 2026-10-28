@interface WCCoinBuyCoinView : MMPageSheetBaseViewController <WCPayBuyCoinDetailViewDelegate>
{
    BOOL _alwaysDarkMode; // +0x70
    unsigned int _diffWecoinCount; // +0x74
    id <WCCoinBuyCoinViewDelegate> _delegate; // +0x78
    GetWecoinPriceListResponse * _priceListsResponse; // +0x80
    unsigned long long _panelShowType; // +0x88
    WCPayBuyCoinDetailView * _buyCoinDetailView; // +0x90
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)setPriceListsResponse:(id)arg1;
- (void)setPanelShowType:(unsigned long long)arg1;
- (void)setDiffWecoinCount:(unsigned int)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)clickWithInfo:(id)arg1;
- (void)shouldOpenWeb:(id)arg1;
- (void)shouldUpdateHeight;
- (id)getBalanceButton:(long long)arg1;
- (BOOL)newUserDiscount:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)priceListsResponse;
- (unsigned int)diffWecoinCount;
- (BOOL)alwaysDarkMode;
- (void)setAlwaysDarkMode:(BOOL)arg1;
- (unsigned long long)panelShowType;
- (id)buyCoinDetailView;
- (void)setBuyCoinDetailView:(id)arg1;
- (void).cxx_destruct;
@end
