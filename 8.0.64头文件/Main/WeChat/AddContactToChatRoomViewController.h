@interface AddContactToChatRoomViewController : MMUIViewController <WCActionSheetDelegate, IStrongNotificationMgrExt, MsgSearchHelperDelegate, IStrongNotificationMgrExt, ChatRoomMemberGridViewDelegate, IContactMgrExt, CreateChatLogicDelegate, contactInfoDelegate, IntelligentMsgBrowseResultCommonDelegate>
{
    CContact * m_contact; // +0x70
    id <addContactToChatRoomDelegate> m_delegate; // +0x78
    MMTableView * m_tableView; // +0x80
    UIView * m_headerView; // +0x88
    CreateChatLogic * m_createChatLogic; // +0x90
    BOOL m_bTopSession; // +0x98
    MMTableViewInfo * m_tableViewInfo; // +0xa0
    BOOL m_bShowTranslateSectionAtFirst; // +0xa8
    NSIndexPath * m_showTranslateSectionIndex; // +0xb0
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0xb8
    MsgSearchHelper * m_oMsgSearchHelper; // +0xc0
    WWKFContactOpLogic * m_wwkfOpLogic; // +0xc8
    BOOL m_strongNotificationItemOperateWaitStatue; // +0xd0
    BOOL m_isInChatBox; // +0xd1
    BOOL m_reportChatBoxEntranceExposure; // +0xd2
    BOOL m_isChatStatusNotifyOpen; // +0xd3
    NSSet * _trackUsernameSet; // +0xd8
}
- (void)openContactInfo:(id)arg1;
- (void)createChatRoom;
- (void)addMember;
- (void)tryGetContactUsrImg;
- (BOOL)getSessionTopped;
- (void)onTopSession:(BOOL)arg1;
- (void)changeTopSessionOpenImLocal:(BOOL)arg1;
- (BOOL)isTopSessionCountExceed;
- (void)initData;
- (BOOL)setUpdateNotifyMuted:(BOOL)arg1;
- (void)setMuteStatus;
- (void)showChatBackgroundConfig;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmClearAllMsg;
- (void)onArriveFundCancelDeleteSession;
- (void)onArriveFundConfirmDeleteSession;
- (void)onEditAndSearch;
- (void)initMsgSearchHelper:(int)arg1;
- (void)onStrongNotificationSetting:(id)arg1;
- (double)getMemListCellHeight;
- (void)makeStrongNotificationCell:(id)arg1 cellInfo:(id)arg2;
- (id)getStrongNotificationCellSwitch;
- (id)getStrongNotificationCellLabel;
- (void)onClear:(id)arg1;
- (void)onExpose;
- (void)onDelete;
- (void)realDoDelete;
- (void)setFlagIcon:(id)arg1 ItemUsername:(id)arg2;
- (void)initMemberView;
- (BOOL)isInMyContactList;
- (void)reloadTableData;
- (void)reloadOpenIMKefuTableInfo;
- (void)reloadFileHelperContactTableInfo;
- (void)startCoverAnimOnIndexPath:(id)arg1;
- (void)hideCoverView;
- (void)removeCoverView;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)dealloc;
- (id)getViewController;
- (double)getContentViewY;
- (BOOL)shouldRestrictContentViewSize;
- (void)willDisplayChatBoxEntryCell:(id)arg1 indexPath:(id)arg2;
- (void)onCloseChat;
- (void)doCloseChat;
- (void)switchSaveToChatBox:(id)arg1;
- (void)setChatBoxStatus:(BOOL)arg1;
- (void)changeChatBoxStatusOpenImLocal:(BOOL)arg1;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)doReset;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)processModContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)onDeleteContact:(id)arg1;
- (void)onNewContact:(id)arg1;
- (void)checkTopSession;
- (void)setTopSession;
- (void)onAlertViewAction:(BOOL)arg1;
- (void)onAddStrongNotification:(id)arg1 contactUserName:(id)arg2 resultFlag:(BOOL)arg3;
- (void)onDeleteStrongNotification:(id)arg1 contactUserName:(id)arg2 resultFlag:(BOOL)arg3;
- (void)handleStrongNotificationOperateResult:(BOOL)arg1;
- (void)onModifyStrongNotification:(id)arg1 contactUserName:(id)arg2;
- (void)msgSearchBarCancel;
- (void)msgSearchDidDismiss;
- (void)msgSearchBarDoSearch;
- (id)getChatContact;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2 arrKeyword:(id)arg3;
- (id)getShowTopViewController;
- (id)m_contact;
- (void)setM_contact:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_createChatLogic;
- (void)setM_createChatLogic:(id)arg1;
- (BOOL)m_bShowTranslateSectionAtFirst;
- (void)setM_bShowTranslateSectionAtFirst:(BOOL)arg1;
- (id)m_showTranslateSectionIndex;
- (void)setM_showTranslateSectionIndex:(id)arg1;
- (void).cxx_destruct;
@end
