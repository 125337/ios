@interface MMFinderLiveShopShelfAddPreviousLiveGoodsWarningPageSheet : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    BOOL _hasClickedConfirm; // +0x8
    id /* block */ _completion; // +0x10
}
+ (void)showWithPageInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithPageInfo:(id)arg1;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)pageSheetDidClose:(BOOL)arg1;
- (void)layoutSubviews;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)hasClickedConfirm;
- (void)setHasClickedConfirm:(BOOL)arg1;
- (void).cxx_destruct;
@end
