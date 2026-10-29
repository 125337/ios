@interface EnterpriseSessionMgr : MMUserService <ISessionInfoExt, MMServiceProtocol, ISessionStorageDelegate, IEnterpriseMsgExt, IEnterpriseContactMgrExt, IEnterpriseGroupMgrExt, IMMNewSessionMgrExt, IMMNewSessionMgrFilterExt, IContactMgrExt>
{
    NSMutableDictionary * m_brandStorages; // +0x8
    NSMutableDictionary * m_mainSessionInfoItems; // +0x10
    NSMutableDictionary * m_mainSessionUpdateTime; // +0x18
    NSString * m_nsActiveSessionId; // +0x20
    NSObject<OS_dispatch_queue> * m_msgDispatchQueue; // +0x28
    BOOL _fastOnAddMsg; // +0x30
}
+ (long long)compareEnterpriseSession:(id)arg1 right:(id)arg2;
- (id)init;
- (void)onServiceInit;
- (id)filePathForMainSessionInfoCache;
- (id)storageForBrand:(id)arg1;
- (id)InfoItemForBrand:(id)arg1;
- (id)InfoItemForBrand:(id)arg1 needFillMainSession:(BOOL)arg2;
- (void)saveMainSessionInfoItems;
- (void)loadMainSessionInfoItems;
- (void)setActiveSession:(id)arg1;
- (BOOL)isActiveSession:(id)arg1;
- (id)getActiveSession;
- (void)checkChatBrand:(id)arg1;
- (unsigned int)sessionCountForBrand:(id)arg1;
- (id)sessionInfoAtIndex:(long long)arg1 forBrand:(id)arg2;
- (id)sessionInfo:(id)arg1 forBrand:(id)arg2;
- (id)allSessionInfoForBrand:(id)arg1;
- (id)allSessionIdForBrand:(id)arg1;
- (unsigned int)totalUnreadCntForBrand:(id)arg1;
- (unsigned int)totalUnreadCntForBrand:(id)arg1 exceptSubBrand:(id)arg2;
- (void)createSessionForEnterpriseContact:(id)arg1;
- (void)deleteAllSessionForBrand:(id)arg1;
- (void)deleteSession:(id)arg1 forBrand:(id)arg2;
- (void)saveSessionInfo:(id)arg1 forBrand:(id)arg2;
- (void)updateSessionInfo:(id)arg1 forBrand:(id)arg2;
- (void)updateSession:(id)arg1 forBrand:(id)arg2;
- (void)clearAtMeCountOfSession:(id)arg1 forBrand:(id)arg2;
- (void)changeUnReadCountOfSession:(id)arg1 forBrand:(id)arg2 to:(unsigned int)arg3;
- (void)notifyEnterpriseBrandChatSessionChanged:(id)arg1;
- (id)mainSessionForBrand:(id)arg1;
- (id)updateUnReadOfMainSession:(id)arg1 brand:(id)arg2;
- (id)updateMainSessionUnReadForBrand:(id)arg1;
- (void)updateMainSessionInfoForBrand:(id)arg1 lastMsg:(id)arg2 checkLastMsg:(BOOL)arg3;
- (void)internalUpdateMainSessionInfoForBrand:(id)arg1 lastMsg:(id)arg2 checkLastMsg:(BOOL)arg3;
- (void)onEnterSessionListForBrand:(id)arg1;
- (id)LastMsgForBrand:(id)arg1;
- (void)cleanUpEnterpriseChat:(id)arg1;
- (void)cleanUpEnterpriseChatSession:(id)arg1;
- (id)importSessions;
- (long long)compareSession:(id)arg1 rightSession:(id)arg2;
- (void)OnBatchAddEnterpriseMsg:(id)arg1 Brand:(id)arg2;
- (void)SlowOnBatchAddEnterpriseMsg:(id)arg1 Brand:(id)arg2;
- (void)FastOnBatchAddEnterpriseMsg:(id)arg1 Brand:(id)arg2;
- (void)OnAddEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)internalOnDelMsg:(id)arg1 Brand:(id)arg2;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 MsgWrap:(id)arg3;
- (void)OnDelMsg:(id)arg1 Brand:(id)arg2 DelAll:(BOOL)arg3;
- (void)OnSyncReadMsg:(id)arg1 Brand:(id)arg2;
- (void)OnModEnterpriseMsg:(id)arg1 Brand:(id)arg2 WrapMsg:(id)arg3;
- (void)OnUnReadEnterpriseMsgCountChange:(id)arg1 Brand:(id)arg2;
- (void)onCreateEnterpriseGroup:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onInitiateBizChat:(id)arg1 errorCode:(int)arg2 extDic:(id)arg3;
- (void)onGetDraft:(id)arg1 contact:(id)arg2;
- (void)onModifyEnterpriseContact:(id)arg1;
- (void)onBatchModifyEnterpriseContact:(id)arg1;
- (void)onModifyEnterpriseContactDraft:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onRemoveContactFromAddressBook:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)internalOnDeleteContact:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (BOOL)isUserShouldHandled:(id)arg1;
- (BOOL)isMessageShouldHandled:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (void).cxx_destruct;
@end
