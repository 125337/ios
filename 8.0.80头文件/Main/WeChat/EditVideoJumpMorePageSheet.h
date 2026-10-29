@interface EditVideoJumpMorePageSheet : MMPageSheetBaseView
{
    PageSheetBottomDelegate * _sheetBottomDelegate; // +0x8
}
- (id)init;
- (void)_initSheetConfig;
- (void)_initDetailView;
- (void)setBottomOnConfirm:(id /* block */)arg1;
- (id)sheetBottomDelegate;
- (void)setSheetBottomDelegate:(id)arg1;
- (void).cxx_destruct;
@end
