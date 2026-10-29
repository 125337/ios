@interface ChatRoomBaseMemberFunctionViewController : MMAcceptAgreementBaseViewController <contactInfoDelegate>
- (void)viewDidLoad;
- (BOOL)isShowDeleteButton;
- (id)getChatRoomContact;
- (void)reloadTableDataWithArrMemberConatct:(id)arg1 isShowAddCell:(BOOL)arg2 andTitle:(id)arg3 andContent:(id)arg4;
- (void)makeChatRoomMemberFunctionCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeChatRoomMemberFunctionAddCell:(id)arg1 CellInfo:(id)arg2;
- (id)genHeaderViewWithTitle:(id)arg1 andContent:(id)arg2;
- (void)openContactInfo:(id)arg1;
- (void)didFunctionAddMember;
- (void)didRemoveOperateButton:(id)arg1;
- (void)didClickLeftCloseBarButton;
- (id)navigationBarBackgroundColor;
@end

