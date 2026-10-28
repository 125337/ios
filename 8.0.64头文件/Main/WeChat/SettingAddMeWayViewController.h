@interface SettingAddMeWayViewController : MMUIViewController
{
    BOOL m_allowFindMeByPhoneSwitchOpen; // +0x70
    BOOL m_allowFindMeByContactConfigSwitchOpen; // +0x71
    BOOL m_bAllowFindByQQOpen; // +0x72
    BOOL m_allowFindMeByGoogleSwitchOpen; // +0x73
    BOOL m_addMeByGroupSwitchOpen; // +0x74
    BOOL m_addMeByQRCodeSwitchOpen; // +0x75
    BOOL m_addMeByCardSwitchOpen; // +0x76
    MMTableViewInfo * m_tableViewInfo; // +0x78
    unsigned int m_phoneSection; // +0x80
    BOOL m_bIsShowPhoneSectionIndexAtFirst; // +0x84
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0x88
}
- (id)init;
- (void)reloadTableData;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)allowFindMeByPhoneSwitchChanged:(id)arg1;
- (void)allowFindMeByContactConfigSwitchChanged:(id)arg1;
- (void)allowQQFriendFindMeSwitchChanged:(id)arg1;
- (void)allowAddMeByGroupSwitchChanged:(id)arg1;
- (void)allowAddMeByQRCodeSwitchChanged:(id)arg1;
- (void)allowAddMeByCardSwitchChanged:(id)arg1;
- (void)startCoverAnimOnPhone;
- (void)hideCoverView;
- (void)removeCoverView;
- (void)registerYReportSdk;
- (BOOL)m_bIsShowPhoneSectionIndexAtFirst;
- (void)setM_bIsShowPhoneSectionIndexAtFirst:(BOOL)arg1;
- (void).cxx_destruct;
@end
