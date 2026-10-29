@interface CLMDeleteDataHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id /* block */ _confirmCallBack; // +0x8
    unsigned long long _dataSize; // +0x10
    NSString * _titleString; // +0x18
    NSString * _tipString; // +0x20
    NSString * _confirmString; // +0x28
}
- (id)initWithDataSize:(unsigned long long)arg1 title:(id)arg2 tip:(id)arg3 confirmTip:(id)arg4;
- (void)setupDetailView;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (id /* block */)confirmCallBack;
- (void)setConfirmCallBack:(id /* block */)arg1;
- (unsigned long long)dataSize;
- (void)setDataSize:(unsigned long long)arg1;
- (id)titleString;
- (void)setTitleString:(id)arg1;
- (id)tipString;
- (void)setTipString:(id)arg1;
- (id)confirmString;
- (void)setConfirmString:(id)arg1;
- (void).cxx_destruct;
@end

