@interface ChatRoomMemberDisplayNameViewController : MMUIViewController <MMTableViewInfoDelegate, MMUITextFieldDelegate, IOpenImOplogExt, IOplogExt>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    MMUITextField * m_tfMemberDisplayName; // +0x70
    NSString * m_placeholder; // +0x78
    UIButton * m_acceptBtn; // +0x80
    double m_fKeyboardHeight; // +0x88
    MMHeadImageView * m_headImageView; // +0x90
    NSString * m_initialMemberDisplay; // +0x98
    CContact * _chatRoomContact; // +0xa0
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)resetRightBarButton;
- (void)initTableView;
- (void)initNotificationObservers;
- (void)removeNotificationObservers;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)reloadTableViewInfo;
- (id)getChatRoomInfoHeadView;
- (void)makeMemberDisplayNameEdit:(id)arg1;
- (void)initMemberDisplayNameEdit;
- (void)initHeadImageView;
- (void)onMemberDisplayNameShowKeyBoard;
- (void)onMemberDisplayNameHideKeyBoard;
- (void)initAcceptBtn;
- (double)getkeyboardHideAcceptBtnBottom;
- (double)getkeyboardShowAcceptBtnBottom;
- (BOOL)checkEdit;
- (void)didAccept;
- (void)OnReturn;
- (void)checkAcceptBtnBottomLocal;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)arg1;
- (void)mmTextFieldDidChange:(id)arg1;
- (void)executeOplogChatRoomDisplayName:(id)arg1;
- (void)onOpenImOplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)handleOplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (id)navigationBarBackgroundColor;
- (id)chatRoomContact;
- (void)setChatRoomContact:(id)arg1;
- (void).cxx_destruct;
@end

