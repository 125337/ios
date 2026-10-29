@interface WCCardPkgBatchGetCardItemByTpInfoMgr : MMObject <PBMessageObserverDelegate>
{
    id <WCCardPkgBatchGetCardItemByTpInfoMgrDelegate> _delegate; // +0x8
}
- (void)dealloc;
- (void)batchGetCardItemByIpInfo:(id)arg1 templateMsgId:(id)arg2 fromScene:(unsigned long long)arg3;
- (void)handleBatchGetWCCardByTpInfoResp:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

