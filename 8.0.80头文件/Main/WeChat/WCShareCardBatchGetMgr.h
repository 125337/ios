@interface WCShareCardBatchGetMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray * _waitArray; // +0x8
    NSMutableArray * _gettingArray; // +0x10
    BOOL _bGetting; // +0x18
    unsigned int _batchGetFailCount; // +0x1c
    unsigned int _curBatchGetMinUpdateTime; // +0x20
    id <WCShareCardBatchGetMgrDelegate> _delegate; // +0x28
}
- (id)init;
- (void)dealloc;
- (void)addBatchGetShareCardList:(id)arg1;
- (void)tryStartBatchGet;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleBatchGetShareCardListResp:(id)arg1;
- (void)handleBatchGetFail;
- (void)handleBatchGetObjectList:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
