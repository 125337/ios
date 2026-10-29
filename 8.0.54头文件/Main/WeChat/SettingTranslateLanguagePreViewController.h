@interface SettingTranslateLanguagePreViewController : MMStackViewController <MMNavBarInteractiveDelegate>
{
    MMUILabel * _descLabel; // +0x68
}
- (void)viewDidLoad;
- (void)registerYReportSdk;
- (void)initView;
- (void)initInteractiveNavi;
- (id)genHeaderView;
- (id)genCell;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void).cxx_destruct;
@end

