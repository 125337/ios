@interface ContactsAuthorityManageViewMgr : MMUserService <IContactMgrExt, ContactsDataLogicDelegate, MMServiceProtocol>
{
    NSMutableArray * m_arSocialBlackFunctionTagContact; // +0x8
    NSMutableArray * m_arSnsBlackFunctionTagContact; // +0x10
    NSMutableArray * m_arSnsNointerestingFunctionTagContact; // +0x18
    NSMutableArray * m_arFinderBlackFunctionTagContact; // +0x20
    NSMutableArray * m_arFinderOutsideFunctionTagContact; // +0x28
    NSMutableArray * m_arWowHideFunctionTagContact; // +0x30
    NSMutableArray * m_arWowBlockFunctionTagContact; // +0x38
    NSMutableArray * m_arWeRunBlackFunctionTagContact; // +0x40
    ContactsDataLogic * m_contactsDataLogic; // +0x48
}
- (id)init;
- (id)getNewContactFunctionTagWithTagId:(unsigned int)arg1;
- (id)getSocialBlackFunctionTagContactList;
- (void)reloadSocialBlackFunctionTagContactList;
- (id)getSnsBlackFunctionTagContactList;
- (void)reloadSnsBlackFunctionTagContactList;
- (id)getSnsNointerestingFunctionTagContactList;
- (void)reloadSnsNointerestingFunctionTagContactList;
- (BOOL)checkSnsNointerestingWithContact:(id)arg1;
- (id)getFinderBlackFunctionTagContactList;
- (void)reloadFinderBlackFunctionTagContactList;
- (id)getFinderOutsideFunctionTagContactList;
- (void)reloadFinderOutsideFunctionTagContactList;
- (id)getWeRunBlackFunctionTagContactList;
- (void)reloadWeRunBlackFunctionTagContactList;
- (void)preloadWowData;
- (id)getWowHideFunctionTagContactList;
- (void)reloadWowHideFunctionTagContactList;
- (BOOL)checkWowHideWithContact:(id)arg1;
- (id)getWowBlockFunctionTagContactList;
- (void)reloadWowBlockFunctionTagContactList;
- (BOOL)checkWowBlockWithContact:(id)arg1;
- (void)reloadNewContactFunctionTagContactList:(unsigned int)arg1;
- (void)onServiceInit;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)reportContactsAuthorityManageOperateLogWithActionCode:(unsigned int)arg1 bizType:(unsigned int)arg2 authType:(unsigned int)arg3 selectionType:(unsigned int)arg4 selectionCount:(unsigned int)arg5 selectionFriCount:(unsigned int)arg6 originListFriCount:(unsigned int)arg7 submitFriCount:(unsigned int)arg8;
- (unsigned int)getContactsAuthorityManageBizTypeWithAuthorityID:(unsigned int)arg1;
- (unsigned int)getContactsAuthorityManageAuthTypeWithAuthorityID:(unsigned int)arg1;
- (BOOL)checkIsValidContact:(id)arg1;
- (id)m_contactsDataLogic;
- (void)setM_contactsDataLogic:(id)arg1;
- (void).cxx_destruct;
@end

