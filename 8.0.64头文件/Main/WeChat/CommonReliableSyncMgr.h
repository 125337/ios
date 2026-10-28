@interface CommonReliableSyncMgr : MMUserService <MMKernelExt, MMServiceProtocol>
{
    CommonReliableSyncLogic * _oCommonReliableSyncLogic; // +0x8
}
- (void)onServiceInit;
- (void)initData;
- (void)onServiceClearData;
- (void)syncWithActionNotifyData:(id)arg1 commBizIdBit:(unsigned int)arg2;
- (void)onAuthOK;
- (void)onInitOK;
- (id)oCommonReliableSyncLogic;
- (void)setOCommonReliableSyncLogic:(id)arg1;
- (void).cxx_destruct;
@end
