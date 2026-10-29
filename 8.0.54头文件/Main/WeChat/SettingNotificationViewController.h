@interface SettingNotificationViewController : NewSettingBaseViewController <NewMessageRingBroadcast, ILinkEventExt, WCActionSheetDelegate>
{
    WCActionSheet * m_remindSwitchActionSheet; // +0x78
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0x80
    UISwitch * m_msgRemindSwitch; // +0x88
    UISwitch * m_voipRemindSwitch; // +0x90
    UISwitch * m_pushDetailSwitch; // +0x98
    UISwitch * m_finderRemindSwitch; // +0xa0
    BOOL _highlightMsgNotifySetting; // +0xa8
    BOOL _isRouted; // +0xa9
    BOOL _hasQuickReplyRedDot; // +0xaa
    BOOL _shouldHighlightNotifyRemindSwitch; // +0xab
    BOOL _shouldHighlightVoipNotifyRemindSwitch; // +0xac
    id <SettingNotificationViewControllerDelegate> _delegate; // +0xb0
    MMNotificationSetting * _notificationSetting; // +0xb8
    RingToneSettingCellHandler * _ringToneSettingCellHandler; // +0xc0
    WCTableViewCellManager * _globalUnreadMsgCellInfo; // +0xc8
    WCTableViewCellManager * _notifyRemindCellInfo; // +0xd0
    WCTableViewCellManager * _voipNotifyRemindCellInfo; // +0xd8
}
- (void)setupHighlightNotifyRemindSwitch;
- (void)setupHighlightVoipNotifyRemindSwitch;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)refreshSysSetting;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)soundSwitchChanged:(id)arg1;
- (void)vibrationSwitchChanged:(id)arg1;
- (void)doSetPrivateConfig:(unsigned int)arg1 on:(BOOL)arg2 bitset:(unsigned int)arg3;
- (void)pushDetailSwitchChanged:(id)arg1;
- (void)msgNotificationRemindSwitchChanged:(id)arg1;
- (void)voipNotificationRemindSwitchChanged:(id)arg1;
- (void)voipNotificationUseCallKitSwitchChanged:(id)arg1;
- (void)finderNotificationRemindSwitchChanged:(id)arg1;
- (void)showMsgRemindSwitchActionSheet:(id)arg1;
- (void)showVoipRemindSwitchActionSheet:(id)arg1;
- (void)showFinderRemindSwitchActionSheet:(id)arg1;
- (void)showPushDetailSwitchActionSheet:(id)arg1;
- (void)onQuickReplyBannerSwitchChanged:(id)arg1;
- (void)onQuickReplyNotifyContentSetting:(id)arg1;
- (void)msgNotificationRemindSwitchSetting:(BOOL)arg1;
- (void)voipNotificationRemindSwitchSetting:(BOOL)arg1;
- (void)voipNotificationUseCallKitSwitchSetting:(BOOL)arg1;
- (void)finderNotificationRemindSwitchSetting:(BOOL)arg1;
- (void)reloadTableData;
- (id)quickReplyNotifySettingCell;
- (id)quickReplyNotifyContentSettingCell;
- (id)genRichTextSectionFooterView:(id)arg1;
- (void)makeQuickReplyCellWithTips:(id)arg1 cellInfo:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)makeSwitchCellWithColName:(id)arg1 action:(SEL)arg2 on:(BOOL)arg3 forbidOp:(BOOL)arg4 viewId:(id)arg5;
- (id)makeSwitchCellWithColName:(id)arg1 action:(SEL)arg2 on:(BOOL)arg3 forbidOp:(BOOL)arg4 detailText:(id)arg5 viewId:(id)arg6;
- (void)setupSwitchReportForCell:(id)arg1 viewId:(id)arg2;
- (id)makeNotificationCellWithRow:(unsigned long long)arg1;
- (id)makeNotificationRemindCellWithRow:(unsigned long long)arg1;
- (id)makePushDetailCellWithRow:(unsigned long long)arg1;
- (unsigned int)getUseCallKitConfigValue;
- (id)titleForFooterInSection:(long long)arg1;
- (id)titleForHeaderInSection:(long long)arg1;
- (void)onMessageRingTypeChanged;
- (void)checkShowRingbackSwitch;
- (void)preLoadGlobalRing;
- (void)reportClickWithViewId:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)registerYReportSdk;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)highlightMsgNotifySetting;
- (void)setHighlightMsgNotifySetting:(BOOL)arg1;
- (BOOL)isRouted;
- (void)setIsRouted:(BOOL)arg1;
- (id)notificationSetting;
- (void)setNotificationSetting:(id)arg1;
- (id)ringToneSettingCellHandler;
- (void)setRingToneSettingCellHandler:(id)arg1;
- (id)globalUnreadMsgCellInfo;
- (void)setGlobalUnreadMsgCellInfo:(id)arg1;
- (BOOL)hasQuickReplyRedDot;
- (void)setHasQuickReplyRedDot:(BOOL)arg1;
- (id)notifyRemindCellInfo;
- (void)setNotifyRemindCellInfo:(id)arg1;
- (id)voipNotifyRemindCellInfo;
- (void)setVoipNotifyRemindCellInfo:(id)arg1;
- (BOOL)shouldHighlightNotifyRemindSwitch;
- (void)setShouldHighlightNotifyRemindSwitch:(BOOL)arg1;
- (BOOL)shouldHighlightVoipNotifyRemindSwitch;
- (void)setShouldHighlightVoipNotifyRemindSwitch:(BOOL)arg1;
- (void).cxx_destruct;
@end

