@interface CreateChatLogic : MMObject <MMTipsViewControllerDelegate, SelectContactsViewControllerDelegate, SelectContactFromChatRoomViewControllerDelegate, ContactsCreateChatRoomLogicDelegate, MultiSelectContactsViewControllerDelegate>
{
    id <CreateChatLogicDelegate> m_delegate; // +0x8
    ContactsCreateChatRoomLogic * m_createLogic; // +0x10
    MultiSelectContactsViewController * m_MultiSelectController; // +0x18
    SelectContactFromChatRoomViewController * m_SelectContactFromChatRoomViewController; // +0x20
    BOOL m_isCreateWXTalk; // +0x28
    unsigned long long m_commonSearchScene; // +0x30
    NSMutableDictionary * m_chatRoonMemberDic; // +0x38
    MMTipsViewController * m_errorView; // +0x40
    UIView * m_createChatSectionHeadView; // +0x48
    double m_createChatSectionHeadLayoutWidth; // +0x50
    SelectContactsViewController * m_SelectContactsViewController; // +0x58
    CContact * _contact; // +0x60
    NSMutableArray * _selectedMsgList; // +0x68
    UIView * _createChatSectionHeadLineView; // +0x70
}
- (id)init;
- (void)initMultiSelectController;
- (void)initSelectContactsViewController;
- (void)setKeepCurViewAfterSelect:(BOOL)arg1;
- (void)setShowRadarCreateRoom;
- (void)setM_commonSearchScene:(unsigned long long)arg1;
- (id)getCreateChatSectionHeadViewWithWidth:(double)arg1;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (id)contactForContext;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)createChatRoonWithMemberDic:(id)arg1;
- (void)onMultiSelectWithMsgHistory:(id)arg1 uploadTaskId:(id)arg2;
- (void)dealloc;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (BOOL)onSelectRecommendGroupContact:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 sesseionType:(unsigned int)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 sesseionType:(unsigned int)arg3;
- (BOOL)isShowPageSheetForSesseionType:(unsigned int)arg1;
- (void)onClickSelectContactFromGroup;
- (void)onDidSelectNormalContact:(id)arg1;
- (void)OnCreateRoom:(id)arg1;
- (void)onSelectedContactResult:(id)arg1;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)m_MultiSelectController;
- (BOOL)m_isCreateWXTalk;
- (void)setM_isCreateWXTalk:(BOOL)arg1;
- (unsigned long long)m_commonSearchScene;
- (id)m_SelectContactsViewController;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)selectedMsgList;
- (void)setSelectedMsgList:(id)arg1;
- (id)createChatSectionHeadLineView;
- (void)setCreateChatSectionHeadLineView:(id)arg1;
- (void).cxx_destruct;
@end
