@interface PasskeyNoCredentialsPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id /* block */ _onFinishBlock; // +0x8
}
- (id)init;
- (void)config;
- (double)bottomViewBottomMargin;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (id /* block */)onFinishBlock;
- (void)setOnFinishBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end
