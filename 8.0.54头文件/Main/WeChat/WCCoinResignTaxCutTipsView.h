@interface WCCoinResignTaxCutTipsView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    WecoinTaxReConfirmHalfPageInfo * _taxReconfirmInfo; // +0x68
    id <WCCoinResignTaxCutTipsViewDelegate> _delegate; // +0x70
}
- (id)init;
- (void)viewDidLoad;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)taxReconfirmInfo;
- (void)setTaxReconfirmInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

