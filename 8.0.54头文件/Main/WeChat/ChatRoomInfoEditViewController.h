@interface ChatRoomInfoEditViewController : MMUIViewController <IGroupMgrExt, UITextFieldDelegate, MMTableViewInfoDelegate>
{
    CContact * m_chatRoomContact; // +0x68
    MMTableViewInfo * m_tableViewInfo; // +0x70
    NSString * m_nsOriginChatRoomTopic; // +0x78
    NSMutableDictionary * m_dicParam; // +0x80
    BOOL m_becomeFirstResponder; // +0x88
    UIButton * m_acceptBtn; // +0x90
    double m_fKeyboardHeight; // +0x98
    MMHeadImageView * m_headImageView; // +0xa0
    MMUITextField * m_topicTextField; // +0xa8
    double m_tableContentHeight; // +0xb0
}
- (id)init;
- (void)dealloc;
- (void)viewDidLoad;
- (void)createRightBarButton;
- (void)initTableView;
- (void)initNotificationObservers;
- (void)resetData;
- (void)viewDidLayoutSubviews;
- (void)initAcceptBtn;
- (void)initTopicEditView;
- (void)initHeadImageView;
- (void)onTopicShowKeyBoard;
- (void)onTopicHideKeyBoard;
- (void)reloadTableData;
- (void)makeEditCell:(id)arg1 CellInfo:(id)arg2;
- (id)getChatRoomInfoHeadView;
- (BOOL)isChanged;
- (void)doDismissView;
- (void)OnReturn;
- (void)OnDone;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)arg1;
- (void)checkNeedReload:(id)arg1;
- (void)OnSetChatRoomTopic:(id)arg1 ErrorInfo:(id)arg2 Success:(BOOL)arg3;
- (void)updateChatRoomTopicCount:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (id)navigationBarBackgroundColor;
- (id)m_chatRoomContact;
- (void)setM_chatRoomContact:(id)arg1;
- (void).cxx_destruct;
@end

