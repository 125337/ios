@interface BizPhotoAccountSessionMgr : MMUserService <ISessionStorageDelegate, PBMessageObserverDelegate, MMSessionRefreshExt, MMServiceProtocol, IMsgExt, IContactMgrExt, IMMNewSessionMgrExt, IMMNewSessionMgrFilterExt>
{
    MMBaseSessionStorage * _sessionStorage; // +0x8
    long long _resortType; // +0x10
    NSMutableArray * _pendingUpdateUsrNameSets; // +0x18
    NSMutableArray * _pendingUpdateMsgListDicts; // +0x20
}
- (void)onServiceInit;
- (void)onServiceTerminate;
- (BOOL)shouldProcessContact:(id)arg1;
- (BOOL)isContactNeedProcess:(id)arg1;
- (BOOL)isUserShouldHandled:(id)arg1;
- (BOOL)isMessageShouldHandled:(id)arg1;
- (id)isUserHasSpecalSessionInfo:(id)arg1;
- (id)importSessions;
- (void)cleanUpNoMsgSessions:(id)arg1;
- (long long)compareSession:(id)arg1 rightSession:(id)arg2;
- (void)pinSessionToTop:(id)arg1;
- (void)unpinSessionToTop:(id)arg1;
- (void)unSubscribeContact:(id)arg1 deleteScene:(unsigned int)arg2;
- (id)sessionInfoWithUsrName:(id)arg1;
- (BOOL)sessionExistForUsername:(id)arg1;
- (void)clearReadCount:(id)arg1;
- (void)deleteSessionForUsername:(id)arg1 deleteContact:(BOOL)arg2 deleteMsg:(BOOL)arg3;
- (void)deleteSession:(id)arg1 deleteContact:(BOOL)arg2 deleteMsg:(BOOL)arg3;
- (void)onGetDraft:(id)arg1 contact:(id)arg2;
- (void)onModifyDraft:(id)arg1 contact:(id)arg2 draftTime:(unsigned int)arg3;
- (void)OnUnReadCountChange:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)refreshServiceTriggerToRefresh:(id)arg1;
- (void)batchHandleAddMsgListArray:(id)arg1 notifyUserNameArray:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)fetchContactCreateTimeForUsername:(id)arg1;
- (void)fetchAllContactsCreateTime;
- (void)batchFetchContactsCreateTime:(id)arg1 isFetchAll:(BOOL)arg2;
- (void)handleFetchContactCreateTimeResponse:(id)arg1;
- (void)fetchContactMsgDigest;
- (void)handleFetchContactMsgDigestResponse:(id)arg1;
- (id)sessionStorage;
- (void)setSessionStorage:(id)arg1;
- (long long)resortType;
- (void)setResortType:(long long)arg1;
- (id)pendingUpdateUsrNameSets;
- (void)setPendingUpdateUsrNameSets:(id)arg1;
- (id)pendingUpdateMsgListDicts;
- (void)setPendingUpdateMsgListDicts:(id)arg1;
- (void).cxx_destruct;
@end
