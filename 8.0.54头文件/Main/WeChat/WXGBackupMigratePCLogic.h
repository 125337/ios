@interface WXGBackupMigratePCLogic : WXGBackupBasicLogic <WXGBackupDataMgrDelegate, WXGBackupBasicLogicProtocol>
{
    BOOL _bStopService; // +0x8
    BOOL _bFirstTag; // +0x9
    BOOL _bSendFinish; // +0xa
    WXGBackupDataMgr * _dataMgr; // +0x10
    NSMutableArray * _sendingArray; // +0x18
    NSMutableDictionary * _sessionNickDictionary; // +0x20
    NSMutableDictionary * _filterSizeDic; // +0x28
    unsigned long long _backFilterSizes; // +0x30
    NSObject<OS_dispatch_queue> * _migrateDataQueue; // +0x38
    unsigned long long _curMigrateSessionCount; // +0x40
    unsigned long long _totalMigrateSessionCount; // +0x48
    NSString * _lastMigrateSesionName; // +0x50
}
- (id)init;
- (void)startService;
- (void)stopService;
- (void)confirmLogic;
- (void)restartLogic;
- (BOOL)sendData:(id)arg1;
- (void)sendStartRequest;
- (void)sendMigratePCConfirm;
- (void)sendFinishRequest;
- (void)sendRequestSession;
- (void)sendLotOfDataPush:(unsigned int)arg1;
- (void)sendNextDataPushWithResponseID:(id)arg1;
- (id)p_processBackupDataTag:(id)arg1;
- (void)onDataMgrRequiredFilterRequest:(id)arg1;
- (void)onDataMgrFilterOneMedia:(unsigned long long)arg1 withMsgDataId:(id)arg2;
- (void)processStartResponseData:(id)arg1;
- (void)processRequestSessionResponseData:(id)arg1;
- (void)processDataPushResponseData:(id)arg1;
- (void)processBackupDataTagResponseData:(id)arg1;
- (void)processFilterResponseData:(id)arg1;
- (void)reportDisconnect:(unsigned long long)arg1;
- (id)dataMgr;
- (void)setDataMgr:(id)arg1;
- (BOOL)bStopService;
- (void)setBStopService:(BOOL)arg1;
- (id)sendingArray;
- (void)setSendingArray:(id)arg1;
- (id)sessionNickDictionary;
- (void)setSessionNickDictionary:(id)arg1;
- (id)filterSizeDic;
- (void)setFilterSizeDic:(id)arg1;
- (unsigned long long)backFilterSizes;
- (void)setBackFilterSizes:(unsigned long long)arg1;
- (id)migrateDataQueue;
- (void)setMigrateDataQueue:(id)arg1;
- (unsigned long long)curMigrateSessionCount;
- (void)setCurMigrateSessionCount:(unsigned long long)arg1;
- (unsigned long long)totalMigrateSessionCount;
- (void)setTotalMigrateSessionCount:(unsigned long long)arg1;
- (BOOL)bFirstTag;
- (void)setBFirstTag:(BOOL)arg1;
- (id)lastMigrateSesionName;
- (void)setLastMigrateSesionName:(id)arg1;
- (BOOL)bSendFinish;
- (void)setBSendFinish:(BOOL)arg1;
- (void).cxx_destruct;
@end

