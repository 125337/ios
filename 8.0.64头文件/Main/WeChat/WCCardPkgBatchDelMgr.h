@interface WCCardPkgBatchDelMgr : MMObject <PBMessageObserverDelegate>
{
    WCCardPkgDB * _wccardPkgDB; // +0x8
    NSMutableArray * _batchDelArray; // +0x10
    id <WCCardPkgBatchDelMgrDelegate> _delegate; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (void)addBatchDelWCCardList:(id)arg1;
- (void)tryStartBatchDel;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleBatchDelWCCardResp:(id)arg1 Event:(unsigned int)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
