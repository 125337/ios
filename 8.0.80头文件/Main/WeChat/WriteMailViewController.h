@interface WriteMailViewController : MMUIViewController <MailRTEToolViewDelegate, MailRTEImageAttachmentViewDelegate, RTEAttachmentViewProviderDelegate, UITableViewDelegate, UITableViewDataSource, UITextViewDelegate, WCActionSheetDelegate, UINavigationControllerDelegate, MailContactFilterViewDelegate, MailContentViewDelegate, IQQMailExt, MMMailContactSelectViewDelegate, MailReceiverEditViewDelegate, MailAttachmentControlViewDelegate, VerifyQQPwdMgrExt>
{
    MMTableView * m_tableView; // +0x70
    MailContactFilterView * m_filterView; // +0x78
    MailContentView * m_contentView; // +0x80
    MailRTEToolView * m_toolView; // +0x88
    MailReceiverEditView * m_receiverView; // +0x90
    MailReceiverEditView * m_ccView; // +0x98
    MailReceiverEditView * m_bccView; // +0xa0
    MailSubjectEditView * m_topicView; // +0xa8
    UIView * m_ccBccView; // +0xb0
    NSMutableArray * m_arrShowViews; // +0xb8
    MailAttachmentControlView * m_attachmentControlView; // +0xc0
    int m_firstResponderStatus; // +0xc8
    int m_ccBccFlodStatus; // +0xcc
    CMail * m_mail; // +0xd0
    NSMutableArray * m_arrReceiver; // +0xd8
    NSMutableArray * m_arrCc; // +0xe0
    NSMutableArray * m_arrBcc; // +0xe8
    unsigned int m_uiMailType; // +0xf0
    double m_fKeyboardHeight; // +0xf8
    MMTimer * m_autoSaveTimer; // +0x100
    unsigned int m_firstResponderTag; // +0x108
    NSMutableArray * m_arrAllMailContacts; // +0x110
    NSString * m_nsMailID; // +0x118
    NSTextStorage * textStorage; // +0x120
    CMail * m_oldMail; // +0x128
    NSString * m_oldMailID; // +0x130
    BOOL m_firstInit; // +0x138
    BOOL m_disableDraft; // +0x139
    RTEAttachmentViewProvider * m_attachmentViewProvider; // +0x140
    BOOL _isPromptingAlert; // +0x148
    double _keyboardHeight; // +0x150
    NSString * _sendingMailEventId; // +0x158
    XMailBindMailControlLogic * _bindMailControlLogic; // +0x160
}
- (void)initToolView;
- (void)makeTextViewFirstResponder;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)tryShowToolView;
- (void)tryHideToolView;
- (void)onTopBarFrameChanged;
- (void)updateToolBarHeightWithKeyboardHeight:(double)arg1;
- (void)makeKeyboardInvisible;
- (void)makeKeyboardShow;
- (unsigned int)objectCount;
- (void)insertRTEAttachments:(id)arg1;
- (void)onShowBasicToolView;
- (void)onShowFullToolView;
- (BOOL)onShowExceedMaxObjectCountAlert;
- (void)initMailContentView;
- (id)getAttachmentViewProvider;
- (void)onCreatAttachmentView:(id)arg1;
- (void)onAttachmentNeedReload:(id)arg1;
- (id)getAllAttachments;
- (BOOL)isAllAttachmentUploadSuccess;
- (BOOL)containsAttachmentWithFilename:(id)arg1;
- (id)getStoredAttachments;
- (id)constructRTEContent;
- (BOOL)canEditNote;
- (void)onLongPressSelectAttachmentView:(id)arg1;
- (id)getSelfMailContact;
- (void)staticReloadTableView;
- (id)getViewForFirstResponderStatus:(int)arg1;
- (int)getNextResponderStautsForFirstResponderStatus:(int)arg1;
- (int)getFirstResponderStatusForRow:(long long)arg1;
- (void)setFirstRespondStatus:(int)arg1;
- (void)setNewFirstResponse;
- (void)setNextFirstRespondStatus:(int)arg1;
- (void)setccBccFlodStatus:(int)arg1;
- (void)saveDraft;
- (void)loadDraft;
- (void)deleteDraft;
- (void)onAutoSaveTimer;
- (void)fixFilterView;
- (void)doSearch:(id)arg1;
- (void)updateFilterViewWithContacts:(id)arg1;
- (void)showErrorAlertWithErrorCode:(int)arg1 errorMsg:(id)arg2;
- (void)startBind;
- (void)OnGetSearchResultForInput:(id)arg1 contacts:(id)arg2;
- (void)OnComposeSendWithEventId:(id)arg1 errorCode:(int)arg2 errMsg:(id)arg3;
- (void)OnUploadData:(id)arg1 filename:(id)arg2 errorCode:(int)arg3 errMsg:(id)arg4;
- (void)onSend;
- (void)RealSend;
- (BOOL)SendBtnEnable;
- (void)initData;
- (void)CheckCancel:(id)arg1;
- (void)OnReturn;
- (void)updateRightBarButton;
- (void)initTableItemViews;
- (void)initView;
- (float)calculateTableViewHeight;
- (void)setContentResponderStatus;
- (void)reloadTableView;
- (id)getFilterName:(id)arg1;
- (void)contentViewNeedSetContentOffset;
- (void)contentLengthChanged:(id)arg1;
- (void)didStartWriteMailContent;
- (void)contactReturn:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)filterViewBeginDragging;
- (void)contentViewDidFinishEdit;
- (void)OnUploadSuccess;
- (void)OnGetAllMailContact:(id)arg1 ErrNo:(int)arg2;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)ReleaseTextField;
- (void)initNotificationObservers;
- (void)removeNotificationObservers;
- (void)initAutoSaveTimer;
- (void)releaseAutoSaveTimer;
- (void)dealloc;
- (id)init;
- (id)initWithNewEmptyMail:(id)arg1;
- (id)initWithMail:(id)arg1 mailType:(unsigned int)arg2;
- (void)uploadAttachment:(id)arg1 name:(id)arg2;
- (id)initWithMail:(id)arg1 mailID:(id)arg2 mailType:(unsigned int)arg3;
- (id)initWithMailHeader:(id)arg1 subject:(id)arg2 andMailNodeList:(id)arg3;
- (id)getViewController;
- (void)onFirstResponderResigned;
- (long long)indexForView:(id)arg1;
- (void)onAddMailContact:(id)arg1;
- (void)onMailContactDoubleClicked:(id)arg1;
- (void)onMailReceiverEditViewHeightChanged:(id)arg1;
- (void)onTextFieldChanged:(id)arg1;
- (void)onTextFieldFinishEdit:(id)arg1;
- (void)onTextFieldNextItem:(id)arg1;
- (void)onMailContactChanged:(id)arg1;
- (void)onVerifyQQPwdCancel;
- (void)onMailContactSelectDone:(id)arg1 userInfo:(id)arg2;
- (id)getCurrentViewController;
- (id)m_arrAllMailContacts;
- (void)setM_arrAllMailContacts:(id)arg1;
- (double)keyboardHeight;
- (void)setKeyboardHeight:(double)arg1;
- (BOOL)isPromptingAlert;
- (void)setIsPromptingAlert:(BOOL)arg1;
- (id)sendingMailEventId;
- (void)setSendingMailEventId:(id)arg1;
- (id)bindMailControlLogic;
- (void)setBindMailControlLogic:(id)arg1;
- (void).cxx_destruct;
@end
