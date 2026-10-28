@interface WCCoinConsumePanel : MMPageSheetBaseViewController
{
    id <WCCoinConsumePanelDelegate> _delegate; // +0x70
    WCCoinConsumeParameter * _parameter; // +0x78
    long long _wecoinBalance; // +0x80
    WCCoinConsumePanelDetailView * _panelDetailView; // +0x88
}
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)clickBalanceButton;
- (BOOL)enoughCoin;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)parameter;
- (void)setParameter:(id)arg1;
- (long long)wecoinBalance;
- (void)setWecoinBalance:(long long)arg1;
- (id)panelDetailView;
- (void)setPanelDetailView:(id)arg1;
- (void).cxx_destruct;
@end
