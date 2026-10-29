@interface CLMDeleteSessionChatLogSecondAlertHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id /* block */ _confirmCallBack; // +0x8
    unsigned long long _allDataSize; // +0x10
}
- (id)initWithDataSize:(unsigned long long)arg1;
- (void)setupDetaiView;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)colorForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)colorForPageSheetCancelButtonTitle;
- (void)onClickPageSheetConfirmButton;
- (id /* block */)confirmCallBack;
- (void)setConfirmCallBack:(id /* block */)arg1;
- (unsigned long long)allDataSize;
- (void)setAllDataSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
