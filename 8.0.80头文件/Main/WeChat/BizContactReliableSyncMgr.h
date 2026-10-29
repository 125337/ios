@interface BizContactReliableSyncMgr : MMUserService <MMKernelExt, MMServiceProtocol>
{
    BizContactReliableSyncLogic * _syncLogic; // +0x8
}
- (void)onServiceInit;
- (void)initData;
- (void)onServiceClearData;
- (void)syncWithActionNotifyData:(id)arg1 commBizIdBit:(unsigned int)arg2;
- (void)onAuthOK;
- (void)onInitOK;
- (id)syncLogic;
- (void)setSyncLogic:(id)arg1;
- (void).cxx_destruct;
@end
