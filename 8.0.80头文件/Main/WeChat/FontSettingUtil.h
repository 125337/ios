@interface FontSettingUtil : NSObject <MMTipsViewControllerDelegate>
{
    id <FontSettingUtilDelegate> _delegate; // +0x8
    MMTipsViewController * _fontSettingTipsView; // +0x10
}
- (BOOL)canShowFontSettingTips;
- (void)showUserFontSettingTips;
- (void)checkFontSetting;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)fontSettingTipsView;
- (void)setFontSettingTipsView:(id)arg1;
- (void).cxx_destruct;
@end
