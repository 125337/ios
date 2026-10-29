@interface CreateChatLogic : MMObject <MMTipsViewControllerDelegate, SelectContactsViewControllerDelegate, ContactsCreateChatRoomLogicDelegate, MultiSelectContactsViewControllerDelegate>
{
    id <CreateChatLogicDelegate> m_delegate; // +0x8
    ContactsCreateChatRoomLogic * m_createLogic; // +0x10
    MultiSelectContactsViewController * m_MultiSelectController; // +0x18
    BOOL m_isCreateWXTalk; // +0x20
    unsigned long long m_commonSearchScene; // +0x28
    NSMutableDictionary * m_chatRoonMemberDic; // +0x30
    MMTipsViewController * m_errorView; // +0x38
    SelectContactsViewController * m_SelectContactsViewController; // +0x40
    CContact * _contact; // +0x48
    NSMutableArray * _selectedMsgList; // +0x50
}
- (id)init;
- (void)initMultiSelectController;
- (void)initSelectContactsViewController;
- (void)setKeepCurViewAfterSelect:(BOOL)arg1;
- (void)setShowRadarCreateRoom;
- (void)setM_commonSearchScene:(unsigned long long)arg1;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (id)contactForContext;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)createChatRoonWithMemberDic:(id)arg1;
- (void)onMultiSelectWithMsgHistory:(id)arg1 uploadTaskId:(id)arg2;
- (void)dealloc;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
- (BOOL)onSelectRecommendGroupContact:(id)arg1;
- (void)OnCreateRoom:(id)arg1;
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
- (void).cxx_destruct;
@end

