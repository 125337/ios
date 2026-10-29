@interface CLMHardlinkTipView : MMPageSheetBaseView <MMPageSheetBottomViewDelegate>
{
    NSString * _hardlinkTitle; // +0x8
}
- (id)initWithTitle:(id)arg1;
- (void)setupDetailView;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (double)bottomViewBottomMargin;
- (void)onClickPageSheetConfirmButton;
- (id)hardlinkTitle;
- (void)setHardlinkTitle:(id)arg1;
- (void).cxx_destruct;
@end

