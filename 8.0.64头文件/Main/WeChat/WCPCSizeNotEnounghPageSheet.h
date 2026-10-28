@interface WCPCSizeNotEnounghPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id /* block */ _confirmCallBack; // +0x8
    id /* block */ _cancelCallBack; // +0x10
}
- (id)initWithTitle:(id)arg1;
- (void)setupDetailViewWithTitle:(id)arg1;
- (id)titleForPageSheetCancelButton;
- (long long)styleForPageSheetCancelButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id /* block */)confirmCallBack;
- (void)setConfirmCallBack:(id /* block */)arg1;
- (id /* block */)cancelCallBack;
- (void)setCancelCallBack:(id /* block */)arg1;
- (void).cxx_destruct;
@end
