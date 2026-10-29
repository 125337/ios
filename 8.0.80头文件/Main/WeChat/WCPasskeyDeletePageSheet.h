@interface WCPasskeyDeletePageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id /* block */ _onGoDeleteBlock; // +0x8
    MMUILabel * _headerLabel; // +0x10
    MMUILabel * _contentLabel; // +0x18
}
- (void)configWithTitle:(id)arg1 contentString:(id)arg2 maxHeight:(double)arg3;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id /* block */)onGoDeleteBlock;
- (void)setOnGoDeleteBlock:(id /* block */)arg1;
- (id)headerLabel;
- (void)setHeaderLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (void).cxx_destruct;
@end
