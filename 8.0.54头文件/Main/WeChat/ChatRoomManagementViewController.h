@interface ChatRoomManagementViewController : MMUIViewController <ChatRoomUpgradeOpenIMLogicDelegate, MMNewTipsMgrExt, WCActionSheetDelegate, MMTableViewInfoDelegate, ChangeOwnerLogicDelegate, ChatRoomAdminSettingLogicDelegate, IContactMgrExt, IGroupMgrExt>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    ChangeOwnerLogic * m_changeOwnerLogic; // +0x70
    ChatRoomAdminSettingLogic * m_chatRoomAdminSettingLogic; // +0x78
    ChatRoomUpgradeOpenIMLogic * m_chatRoomUpgradeOpenIMLogic; // +0x80
    BOOL _waitingDismissGroupResp; // +0x88
    CContact * m_chatRoomContact; // +0x90
    id <ChatRoomManagementDelegate> m_delegate; // +0x98
}
- (void)viewDidLoad;
- (void)checkNeedForcedUpdateForInfoDetail;
- (void)initData;
- (void)initTableView;
- (void)reloadTableData;
- (void)switchAllowOwnerApprove:(id)arg1;
- (void)showChatRoomUpgradeOpenIM;
- (BOOL)shouldRestrictContentViewSize;
- (void)switchOnlyAdminModTopic:(id)arg1;
- (void)OnSetChatRoomOnlyAdminModTopic:(id)arg1 on:(BOOL)arg2 ErrorInfo:(id)arg3 Success:(BOOL)arg4;
- (void)showDismissChatRoomView;
- (void)dismissChatRoom;
- (void)OnDismissChatRoom:(id)arg1 Success:(BOOL)arg2 ErrorMsg:(id)arg3 Ret:(long long)arg4;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showChangeOwnerView;
- (void)showChangeManagerView;
- (void)onChangeOwnerLogicStop:(BOOL)arg1;
- (void)OnReturn;
- (void)didReceiveMemoryWarning;
- (id)getViewController;
- (void)checkAdmin;
- (void)showChatroomInvitationList;
- (void)onModifyContact:(id)arg1;
- (void)OnChangeGroupAdmin:(id)arg1;
- (void)OnSetChatRoomAccessType:(id)arg1 Type:(unsigned int)arg2 ErrorInfo:(id)arg3 Success:(BOOL)arg4;
- (void)onTipsShowInfoChangeWithPathKey:(id)arg1;
- (void)reportDismissChatroomWithAction:(unsigned long long)arg1;
- (void)reportDismissChatroomWithAction:(unsigned long long)arg1 errCode:(long long)arg2;
- (id)m_chatRoomContact;
- (void)setM_chatRoomContact:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (BOOL)waitingDismissGroupResp;
- (void)setWaitingDismissGroupResp:(BOOL)arg1;
- (void).cxx_destruct;
@end

