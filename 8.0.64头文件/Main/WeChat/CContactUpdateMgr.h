@interface CContactUpdateMgr : NSObject <IContactMgrExt, ContactsDataLogicDelegate, MMKernelExt, IMMNewSessionMgrExt>
{
    NSRecursiveLock * m_reporChatRoomMemberNoNickLock; // +0x8
    NSMutableSet * m_setHadReporChatRoomMemberNoNick; // +0x10
    ContactsDataLogic * m_contactsViewDataLogic; // +0x18
    NSNumber * m_bIsOpenMultiSelectContactsStyleSwitch; // +0x20
    ContactsDataLogic * _m_contactsDataLogic; // +0x28
    NSMutableSet * _m_updateEncryptSecretInfoSet; // +0x30
    WCChatRoomMemberNoNickDataInfo * _chatRoomMemberNoNickDataInfo; // +0x38
    ContactProfileRecommendLogic * _contactProfileRecommendLogic; // +0x40
    WCContactProfileRecommenDataInfo * _contactProfileRecommendDataInfo; // +0x48
    ContactTagDataStorageInfo * _contactTagDataStorageInfo; // +0x50
    NSRecursiveLock * _refreshProfileRecommendSystemLock; // +0x58
    NSObject<OS_dispatch_semaphore> * _refreshProfileRecommendSystemSemaphore; // +0x60
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
- (void)onModifyContactExtension:(id)arg1;
- (void)onDeleteContactExtension:(id)arg1;
- (void)onNewContactExtension:(id)arg1;
- (void)setContactAddContactTime:(id)arg1;
- (void)handleChatRoomMemberNoNickWithUserName:(id)arg1 groupUserName:(id)arg2;
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
- (id)getContactProfileVerifyRecommendInfoFilterExposure:(id)arg1;
- (id)getContactProfileRecommendInfoFilterExposure:(id)arg1;
- (void)removeProfileRecommendInfoEnxposureInfo:(id)arg1 recommendInfo:(id)arg2 isVerifyScene:(BOOL)arg3;
- (id)getContactProfileRecommendInfo:(id)arg1 isVerify:(BOOL)arg2 isChatScene:(BOOL)arg3;
- (BOOL)checkProfileRecommendInfoEffectiveTime:(id)arg1;
- (BOOL)checkProfileRecommendInfoSaveTime:(id)arg1;
- (BOOL)checkCanGetProfileRecommendInfo:(id)arg1;
- (BOOL)checkCanUpdateProfileRecommendInfoSystem:(id)arg1;
- (void)refreshProfileRecommendSystemInChatAddMsgScene:(id)arg1 MsgWrap:(id)arg2;
- (void)refreshProfileRecommendSystemInChatScene:(id)arg1;
- (void)refreshProfileRecommendSystemInChatSceneInFirstLoad:(id)arg1;
- (void)printProfileRecommendCondition:(id)arg1;
- (void)refreshProfileRecommendSystemCoreInChatScene:(id)arg1;
- (void)asyncRefreshProfileRecommendSystemCoreInChatScene:(id)arg1;
- (void)asyncDeleteExpiredProfileRecommendDataInfo;
- (void)handleDeleteExpiredProfileRecommendDataInfo;
- (void)delectProfileRecommendDataInfoWithContactDelete:(id)arg1;
- (void)recordExposureWith:(id)arg1 recommendRemarks:(id)arg2 recommendPhones:(id)arg3 recommendImageMsgLocalId:(unsigned int)arg4 isVerifyScene:(BOOL)arg5;
- (void)clearCurrentSysteProfileRecommeRecord:(id)arg1;
- (void)clearCurrentSysteProfileRecommeRecordCore:(id)arg1;
- (id)getCurrentSystemRecommendInfo:(id)arg1;
- (void)recordHelloToChatMsgId:(id)arg1 arrMsgLocalId:(id)arg2;
- (id)getHelloArrMsgLocalId:(id)arg1;
- (void)recordContactProfileRecommendInfoClickExposure:(id)arg1;
- (void)recordFailImageDownloadMsg:(id)arg1;
- (void)showEditRemarkNameInRecommendSystemMsgWithContact:(id)arg1 messageWrap:(id)arg2 viewController:(id)arg3;
- (BOOL)checkRecommendImageHadSetCardImage:(id)arg1 imageMsgLocalId:(unsigned int)arg2 cardImgList:(id)arg3;
- (id)getRecommEnxposureItem:(id)arg1 isVerifyScene:(BOOL)arg2;
- (void)saveRecommEnxposureItem:(id)arg1 isVerifyScene:(BOOL)arg2 recommEnxposureItem:(id)arg3;
- (id)getReportDictionaryWithProfileRecommendInfo:(id)arg1;
- (void)fillRecommendInfoCandidateSourceType:(id)arg1 recommendInfo:(id)arg2 isForeHello:(BOOL)arg3;
- (unsigned int)getCandidateSourceType:(id)arg1 recommendInfo:(id)arg2 recommendText:(id)arg3 recommendItemType:(unsigned int)arg4 isForeHello:(BOOL)arg5;
- (id)p_getProfileRecommendDataFilePath;
- (void)p_saveProfileRecommendDataFileInternal;
- (void)p_loadProfileRecommendDataInternal;
- (void)initDataExpand;
- (void)asyncContactMigrateTagData;
- (void)handleContactMigrateTagData;
- (void)recordRecentlyUsedTagWithTagID:(unsigned int)arg1;
- (void)deleteRecentlyUsedTagWithArrTagID:(id)arg1;
- (id)getArrRecordRecentlyUsedTag;
- (BOOL)checkIsHadMigrateContactTagData;
- (id)p_getContactTagDataStorageInfoFilePath;
- (void)p_saveContactTagDataStorageInfoFileInternal;
- (void)p_loadContactTagDataStorageInfoInternal;
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
- (void)onDeleteContact:(id)arg1;
- (void)onNewContact:(id)arg1;
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
- (id)contactProfileRecommendDataInfo;
- (void)setContactProfileRecommendDataInfo:(id)arg1;
- (id)contactTagDataStorageInfo;
- (void)setContactTagDataStorageInfo:(id)arg1;
- (id)refreshProfileRecommendSystemLock;
- (void)setRefreshProfileRecommendSystemLock:(id)arg1;
- (id)refreshProfileRecommendSystemSemaphore;
- (void)setRefreshProfileRecommendSystemSemaphore:(id)arg1;
- (void).cxx_destruct;
@end
