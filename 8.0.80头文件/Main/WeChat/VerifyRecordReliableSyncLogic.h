@interface VerifyRecordReliableSyncLogic : CommonReliableSyncLogic <VerifyRecordLogicDelegate>
{
    VerifyRecordLogic * _oVerifyRecordLogic; // +0x8
}
- (id)getRorkerQueueName;
- (void)doConfig;
- (void)asyncHandleCommonReliableResponseCore:(id)arg1 syncAction:(id)arg2 handleResultSuccess:(BOOL)arg3;
- (BOOL)checkIsNeedRespContinue:(id)arg1 syncAction:(id)arg2;
- (void)OnGetVerifyRecordHistorySuccessWithVersion:(unsigned long long)arg1 records:(id)arg2 hasMore:(BOOL)arg3 syncKeyBuff:(id)arg4 syncScene:(unsigned int)arg5;
- (void)OnGetVerifyRecordHistoryFail:(id)arg1 syncScene:(unsigned int)arg2;
- (id)getVerifyRecordLogic;
- (id)oVerifyRecordLogic;
- (void)setOVerifyRecordLogic:(id)arg1;
- (void).cxx_destruct;
@end
