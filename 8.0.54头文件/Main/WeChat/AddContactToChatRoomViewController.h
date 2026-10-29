@interface AddContactToChatRoomViewController : MMUIViewController <WCActionSheetDelegate, IStrongNotificationMgrExt, MsgSearchHelperDelegate, IStrongNotificationMgrExt, ChatRoomMemberGridViewDelegate, IContactMgrExt, CreateChatLogicDelegate, contactInfoDelegate, IntelligentMsgBrowseResultCommonDelegate>
{
    CContact * m_contact; // +0x68
    id <addContactToChatRoomDelegate> m_delegate; // +0x70
    MMTableView * m_tableView; // +0x78
    UIView * m_headerView; // +0x80
    CreateChatLogic * m_createChatLogic; // +0x88
    BOOL m_bTopSession; // +0x90
    MMTableViewInfo * m_tableViewInfo; // +0x98
    BOOL m_bShowTranslateSectionAtFirst; // +0xa0
    NSIndexPath * m_showTranslateSectionIndex; // +0xa8
    DelaySwitchSettingLogic * m_delaySwitchLogic; // +0xb0
    MsgSearchHelper * m_oMsgSearchHelper; // +0xb8
    WWKFContactOpLogic * m_wwkfOpLogic; // +0xc0
    BOOL m_strongNotificationItemOperateWaitStatue; // +0xc8
    NSSet * _trackUsernameSet; // +0xd0
}
- (void)openContactInfo:(id)arg1;
- (void)createChatRoom;
- (void)addMember;
- (void)tryGetContactUsrImg;
- (BOOL)getSessionTopped;
- (void)onTopSession:(BOOL)arg1;
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
- (void)startCoverAnimOnIndexPath:(id)arg1;
- (void)hideCoverView;
- (void)removeCoverView;
- (void)initView;
- (void)reloadView;
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
- (void)onCloseChat;
- (void)doCloseChat;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)doReset;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)processModContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)onDeleteContact:(id)arg1;
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

