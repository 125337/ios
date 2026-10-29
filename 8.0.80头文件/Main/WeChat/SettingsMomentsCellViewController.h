@interface SettingsMomentsCellViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    BOOL _isMutualFriendsInteractionReminderEnabled; // +0x78
    DelaySwitchSettingLogic * _delaySwitchLogic; // +0x80
    id <WCCommentListManageDelegate> _delegate; // +0x88
}
- (id)init;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)saveVideoAutoPlayChanged:(id)arg1;
- (void)isMutualFriendsInteractionReminderEnabledSwitchChanged:(id)arg1;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)reportMutualFriendsInterfactionSwitchEvent;
- (void)registerYReportSdk;
- (id)delaySwitchLogic;
- (BOOL)isMutualFriendsInteractionReminderEnabled;
- (void)setIsMutualFriendsInteractionReminderEnabled:(BOOL)arg1;
- (void)setDelaySwitchLogic:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
