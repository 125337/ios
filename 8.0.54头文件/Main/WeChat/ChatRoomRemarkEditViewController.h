@interface ChatRoomRemarkEditViewController : MMUIViewController <MMTableViewInfoDelegate, MMUITextFieldDelegate, ILinkEventExt, IOplogExt>
{
    MMTableViewInfo * m_tableViewInfo; // +0x68
    UIButton * m_acceptBtn; // +0x70
    double m_fKeyboardHeight; // +0x78
    RichTextView * m_operateRichTextView; // +0x80
    MMUILabel * m_nickNameLabel; // +0x88
    MMHeadImageView * m_headImageView; // +0x90
    MMUITextField * m_tfRemark; // +0x98
    CContact * _chatRoomContact; // +0xa0
}
- (void)dealloc;
- (void)viewDidLoad;
- (void)resetRightBarButton;
- (void)viewDidLayoutSubviews;
- (void)initTableView;
- (void)initNotificationObservers;
- (void)removeNotificationObservers;
- (void)reloadTableViewInfo;
- (id)getChatRoomInfoHeadView;
- (void)makeRemarkEdit:(id)arg1;
- (void)initRemarkEdit;
- (void)initHeadImageView;
- (void)onRemarkShowKeyBoard;
- (void)onRemarkHideKeyBoard;
- (void)initAcceptBtn;
- (void)initFooterView;
- (double)getkeyboardHideAcceptBtnBottom;
- (double)getkeyboardShowAcceptBtnBottom;
- (void)checkAcceptBtnBottomLocal;
- (BOOL)checkEdit;
- (void)didAccept;
- (void)executeOpLog;
- (void)mmTextFieldDidChange:(id)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned int)arg3 cgiWrap:(id)arg4;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)restAcceptBtnWithKeyboardWillShow:(BOOL)arg1;
- (void)onTextClicked:(id)arg1 withRect:(CGRect)arg2 withView:(id)arg3;
- (id)navigationBarBackgroundColor;
- (id)m_tfRemark;
- (void)setM_tfRemark:(id)arg1;
- (id)chatRoomContact;
- (void)setChatRoomContact:(id)arg1;
- (void).cxx_destruct;
@end

