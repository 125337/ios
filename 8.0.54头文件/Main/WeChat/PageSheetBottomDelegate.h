@interface PageSheetBottomDelegate : NSObject <MMPageSheetBottomViewDelegate>
{
    id /* block */ _onConfirm; // +0x8
}
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (double)bottomViewTopMargin;
- (void)onClickPageSheetConfirmButton;
- (id /* block */)onConfirm;
- (void)setOnConfirm:(id /* block */)arg1;
- (void).cxx_destruct;
@end

