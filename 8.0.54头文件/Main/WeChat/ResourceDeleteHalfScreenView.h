@interface ResourceDeleteHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    BOOL _checkDeleteAll; // +0x8
    id /* block */ _confirmCallBack; // +0x10
    id /* block */ _linkTapCallBack; // +0x18
    unsigned long long _dataSize; // +0x20
    unsigned long long _allDataSize; // +0x28
    unsigned long long _filterType; // +0x30
}
- (id)initWithDataSize:(unsigned long long)arg1 allDataSize:(unsigned long long)arg2 filterType:(unsigned long long)arg3 checkDeleteAll:(BOOL)arg4;
- (void)setupDetaiView;
- (void)setupBottomSubview;
- (void)onTapDeleteButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)colorForPageSheetCancelButtonTitle;
- (void)onClickPageSheetConfirmButton;
- (id /* block */)confirmCallBack;
- (void)setConfirmCallBack:(id /* block */)arg1;
- (id /* block */)linkTapCallBack;
- (void)setLinkTapCallBack:(id /* block */)arg1;
- (unsigned long long)dataSize;
- (void)setDataSize:(unsigned long long)arg1;
- (unsigned long long)allDataSize;
- (void)setAllDataSize:(unsigned long long)arg1;
- (unsigned long long)filterType;
- (void)setFilterType:(unsigned long long)arg1;
- (BOOL)checkDeleteAll;
- (void)setCheckDeleteAll:(BOOL)arg1;
- (void).cxx_destruct;
@end

