@interface PluginContactInfoAssist : CBaseContactInfoAssist
{
    MMTableViewInfo * m_tableViewInfo; // +0x50
    long long m_pluginType; // +0x58
    unsigned int m_uOpType; // +0x60
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0x68
    UIButton * m_installBtn; // +0x70
    UIButton * m_uninstallBtn; // +0x78
    UILabel * m_statusLabel; // +0x80
    UIView * m_headerPaddingView; // +0x88
    UILabel * _introLabel; // +0x90
}
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)dealloc;
- (id)GetTableView;
- (void)initTableView;
- (void)reloadInstalledTableViewData;
- (void)reloadUninstalledTableViewData;
- (void)reloadTableView;
- (void)viewDidLayoutSubviews;
- (void)reloadTableViewData;
- (void)addBrandUserSignatureSection;
- (void)makeContactIntroCell:(id)arg1 CellInfo:(id)arg2;
- (id)getPluginIntro;
- (id)getUnInstallTip;
- (id)getUnInstallBtnTitle;
- (void)clearPluginData;
- (void)doUninstall;
- (void)promptUninstall:(id)arg1;
- (void)updateInstallView;
- (void)hiddenPartView;
- (void)initFooterView;
- (void)updateInstallStateAndReloadTableView;
- (void)setDelaySettingType:(long long)arg1 andValue:(BOOL)arg2;
- (void)onSwitchViewOn;
- (void)onSwitchViewOff;
- (void)installPlugin;
- (void)uninstallPlugin;
- (void)initInstallView;
- (void)initHeadImage;
- (void)initHeaderView;
- (BOOL)forbidShowInstallOrUninstall;
- (void)onNewMsg;
- (void)clearPluginMessage;
- (void)onClickClearMessage:(id)arg1;
- (void)onSwitchValueChange:(id)arg1;
- (id)getLoadingText;
- (id)navigationBarBackgroundColor;
- (id)introLabel;
- (void)setIntroLabel:(id)arg1;
- (void).cxx_destruct;
@end
