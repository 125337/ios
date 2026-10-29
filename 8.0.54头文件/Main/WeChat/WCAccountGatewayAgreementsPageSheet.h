@interface WCAccountGatewayAgreementsPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id /* block */ _onGoNextBlock; // +0x8
    MMUILabel * _headerLabel; // +0x10
    NSMutableArray * _agreementCheckBoxes; // +0x18
}
- (void)configWithTitle:(id)arg1 agreements:(id)arg2 maxHeight:(double)arg3;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id /* block */)onGoNextBlock;
- (void)setOnGoNextBlock:(id /* block */)arg1;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg1;
- (id)agreementCheckBoxes;
- (void)setAgreementCheckBoxes:(id)arg1;
- (void).cxx_destruct;
@end

