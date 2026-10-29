@interface CommonReliableSyncMgr : MMUserService <MMKernelExt, MMActionNotifyCommBizExt, MMServiceProtocol>
{
    CommonReliableSyncLogic * _oCommonReliableSyncLogic; // +0x8
}
+ (void)registerLazyExtension;
- (void)onServiceInit;
- (void)initData;
- (void)onServiceClearData;
- (void)syncWithActionNotifyData:(id)arg1 commBizIdBit:(unsigned int)arg2;
- (void)onAuthOK;
- (void)onInitOK;
- (void)onGetBizId1:(long long)arg1 data:(id)arg2;
- (id)oCommonReliableSyncLogic;
- (void)setOCommonReliableSyncLogic:(id)arg1;
- (void).cxx_destruct;
@end
