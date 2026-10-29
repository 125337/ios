@interface TemplateSessionMgr : MMUserService <WXGImportMessageNotification, MMSessionRefreshExt, BrandTimelineMsgMgrExt, ISessionStorageDelegate, WAContactMgrExtension, IStrangerContactMgrExt, IExptServiceExt, MMServiceProtocol, IMsgExt, IContactMgrExt, IMMNewSessionMgrExt, IMMNewSessionMgrFilterExt>
{
    BOOL _showTemplateSessionList; // +0x8
    BOOL _scanOver; // +0x9
    unsigned int _scanCreateTime; // +0xc
    unsigned int _scanLocalID; // +0x10
    NSString * _currentShowSessionId; // +0x18
    WCTDatabase * _sessionMsgDB; // +0x20
    unsigned long long _curScanType; // +0x28
    MMBaseSessionStorage * _sessionStorage; // +0x30
    NSMutableDictionary * _cellDataCache; // +0x38
    NSMutableDictionary * _sessionUpdateDic; // +0x40
    NSMutableDictionary * _indexUpdateDic; // +0x48
}
+ (id)getContactByMessageWrap:(id)arg1;
+ (id)getRealUsrInMessage:(id)arg1;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)checkSwitch;
- (id)getSessionMsgDBPath;
- (BOOL)isTemplateUserName:(id)arg1;
- (id)tableNameFromUsrName:(id)arg1;
- (BOOL)haveRealUsrInMessage:(id)arg1;
- (id)getMinScanedIndexTableName;
- (void)setMinScanedIndex:(id)arg1;
- (id)getMinScanedIndex;
- (const void *)orderOfDescCreateTimeAndMsgLocalId;
- (const void *)orderOfAscCreateTimeAndMsgLocalId;
- (void)handleNewMessage:(id)arg1;
- (void)updateMsgIndexByMessage:(id)arg1;
- (void)updateSessionByLastMessage:(id)arg1;
- (void)updateOneSessionMessageCount:(id)arg1;
- (void)updateAllSessionMessageCount;
- (void)handleAllNewMessageOver;
- (void)makeSessionDB;
- (void)initScanHistoryMessage;
- (BOOL)tryStartScanHistoryMessage;
- (void)scanHistoryMessage;
- (void)waitNextScan;
- (void)onScanHistoryMessageOver;
- (void)deleteAllMessageIndex;
- (id)getContactByUsr:(id)arg1;
- (id)getContactByUsr:(id)arg1 messageWrap:(id)arg2;
- (void)updateSessionCellData:(id)arg1;
- (void)updateSesssionContact:(id)arg1;
- (void)reportTemplateAction:(id)arg1;
- (void)updateTemplateContact;
- (id)allTemplateContact;
- (void)onNewContact:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onContactListUpdate:(unsigned int)arg1;
- (void)OnUnReadCountChange:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)isUserShouldHandled:(id)arg1;
- (BOOL)isMessageShouldHandled:(id)arg1;
- (BOOL)isContactNeedProcess:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onSessionUpgrade;
- (void)onRebuildSessionStorage;
- (void)onImportMessageSuccess;
- (void)refreshServiceTriggerToRefresh:(id)arg1;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1;
- (unsigned int)sessionCount;
- (id)sessionCellDataAtIndex:(long long)arg1;
- (id)sessionCellDataByName:(id)arg1;
- (id)sessionInfoAtIndex:(long long)arg1;
- (id)sessionInfoByName:(id)arg1;
- (id)getMsgIndexTableByUsr:(id)arg1;
- (void)onExptItemListChange;
- (void)deleteAllNewFoldMsgSession;
- (void)deleteSessionWithSessionId:(id)arg1;
- (BOOL)shouldScanAllDataForNewFoldMsg;
- (id)getNewFoldInfoMsgIndex;
- (void)setNewFoldInfoMsgIndex:(id)arg1;
- (id)getNewFoldInfoMsgTableName;
- (BOOL)showTemplateSessionList;
- (void)setShowTemplateSessionList:(BOOL)arg1;
- (id)currentShowSessionId;
- (void)setCurrentShowSessionId:(id)arg1;
- (id)sessionMsgDB;
- (void)setSessionMsgDB:(id)arg1;
- (unsigned long long)curScanType;
- (void)setCurScanType:(unsigned long long)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (id)cellDataCache;
- (void)setCellDataCache:(id)arg1;
- (BOOL)scanOver;
- (void)setScanOver:(BOOL)arg1;
- (unsigned int)scanCreateTime;
- (void)setScanCreateTime:(unsigned int)arg1;
- (unsigned int)scanLocalID;
- (void)setScanLocalID:(unsigned int)arg1;
- (id)sessionUpdateDic;
- (void)setSessionUpdateDic:(id)arg1;
- (id)indexUpdateDic;
- (void)setIndexUpdateDic:(id)arg1;
- (void).cxx_destruct;
@end
