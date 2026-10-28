@interface MagicAdPushMgrService : MMUserService <MMServiceProtocol>
{
    AdPushMsgDBMgr * _dbMgr; // +0x8
}
- (id)getSpecificSlotMsg:(id)arg1 withBizName:(id)arg2;
- (BOOL)clearSpecificSlotMsg:(id)arg1 withBizName:(id)arg2;
- (void)handleAdMsg:(id)arg1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (id)dbMgr;
- (void)setDbMgr:(id)arg1;
- (void).cxx_destruct;
@end
