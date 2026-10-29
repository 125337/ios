@interface MMWebPrefetchDataStorageMgr : MMUserService <MMServiceProtocol>
{
    WCEliminatedSlotMMKV * _slotMMKV; // +0x8
}
- (id)getMPDataMMKV;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)slotMMKV;
- (void)setSlotMMKV:(id)arg1;
- (void).cxx_destruct;
@end

