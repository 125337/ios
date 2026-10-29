@interface MMPrivacyInfomationApplyTipsView : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    MMPrivacyInfomationApplyTipsViewConfig * _config; // +0x68
}
- (id)initWithConfig:(id)arg1;
- (void)viewDidLoad;
- (id)titleForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)config;
- (void)setConfig:(id)arg1;
- (void).cxx_destruct;
@end

