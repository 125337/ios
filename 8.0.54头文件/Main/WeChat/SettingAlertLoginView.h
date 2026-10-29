@interface SettingAlertLoginView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    NSString * _tipString; // +0x8
    NSString * _titleString; // +0x10
}
- (id)initForAlertMac;
- (id)initForAlertWin;
- (id)initForAlertLogin;
- (void)setupDetailView;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (id)tipString;
- (void)setTipString:(id)arg1;
- (id)titleString;
- (void)setTitleString:(id)arg1;
- (void).cxx_destruct;
@end

