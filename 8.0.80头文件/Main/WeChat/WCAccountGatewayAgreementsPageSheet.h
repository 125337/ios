@interface WCAccountGatewayAgreementsPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id /* block */ _onGoNextBlock; // +0x8
    id /* block */ _onGatewayLoginConfirm; // +0x10
    MMUILabel * _headerLabel; // +0x18
    MMUILabel * _subLabel; // +0x20
    NSMutableArray * _agreementCheckBoxes; // +0x28
    NSString * _nextButtonText; // +0x30
    unsigned long long _type; // +0x38
}
- (void)configWithTitle:(id)arg1 subTitle:(id)arg2 nextButtonText:(id)arg3 agreements:(id)arg4 maxHeight:(double)arg5;
- (void)configWithTitle:(id)arg1 agreements:(id)arg2 maxHeight:(double)arg3;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id /* block */)onGoNextBlock;
- (void)setOnGoNextBlock:(id /* block */)arg1;
- (id /* block */)onGatewayLoginConfirm;
- (void)setOnGatewayLoginConfirm:(id /* block */)arg1;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg1;
- (id)subLabel;
- (void)setSubLabel:(id)arg1;
- (id)agreementCheckBoxes;
- (void)setAgreementCheckBoxes:(id)arg1;
- (id)nextButtonText;
- (void)setNextButtonText:(id)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
