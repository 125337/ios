@interface SettingPayEntranceViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    id /* block */ _onValueChanged; // +0x70
}
+ (BOOL)isUserOpenPayEntry;
- (void)viewDidLoad;
- (void)initDetailView;
- (BOOL)isOpen;
- (id)titleForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (id /* block */)onValueChanged;
- (void)setOnValueChanged:(id /* block */)arg1;
- (void).cxx_destruct;
@end
