@interface ChatRoomInvitationDetailViewController : MMUIViewController <ILinkEventExt, MMTableViewInfoDelegate, ChatRoomMemberGridViewDelegate, IContactMgrExt, IGroupMgrExt>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    MMTableView * m_tableView; // +0x70
    unsigned long long m_nCellCnt; // +0x78
    unsigned long long m_nCellCol; // +0x80
    MMHeadImageView * m_headImageView; // +0x88
    UILabel * m_nickNameView; // +0x90
    MMUILabel * m_labelSubDesc; // +0x98
    UILabel * m_inviteNumberView; // +0xa0
    UILabel * m_inviteReasonView; // +0xa8
    UIView * m_seperateLineView; // +0xb0
    CContact * m_inviterContact; // +0xb8
    double _lastScreenWidth; // +0xc0
    CContact * m_chatRoomContact; // +0xc8
    CMessageWrap * m_messageWrap; // +0xd0
    id <ChatRoomInvitationDetailDelegate> m_delegate; // +0xd8
    ChatRoomInvitationContactProfileLogic * _contactProfileLogic; // +0xe0
}
- (id)init;
- (void)viewDidLoad;
- (void)initData;
- (void)reloadData;
- (void)initView;
- (void)initTableView;
- (void)viewDidLayoutSubviews;
- (void)reloadTableData;
- (id)genHeaderView;
- (id)genFooterView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)makeMemListSection:(id)arg1;
- (double)getMemListCellHeight;
- (void)makeMemListCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeWhiteCell:(id)arg1 CellInfo:(id)arg2;
- (void)openContactInfo:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)OnClickHeadImage;
- (void)approveMemberFromOwner;
- (void)OnApproveChatRoomInvitation:(id)arg1 ErrorInfo:(id)arg2 Success:(BOOL)arg3 withUserData:(id)arg4;
- (void)approveInvitation;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (void)reportApproveChatRoomInvitationWithActionType:(long long)arg1;
- (id)m_chatRoomContact;
- (void)setM_chatRoomContact:(id)arg1;
- (id)m_messageWrap;
- (void)setM_messageWrap:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)contactProfileLogic;
- (void)setContactProfileLogic:(id)arg1;
- (void).cxx_destruct;
@end

