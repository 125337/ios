@interface ChatRoomSpecialAttentionMemberViewController : ChatRoomBaseMemberFunctionViewController <ChatRoomSpecialAttentionMemberPageLogicDelegate>
{
    NSMutableArray * m_attentionMemberContactList; // +0x68
    NSMutableArray * m_chatRoomMemContactList; // +0x70
    ChatRoomSpecialAttentionAddMemberLogic * m_addMemberSelectContactLogic; // +0x78
    ChatRoomSpecialAttentionDeleteMemberLogic * m_deleteMemberSelectContactLogic; // +0x80
    MMTableView * m_tableView; // +0x88
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0x90
    NSMutableArray * m_initialAttentionMemberUserNameList; // +0x98
    NSMutableArray * m_chatRoomMemContactUserNameList; // +0xa0
    MMTableViewInfo * m_tableViewInfo; // +0xa8
    CContact * _chatRoomContact; // +0xb0
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)initData;
- (id)getAddMemberSelectContactLogic;
- (id)getDeleteMemberSelectContactLogic;
- (void)reloadData;
- (id)getChatRoomContact;
- (void)reloadTableData;
- (void)didFunctionAddMember;
- (void)modifySpecialAttentionMember;
- (void)didRemoveOperateButton:(id)arg1;
- (void)reportChatRoomSpecialAttentionMemberLog;
- (void)OnModifyChatRoomSpecialAttentionMember:(id)arg1 withResult:(unsigned int)arg2 isAddMember:(BOOL)arg3;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)chatRoomContact;
- (void)setChatRoomContact:(id)arg1;
- (void).cxx_destruct;
@end

