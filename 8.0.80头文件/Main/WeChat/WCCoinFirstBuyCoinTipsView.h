@interface WCCoinFirstBuyCoinTipsView : MMPageSheetBaseViewController <WCCoinFirstBuyCoinTipsDetailViewDelegate>
{
    BOOL _alwaysDarkMode; // +0x70
    id <WCCoinFirstBuyCoinTipsViewDelegate> _delegate; // +0x78
}
- (id)init;
- (void)viewDidLoad;
- (long long)overrideUserInterfaceStyle;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)didClickDone;
- (BOOL)alwaysDarkMode;
- (void)setAlwaysDarkMode:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
