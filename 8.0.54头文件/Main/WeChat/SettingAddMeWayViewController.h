@interface SettingAddMeWayViewController : MMUIViewController
{
    BOOL m_allowFindMeByPhoneSwitchOpen; // +0x68
    BOOL m_allowFindMeByContactConfigSwitchOpen; // +0x69
    BOOL m_bAllowFindByQQOpen; // +0x6a
    BOOL m_allowFindMeByGoogleSwitchOpen; // +0x6b
    BOOL m_addMeByGroupSwitchOpen; // +0x6c
    BOOL m_addMeByQRCodeSwitchOpen; // +0x6d
    BOOL m_addMeByCardSwitchOpen; // +0x6e
    MMTableViewInfo * m_tableViewInfo; // +0x70
    unsigned int m_phoneSection; // +0x78
    BOOL m_bIsShowPhoneSectionIndexAtFirst; // +0x7c
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0x80
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
- (BOOL)m_bIsShowPhoneSectionIndexAtFirst;
- (void)setM_bIsShowPhoneSectionIndexAtFirst:(BOOL)arg1;
- (void).cxx_destruct;
@end

