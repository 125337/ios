@interface WXGMigrationAlertUpdateView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    id <WXGMigrationAlertUpdateViewDelegate> _delegate; // +0x8
    NSString * _tipString; // +0x10
    NSString * _titleString; // +0x18
}
- (id)initWithIsBackup:(BOOL)arg1;
- (void)setupDetailView;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)tipString;
- (void)setTipString:(id)arg1;
- (id)titleString;
- (void)setTitleString:(id)arg1;
- (void).cxx_destruct;
@end
