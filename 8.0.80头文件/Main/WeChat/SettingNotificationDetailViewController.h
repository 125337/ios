@interface SettingNotificationDetailViewController : NewSettingBaseViewController
{
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0x80
    BOOL _isSelectionChanged; // +0x88
    BOOL _previousHeadImgOn; // +0x89
    id /* block */ _selectionHandler; // +0x90
    long long _selectedIndex; // +0x98
    long long _previousSelectedIndex; // +0xa0
}
- (id)initWithSelectionHandler:(id /* block */)arg1;
- (void)viewDidLoad;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (void)reloadTableData;
- (id)oldUIConfigSection;
- (id)newUIConfigSection;
- (BOOL)isShowMessgeSwitchOn;
- (BOOL)isShowHeadImgSwitchOn;
- (BOOL)isShowMessageDetailSwitchOn;
- (void)onSwitchShowMessage:(id)arg1;
- (void)onSwitchShowMessageDetail:(id)arg1;
- (void)onSwitchShowHeadImg:(id)arg1;
- (void)onSwitchChange;
- (void)onSetHeadImgOpen:(BOOL)arg1;
- (void)onSaveAndUploadHeadImg;
- (void)onSelectAtCell:(id)arg1;
- (id)genCellWithTitle:(id)arg1 index:(long long)arg2;
- (unsigned int)indexToSetting:(long long)arg1;
- (void)registerYReportSdk;
- (void)reportPushNotifySettingChangeWithSetting:(long long)arg1;
- (id /* block */)selectionHandler;
- (void)setSelectionHandler:(id /* block */)arg1;
- (long long)selectedIndex;
- (void)setSelectedIndex:(long long)arg1;
- (long long)previousSelectedIndex;
- (void)setPreviousSelectedIndex:(long long)arg1;
- (BOOL)isSelectionChanged;
- (void)setIsSelectionChanged:(BOOL)arg1;
- (BOOL)previousHeadImgOn;
- (void)setPreviousHeadImgOn:(BOOL)arg1;
- (void).cxx_destruct;
@end
