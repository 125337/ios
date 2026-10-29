@interface SettingVoipCellViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    long long _from; // +0x78
    unsigned long long _settingViewType; // +0x80
    DelaySwitchSettingLogic * _delaySwitchLogic; // +0x88
}
- (void)voipDoubleLinkSettingChanged:(id)arg1;
- (void)reportOperate:(long long)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)onReturn;
- (id)delaySwitchLogic;
- (void)registerYReportSdk;
- (long long)from;
- (unsigned long long)settingViewType;
- (void)setSettingViewType:(unsigned long long)arg1;
- (void)setDelaySwitchLogic:(id)arg1;
- (void).cxx_destruct;
@end
