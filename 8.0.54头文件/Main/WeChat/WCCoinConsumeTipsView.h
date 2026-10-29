@interface WCCoinConsumeTipsView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    NSArray * _wording; // +0x68
    id <WCCoinConsumeTipsViewDelegate> _delegate; // +0x70
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)onClickPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)pageSheetDidClose:(BOOL)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

