@interface WCSettingMsgInteractiveManagementViewController : MMUIViewController
{
    MMTableViewInfo * m_tableViewInfo; // +0x70
    BOOL _isMutualFriendsInteractionReminderEnabled; // +0x78
    DelaySwitchSettingLogic * _delaySwitchLogic; // +0x80
    id <WCCommentListManageDelegate> _delegate; // +0x88
}
+ (BOOL)isMutualFriendsInteractionReminderEnabled;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willAppear;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)isMutualFriendsInteractionReminderEnabledSwitchChanged:(id)arg1;
- (id)delaySwitchLogic;
- (void)addCommonFriendsInteractionsReminderSection;
- (void)addClearAllMessagesSection;
- (void)clearAllCommentList;
- (void)reloadTableData;
- (void)reloadTableDataWithReloadFooterView:(BOOL)arg1;
- (void)configInteractionsReminderSectionDataReport:(id)arg1;
- (void)reportMutualFriendsInterfactionSwitchEvent;
- (void)configSNSMessageManagementPageReport;
- (BOOL)isMutualFriendsInteractionReminderEnabled;
- (void)setIsMutualFriendsInteractionReminderEnabled:(BOOL)arg1;
- (void)setDelaySwitchLogic:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
