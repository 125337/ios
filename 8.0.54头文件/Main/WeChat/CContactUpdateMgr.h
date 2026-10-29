@interface CContactUpdateMgr : NSObject <IContactMgrExt, ContactsDataLogicDelegate, MMKernelExt, IMMNewSessionMgrExt>
{
    BOOL m_isChatRoomMemberNoNickGetContactSwitch; // +0x8
    NSRecursiveLock * m_reporChatRoomMemberNoNickLock; // +0x10
    NSMutableSet * m_setHadReporChatRoomMemberNoNick; // +0x18
    ContactsDataLogic * m_contactsViewDataLogic; // +0x20
    NSNumber * m_bIsOpenMultiSelectContactsStyleSwitch; // +0x28
    ContactsDataLogic * _m_contactsDataLogic; // +0x30
    NSMutableSet * _m_updateEncryptSecretInfoSet; // +0x38
    WCChatRoomMemberNoNickDataInfo * _chatRoomMemberNoNickDataInfo; // +0x40
    ContactProfileRecommendLogic * _contactProfileRecommendLogic; // +0x48
}
- (void)modifyTxNewsMuteTurnOn:(BOOL)arg1;
- (void)asynModifyTxNewsMuteTurnOn:(BOOL)arg1;
- (void)modifyTxNewsSessionTopTurnOn:(BOOL)arg1;
- (void)asynModifyTxNewsSessionTopTurnOn:(BOOL)arg1;
- (void)synchronizeTxNewsMuteAndSessionTop;
- (void)synchronizeTxNewsMute:(BOOL)arg1 txNewsContact:(id)arg2;
- (void)synchronizeTxNewsSessionTop:(BOOL)arg1 txNewsContact:(id)arg2;
- (void)modifyQQMailMuteTurnOn:(BOOL)arg1;
- (void)asynQQMailModifyMuteTurnOn:(BOOL)arg1;
- (void)modifyQQMailSessionTopTurnOn:(BOOL)arg1;
- (void)asynModifyQQMailSessionTopTurnOn:(BOOL)arg1;
- (void)synchronizeQQMailMuteAndSessionTop;
- (void)synchronizeQQMailMute:(BOOL)arg1 qqMailContact:(id)arg2;
- (void)synchronizeQQMailSessionTop:(BOOL)arg1 qqMailContact:(id)arg2;
- (void)initDataExtension;
- (void)handleChatRoomMemberNoNickWithUserName:(id)arg1 groupUserName:(id)arg2;
- (void)reportReporChatRoomMemberNoNickWithUserName:(id)arg1;
- (void)asyncReportChatRoomMemberNoNickUserName:(id)arg1;
- (void)handleServiceEnterBackgroundExtension;
- (void)asyncDeleteExpiredSessionForwardRecord;
- (void)handleDeleteExpiredSessionForwardRecord;
- (id)p_getChatRoomMemberNoNickDataFilePath;
- (void)p_saveChatRoomMemberNoNickDataFileInternal;
- (void)p_loadChatRoomMemberNoNickDataInternal;
- (void)showRecycleLogoutSendMessageTipInNavigation:(id)arg1;
- (void)handleShowAccountDeleteTipOfUser:(id)arg1;
- (void)handleAccountDeleteOnDeleteSessionOfUser:(id)arg1;
- (id)getContactProfileRecommendLogic;
- (id)getContactProfileRecommendInfo:(id)arg1 isVerify:(BOOL)arg2;
- (BOOL)checkProfileRecommendInfoEffectiveTime:(id)arg1;
- (BOOL)checkCanGetProfileRecommendInfo:(id)arg1;
- (void)initContactUpdateMgrEncryptSecretMethod;
- (id)getContactsDataLogic;
- (BOOL)checkEncryptSecretInfoHadFilled:(id)arg1;
- (id)getUserNameWithStrangerEncryptContactUserName:(id)arg1 encryptSecretType:(unsigned int)arg2;
- (id)getUserNameDicWithStrangerEncryptContactUserNames:(id)arg1 encryptSecretType:(unsigned int)arg2;
- (BOOL)checkEncryptSecretTypeIsEqual:(unsigned int)arg1 targetEncryptSecretType:(int)arg2;
- (id)checkStrangerContactListIsFriend:(id)arg1;
- (void)fillContactEncryptSecretInfo:(id)arg1;
- (void)addUpdateEncryptSecretUserName:(id)arg1;
- (void)fillAllContactEncryptSecretInit;
- (void)asynFillAllContactEncryptSecret;
- (void)fillAllContactEncryptSecret;
- (id)hashEncryptSecretUserName:(id)arg1 encryptSecretType:(int)arg2;
- (id)HmacSha256:(id)arg1 salt:(const char *)arg2 data:(id)arg3;
- (void)updateHadfillContactEncryptSecretLastTime;
- (BOOL)bIsNeedFillContactEncryptSecret;
- (id)init;
- (void)initData;
- (void)dealloc;
- (void)initListen;
- (void)removeListen;
- (void)clearAllResource;
- (void)handleServiceEnterBackground;
- (id)getContactsViewDataLogic;
- (BOOL)checkIsShowClicfgSetDefaultChatonlyTwo;
- (BOOL)checkIsMoreThenClicfgSetDefaultChatonlyThreshold;
- (BOOL)checkIsOpenDefaultChatonlyAndMoreThenClicfgSetDefaultChatonlyThreshold;
- (unsigned int)getClicfgSetDefaultChatonlyThreshold;
- (unsigned short)getClicfgSetDefaultChatonlyType;
- (BOOL)getClicfgSetDefaultChatonly;
- (unsigned int)getContactNumber;
- (BOOL)isOpenMultiSelectContactsStyleSwitch;
- (void)setBIsHadLimitContact:(BOOL)arg1;
- (BOOL)bIsHadLimitContact;
- (void)onContactsDataChange;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onAuthOK;
- (void)onDeleteSessionOfUser:(id)arg1;
- (id)m_contactsDataLogic;
- (void)setM_contactsDataLogic:(id)arg1;
- (id)m_updateEncryptSecretInfoSet;
- (void)setM_updateEncryptSecretInfoSet:(id)arg1;
- (id)chatRoomMemberNoNickDataInfo;
- (void)setChatRoomMemberNoNickDataInfo:(id)arg1;
- (id)contactProfileRecommendLogic;
- (void)setContactProfileRecommendLogic:(id)arg1;
- (void).cxx_destruct;
@end

