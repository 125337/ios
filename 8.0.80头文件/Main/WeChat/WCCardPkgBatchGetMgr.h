@interface WCCardPkgBatchGetMgr : MMObject <PBMessageObserverDelegate>
{
    WCCardPkgDB * _wcCardPkgDB; // +0x8
    NSMutableArray * _batchGetArray; // +0x10
    id <WCCardPkgBatchGetMgrDelegate> _delegate; // +0x18
}
- (id)init;
- (void)dealloc;
- (void)initDB:(id)arg1;
- (void)addBatchGetCardList:(id)arg1;
- (void)tryStartBatchGet;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleBatchGetWCCardResp:(id)arg1 Event:(unsigned int)arg2;
- (void)handleBatchGetObjectList:(id)arg1;
- (void)delFinishedCardIDFromBatchGetArray:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
