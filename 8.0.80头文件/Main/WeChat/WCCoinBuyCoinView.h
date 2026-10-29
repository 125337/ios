@interface WCCoinBuyCoinView : MMPageSheetBaseViewController <WCPayBuyCoinDetailViewDelegate>
{
    BOOL _alwaysDarkMode; // +0x70
    BOOL _a11yBackgroundHidden; // +0x71
    unsigned int _diffWecoinCount; // +0x74
    id <WCCoinBuyCoinViewDelegate> _delegate; // +0x78
    GetWecoinPriceListResponse * _priceListsResponse; // +0x80
    unsigned long long _panelShowType; // +0x88
    WCPayBuyCoinDetailView * _buyCoinDetailView; // +0x90
    WCPayBuyCoinDetailViewV2 * _buyCoinDetailViewV2; // +0x98
    GetWecoinPriceListResponse * _pendingV2Response; // +0xa0
    NSMapTable * _a11yPreviousHiddenMap; // +0xa8
}
- (id)init;
- (id)makeCloseButtonWithDynamicSize:(BOOL)arg1;
- (void)onClickCloseButton:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (BOOL)isV2Panel;
- (void)hideBackgroundAccessibility;
- (void)restoreBackgroundAccessibility;
- (void)fixNavBarAccessibilityOrder;
- (id)findPageSheetNavBarIn:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)setPriceListsResponse:(id)arg1;
- (void)setPanelShowType:(unsigned long long)arg1;
- (void)setDiffWecoinCount:(unsigned int)arg1;
- (CGSize)wc_duoHostSize;
- (double)wc_duoPanelWidth;
- (double)wc_duoFixedDetailHeight;
- (double)pageSheetContentWidth;
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
- (id)buyCoinDetailViewV2;
- (void)setBuyCoinDetailViewV2:(id)arg1;
- (id)pendingV2Response;
- (void)setPendingV2Response:(id)arg1;
- (id)a11yPreviousHiddenMap;
- (void)setA11yPreviousHiddenMap:(id)arg1;
- (BOOL)a11yBackgroundHidden;
- (void)setA11yBackgroundHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end
