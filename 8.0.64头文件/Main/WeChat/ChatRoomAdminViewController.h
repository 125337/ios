@interface ChatRoomAdminViewController : ChatRoomBaseMemberFunctionViewController <DelAdminLogicDelegate, AddAdminLogicDelegate, ChatRoomAdminMgrLogicDelegate>
{
    BOOL m_needReload; // +0x70
    ChatRoomAdminMgrLogic * m_adminMgrLogic; // +0x78
    AddAdminLogic * m_addAdminLogic; // +0x80
    DelAdminLogic * m_delAdminLogic; // +0x88
    NSArray * m_arrAdminUserName; // +0x90
    MMAcceptAgreementCommonHeadView * m_commonHeadView; // +0x98
    MMTableViewInfo * m_tableViewInfo; // +0xa0
    MMTableView * m_tableView; // +0xa8
    CContact * _m_chatRoomContact; // +0xb0
}
- (void)viewDidLoad;
- (void)initData;
- (void)viewDidAppear:(BOOL)arg1;
- (id)getArrMemberList;
- (id)getChatRoomContact;
- (BOOL)isShowDeleteButton;
- (void)reloadTableData;
- (void)didFunctionAddMember;
- (void)didAddMember;
- (void)didRemoveOperateButton:(id)arg1;
- (void)didClickLeftCloseBarButton;
- (void)onAddAdminLogicStop:(BOOL)arg1;
- (id)getViewController;
- (void)onDelAdminLogicStop:(BOOL)arg1;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableView;
- (void)setM_tableView:(id)arg1;
- (id)m_chatRoomContact;
- (void)setM_chatRoomContact:(id)arg1;
- (void).cxx_destruct;
@end
