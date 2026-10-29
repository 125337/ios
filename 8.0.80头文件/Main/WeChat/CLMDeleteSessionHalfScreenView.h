@interface CLMDeleteSessionHalfScreenView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id /* block */ _confirmCallBack; // +0x8
    unsigned long long _resourceSize; // +0x10
    unsigned long long _allDataSize; // +0x18
}
- (id)initWithResoureSize:(unsigned long long)arg1 allDataSize:(unsigned long long)arg2;
- (void)setupDetaiView;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)colorForPageSheetCancelButtonTitle;
- (void)onClickPageSheetConfirmButton;
- (id /* block */)confirmCallBack;
- (void)setConfirmCallBack:(id /* block */)arg1;
- (unsigned long long)resourceSize;
- (void)setResourceSize:(unsigned long long)arg1;
- (unsigned long long)allDataSize;
- (void)setAllDataSize:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
