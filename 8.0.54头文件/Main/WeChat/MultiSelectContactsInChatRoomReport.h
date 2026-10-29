@interface MultiSelectContactsInChatRoomReport : NSObject
{
    long long m_clkEnterMutiUserModeInSearchCnt; // +0x8
    long long m_clkExitMutiUserModeInSearchCnt; // +0x10
    long long m_deleteBackWordsInSearchCnt; // +0x18
    long long m_expandSelectedUsersInSearchCnt; // +0x20
    long long m_deleteUserInSelectedUsersInSearchCnt; // +0x28
    long long m_clkClearAllButtonCnt; // +0x30
    NSMutableDictionary * _dicSelectionOperation; // +0x38
}
- (id)init;
- (void)initData;
- (void)resetDicSelectionOperation;
- (void)recordContactSelectionWithType:(unsigned int)arg1 arrSelectionContact:(id)arg2;
- (void)clearSelectionOperationNoInFinalSelected:(id)arg1;
- (void)recordClkEnterMutiUserModeInSearchCnt;
- (void)recordClkExitMutiUserModeInSearchCnt;
- (void)recordDeleteBackWordsInSearchCnt;
- (void)recordExpandSelectedUsersInSearchCnt;
- (void)recordDeleteUserInSelectedUsersInSearchCnt;
- (void)recordClkClearAllButtonCnt;
- (void)reportDataWithEnterScene:(unsigned int)arg1 andExitScene:(unsigned int)arg2;
- (id)dicSelectionOperation;
- (void)setDicSelectionOperation:(id)arg1;
- (void).cxx_destruct;
@end

