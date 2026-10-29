@interface WCFinderOriginalAgreementConfirmPageSheet : MMPageSheetBaseViewController
{
    id /* block */ _clickRuleBlock; // +0x70
    id /* block */ _clickAgreeBlock; // +0x78
    id /* block */ _updateOriginalEduSelectStateBlock; // +0x80
    id /* block */ _clickCancelBlock; // +0x88
}
- (void)viewDidLoad;
- (double)pageSheetContentHeight;
- (double)safeAreaBottom;
- (void)setupPageSheetConfig;
- (void)setupSubviews;
- (id)buildRuleButtonWithTitle:(id)arg1 url:(id)arg2;
- (void)onClickRule:(id)arg1;
- (void)onClickAgree;
- (void)onClickCancel;
- (id /* block */)clickRuleBlock;
- (void)setClickRuleBlock:(id /* block */)arg1;
- (id /* block */)clickAgreeBlock;
- (void)setClickAgreeBlock:(id /* block */)arg1;
- (id /* block */)updateOriginalEduSelectStateBlock;
- (void)setUpdateOriginalEduSelectStateBlock:(id /* block */)arg1;
- (id /* block */)clickCancelBlock;
- (void)setClickCancelBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
