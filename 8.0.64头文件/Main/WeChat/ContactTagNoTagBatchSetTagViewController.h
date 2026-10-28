@interface ContactTagNoTagBatchSetTagViewController : TagViewController <IContactLabelMgrExt, NewContactTagTableViewDelegate, ContactTagNoTagBatchSetEditLogicDelegate>
{
    BOOL _bIsNeedReloadView; // +0xc0
    BOOL isAlreadyDisMissSelf; // +0xc1
    ContactTagNoTagBatchSetEditLogic * m_editLogic; // +0xc8
    UIButton * m_oMakeSureButton; // +0xd0
    BOOL _needReloadWhenAppear; // +0xd8
    unsigned int _m_uiFromScene; // +0xdc
    NSArray * m_arrContactUserName; // +0xe0
    ContactTagNoTagBatchMaskBottomView * m_bottomView; // +0xe8
    id <ContactTagNoTagBatchSetTagViewControllerDelegate> _m_delegate; // +0xf0
}
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initData;
- (void)initRegister;
- (void)initView;
- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (void)initMakeSureButton;
- (void)changeDisplayView:(BOOL)arg1;
- (id)genFavTagEditView;
- (id)genFavTagTableView;
- (void)onTextFieldMoved:(id)arg1;
- (void)resetTagEditViewAndTableView;
- (id)getArrSelectTagNameList;
- (void)resetMakeSureButtonenabled;
- (void)OnMyCancel;
- (void)didClickMakeSureButton;
- (void)onCreateNewTagToTagTableView:(id)arg1;
- (void)onEditTags;
- (void)onAddButtonFromTagTableView:(id)arg1;
- (void)onDeleteButtonFromTagTableView:(id)arg1;
- (void)onAddButtonFromTagEditView:(id)arg1;
- (void)onDeleteButtonFromTagEditView:(id)arg1;
- (id)getAllTagNameList;
- (void)buildAllTagsData:(id)arg1;
- (void)reloadAllTags;
- (void)onAllContactLabelUpdated:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned int)arg3;
- (void)onJobForTagEditRet:(int)arg1;
- (void)didPopViewController;
- (void)keyboardWillShow:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)onKeyboardNotificationWithoutAnimation:(id)arg1 isShowKeyboard:(BOOL)arg2;
- (void)onKeyboardNotification:(id)arg1 isShowKeyboard:(BOOL)arg2;
- (id)m_arrContactUserName;
- (void)setM_arrContactUserName:(id)arg1;
- (id)m_bottomView;
- (void)setM_bottomView:(id)arg1;
- (unsigned int)m_uiFromScene;
- (void)setM_uiFromScene:(unsigned int)arg1;
- (BOOL)needReloadWhenAppear;
- (void)setNeedReloadWhenAppear:(BOOL)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (void).cxx_destruct;
@end
