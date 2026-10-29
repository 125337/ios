@interface ContactsAuthorityManageModifyContactLogic : MMObject <ContactBatchModifyLogicDelegate, WCFinderBatchModContactTypeTaskDelegate, ITopStoryColikeExt>
{
    ContactBatchModifyLogic * m_contactBatchModifyLogic; // +0x8
    WCFinderBatchModContactTypeTask * m_finderBatchContactTask; // +0x10
    NSMutableDictionary * m_dicMultiSelect; // +0x18
    NSMutableDictionary * m_dicExistContact; // +0x20
    NSMutableDictionary * m_dicHandleMultiSelect; // +0x28
    MMUIViewController * m_currentViewController; // +0x30
    long long m_contactsAuthorityManageModifyAction; // +0x38
    id <ContactsAuthorityManageModifyContactLogicDelegate> _delegate; // +0x40
    ContactTagData * _m_contactTagData; // +0x48
}
- (id)init;
- (void)initData;
- (void)modifyAuthorityDetailAddContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2;
- (void)modifyAuthorityDetailAddContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2 currentViewController:(id)arg3;
- (void)modifyAuthorityDetailDeleteContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2;
- (void)modifyAuthorityDetailDeleteContactWithDicMultiSelect:(id)arg1 andDicExistContact:(id)arg2 currentViewController:(id)arg3;
- (id)getContactBatchModifyLogic;
- (id)getCurrentViewController;
- (void)reCallModify;
- (id)getTipSuccessTitle;
- (void)batchAddSocialBlackContactType;
- (void)batchRemoveSocialBlackContactType;
- (void)batchAddSnsBlackContactType;
- (void)batchRemoveSnsBlackContactType;
- (void)batchAddSnsNointerestingContactType;
- (void)batchRemoveSnsNointerestingContactType;
- (void)batchAddFinderBlackContactType;
- (void)batchRemoveFinderBlackContactType;
- (void)batchAddFinderOutsideContactType;
- (void)batchRemoveFinderOutsideContactType;
- (void)batchAddWowHideContactType;
- (void)batchRemoveWowHideContactType;
- (void)batchAddWowBlockContactType;
- (void)batchRemoveWowBlockContactType;
- (void)batchAddWeRunBlackContactType;
- (void)batchRemoveWeRunBlackContactType;
- (void)reloadAuthorityDetailModifyFailContact:(id)arg1;
- (void)OnContactBatchModify:(id)arg1 withRet:(unsigned int)arg2 errorMsg:(id)arg3 isNetWorkError:(BOOL)arg4;
- (void)handelSocialBlackContactBatchModify:(id)arg1 withRet:(unsigned int)arg2 errorMsg:(id)arg3 isNetWorkError:(BOOL)arg4;
- (void)handelSnsBlackContactBatchModify:(id)arg1 withRet:(unsigned int)arg2 errorMsg:(id)arg3 isNetWorkError:(BOOL)arg4;
- (void)handelWeRunBlackContactBatchModify:(id)arg1 withRet:(unsigned int)arg2 errorMsg:(id)arg3 isNetWorkError:(BOOL)arg4;
- (void)OnContactBatchModifySnsNointeresting:(id)arg1 resultFlag:(BOOL)arg2;
- (void)finderBatchModContactTypeTask:(id)arg1 finishWithSuccessNames:(id)arg2 failedNames:(id)arg3 allSuccess:(BOOL)arg4;
- (void)onAllRequestColikeBlockEnd:(long long)arg1 sucCount:(long long)arg2 failCount:(long long)arg3 failInfo:(id)arg4;
- (void)modLocalWowData;
- (id)m_dicMultiSelect;
- (void)setM_dicMultiSelect:(id)arg1;
- (id)m_dicExistContact;
- (void)setM_dicExistContact:(id)arg1;
- (id)m_dicHandleMultiSelect;
- (void)setM_dicHandleMultiSelect:(id)arg1;
- (id)m_currentViewController;
- (void)setM_currentViewController:(id)arg1;
- (long long)m_contactsAuthorityManageModifyAction;
- (void)setM_contactsAuthorityManageModifyAction:(long long)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)m_contactTagData;
- (void)setM_contactTagData:(id)arg1;
- (void).cxx_destruct;
@end

