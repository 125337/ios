@interface BraceletProfilePrivacySettingViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    BOOL m_isSettingsChanged; // +0x78
    CContact * m_contact; // +0x80
}
- (id)initWithContact:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)initTable;
- (void)onTakePartInSwitchChange:(id)arg1;
- (void)onRankMsgSwitchChange:(id)arg1;
- (void)onLikeSwitchChange:(id)arg1;
- (BOOL)isReceiveMessage;
- (void)updateBrandReceiveMSG;
- (void)goWeSportBlackListView;
- (void).cxx_destruct;
@end
