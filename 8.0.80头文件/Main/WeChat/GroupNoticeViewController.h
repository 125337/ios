@interface GroupNoticeViewController : WeNoteViewController <WNRTEToolViewDelegate, WNSelectionViewDelegate, IGroupMgrExt, WNTextViewOperationDelegate, IMsgRevokeExt>
{
    BOOL m_bTextDidChange; // +0x150
    double m_defaultFooterHeight; // +0x158
    UIBarButtonItem * m_undoBarItem; // +0x160
    UIBarButtonItem * m_redoBarItem; // +0x168
    UIBarButtonItem * m_doneBarItem; // +0x170
    BOOL _isHistory; // +0x178
    unsigned int _editTime; // +0x17c
    int _enterScene; // +0x180
    CContact * _chatRoomContact; // +0x188
    CContact * _editorContact; // +0x190
}
+ (BOOL)isDisplay;
- (void)initToolView;
- (id)makeHeader;
- (id)makeFooter;
- (void)onClickChoosePhoto;
- (void)onClickFile;
- (void)onClickLocation;
- (void)onClickTextMore;
- (void)onClickUndo;
- (void)onClickRedo;
- (void)onUndo;
- (void)onRedo;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)dealloc;
- (void)configNavbar;
- (void)initTableView;
- (void)initHeaderAndFooterView;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (void)installMinimizationTransitionController;
- (void)updateRightBarBtnStatus;
- (void)saveNote;
- (id)getAlertTitleForType:(unsigned long long)arg1;
- (void)checkFooterView;
- (unsigned long long)supportedInterfaceOrientations;
- (void)checkCanTranslateContent;
- (void)setTextViewEditable:(BOOL)arg1;
- (void)onCancel;
- (void)onEdit;
- (void)onDone;
- (void)setGroupNotice:(id)arg1;
- (void)reportEnterScene;
- (void)checkNeedReload:(id)arg1;
- (void)OnReturnToChat;
- (void)OnSetChatRoomDesc:(id)arg1 Desc:(id)arg2 Error:(id)arg3;
- (void)OnGroupNoticeMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 item:(id)arg3;
- (id)chatRoomContact;
- (void)setChatRoomContact:(id)arg1;
- (id)editorContact;
- (void)setEditorContact:(id)arg1;
- (unsigned int)editTime;
- (void)setEditTime:(unsigned int)arg1;
- (int)enterScene;
- (void)setEnterScene:(int)arg1;
- (BOOL)isHistory;
- (void)setIsHistory:(BOOL)arg1;
- (void).cxx_destruct;
@end
