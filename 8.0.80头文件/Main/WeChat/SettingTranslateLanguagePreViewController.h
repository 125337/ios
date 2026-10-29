@interface SettingTranslateLanguagePreViewController : MMStackViewController <MMNavBarInteractiveDelegate>
{
    BOOL m_isAutoTranslateAllSessionsOldValue; // +0x70
    BOOL _shouldHighlightAutoTranslateItem; // +0x71
    id /* block */ _onAutoTranslateSessionChange; // +0x78
    MMUILabel * _descLabel; // +0x80
    DelaySwitchSettingLogic * _delaySwitchLogic; // +0x88
}
- (void)viewDidLoad;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)registerYReportSdk;
- (void)initView;
- (void)initInteractiveNavi;
- (id)genHeaderView;
- (id)genFooterView:(id)arg1;
- (id)genCell;
- (id)genAutoTranslateCell;
- (id)delaySwitchLogic;
- (id)normalTintColor;
- (BOOL)isSetNormalToBlackStyle;
- (void)onCloseButtonClicked;
- (id /* block */)onAutoTranslateSessionChange;
- (void)setOnAutoTranslateSessionChange:(id /* block */)arg1;
- (BOOL)shouldHighlightAutoTranslateItem;
- (void)setShouldHighlightAutoTranslateItem:(BOOL)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (void)setDelaySwitchLogic:(id)arg1;
- (void).cxx_destruct;
@end
