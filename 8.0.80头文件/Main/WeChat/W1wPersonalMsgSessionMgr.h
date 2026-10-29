@interface W1wPersonalMsgSessionMgr : MMUserService <IMsgExt, MMServiceProtocol>
{
    BOOL _currentMsgNotifyEnable; // +0x8
    BOOL _msgSettingsFlag; // +0x9
    W1wUserContact * _currentUserContact; // +0x10
    W1wUserContact * _currentListUserContact; // +0x18
    W1wPersonalMsgSessionStorage * _currentSessionStorage; // +0x20
    NSMutableDictionary * _reddotIdMap; // +0x28
    NSMutableDictionary * _countMap; // +0x30
    NSMutableSet * _reportNowUsername; // +0x38
    W1wPersonalMsgSessionInfo * _helloSessionInfo; // +0x40
    W1wUserContact * _helloLastContact; // +0x48
    NSMutableDictionary * _sessionStorages; // +0x50
    WCTDatabase * _sessionDB; // +0x58
    NSString * _minVersion; // +0x60
    W1wPersonalMsgSessionViewModel * _viewModel; // +0x68
}
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)changeReddotWithUsername:(id)arg1 count:(unsigned long long)arg2;
- (void)sendReddotEventWithUsername:(id)arg1 count:(unsigned long long)arg2;
- (BOOL)isHelloMsgWithExtInfo:(id)arg1;
- (id)sessionStorageForUsername:(id)arg1;
- (id)sessionDB;
- (void)syncUnreadReddot;
- (void)adjustMsgContentLogic:(id)arg1 withToUserName:(id)arg2;
- (void)changeCurrentUserWithContact:(id)arg1;
- (void)changeCurrentListUserWithContact:(id)arg1;
- (id)sessionControllerForCurrentUserContact;
- (id)helloSessionControllerForCurrentUserContact;
- (void)chatLogicControllerForSessionInfo:(id)arg1 completion:(id /* block */)arg2;
- (void)personalMsgContentControllerWithToUserContact:(id)arg1 sessionId:(id)arg2 completion:(id /* block */)arg3 isChangeContact:(BOOL)arg4;
- (void)addOrUpdateSessionForSessionID:(id)arg1 message:(id)arg2 username:(id)arg3;
- (void)deleteSessionInfo:(id)arg1;
- (void)refreshFromServerForSessionInfo:(id)arg1 completion:(id /* block */)arg2;
- (id)getMinVersion;
- (void)handleUpdateSessionInfo:(id)arg1;
- (BOOL)isValidSessionId:(id)arg1;
- (void)OnDelMsg:(id)arg1;
- (void)OnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)clearUnreadCountForSessionInfo:(id)arg1;
- (BOOL)isListPagePrivate;
- (id)currentUserContact;
- (void)setCurrentUserContact:(id)arg1;
- (id)currentListUserContact;
- (void)setCurrentListUserContact:(id)arg1;
- (id)currentSessionStorage;
- (void)setCurrentSessionStorage:(id)arg1;
- (BOOL)currentMsgNotifyEnable;
- (void)setCurrentMsgNotifyEnable:(BOOL)arg1;
- (id)reddotIdMap;
- (void)setReddotIdMap:(id)arg1;
- (id)countMap;
- (void)setCountMap:(id)arg1;
- (id)reportNowUsername;
- (void)setReportNowUsername:(id)arg1;
- (id)helloSessionInfo;
- (id)helloLastContact;
- (BOOL)msgSettingsFlag;
- (void)setMsgSettingsFlag:(BOOL)arg1;
- (id)sessionStorages;
- (void)setSessionStorages:(id)arg1;
- (void)setSessionDB:(id)arg1;
- (id)minVersion;
- (void)setMinVersion:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (void).cxx_destruct;
@end
