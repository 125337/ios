@interface WCCoinConsumePanel : MMPageSheetBaseViewController
{
    BOOL _a11yBackgroundHidden; // +0x70
    id <WCCoinConsumePanelDelegate> _delegate; // +0x78
    WCCoinConsumeParameter * _parameter; // +0x80
    long long _wecoinBalance; // +0x88
    WCCoinConsumePanelDetailView * _panelDetailView; // +0x90
    WCCoinBalanceButton * _balanceButton; // +0x98
    NSMapTable * _a11yPreviousHiddenMap; // +0xa0
}
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)dealloc;
- (void)refreshWecoinBalance;
- (void)clickBalanceButton;
- (void)hideBackgroundAccessibility;
- (void)restoreBackgroundAccessibility;
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
- (id)balanceButton;
- (void)setBalanceButton:(id)arg1;
- (id)a11yPreviousHiddenMap;
- (void)setA11yPreviousHiddenMap:(id)arg1;
- (BOOL)a11yBackgroundHidden;
- (void)setA11yBackgroundHidden:(BOOL)arg1;
- (void).cxx_destruct;
@end
