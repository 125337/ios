@interface WCAccountNoPwdAgreementPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    BOOL hasEntry; // +0x8
    id /* block */ _onGoNextBlock; // +0x10
    id /* block */ _onCancelBlock; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUILabel * _descLabel; // +0x28
    WCAgreementCheckBox * _agreementCheckBox; // +0x30
    MMUILabel * _noPwdCell; // +0x38
    MMUILabel * _passkeyCell; // +0x40
    UIView * _entriesContainer; // +0x48
}
- (id)createTableViewCellWithTitle:(id)arg1 rightSubtitle:(id)arg2 action:(SEL)arg3;
- (BOOL)isNoPwdEnable;
- (BOOL)isPasskeyEnable;
- (void)setupEntriesViewWithMaxHeight:(double)arg1;
- (void)configWithTitle:(id)arg1 desc:(id)arg2 maxHeight:(double)arg3;
- (double)bottomViewTopMargin;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)setNoPwdLogin;
- (void)setPasskey;
- (id /* block */)onGoNextBlock;
- (void)setOnGoNextBlock:(id /* block */)arg1;
- (id /* block */)onCancelBlock;
- (void)setOnCancelBlock:(id /* block */)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)agreementCheckBox;
- (void)setAgreementCheckBox:(id)arg1;
- (id)noPwdCell;
- (void)setNoPwdCell:(id)arg1;
- (id)passkeyCell;
- (void)setPasskeyCell:(id)arg1;
- (id)entriesContainer;
- (void)setEntriesContainer:(id)arg1;
- (void).cxx_destruct;
@end
