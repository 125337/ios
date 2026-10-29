@interface CLMDeleteSessionChatLogHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    BOOL enhancingCleanConfirm; // +0x8
    id /* block */ _confirmCallBack; // +0x10
    unsigned long long _allDataSize; // +0x18
}
- (id)initWithDataSize:(unsigned long long)arg1;
- (void)setupDetaiView;
- (void)setupBottomSubview;
- (void)onTapDeleteButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
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
