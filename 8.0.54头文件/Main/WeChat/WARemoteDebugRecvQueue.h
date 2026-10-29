@interface WARemoteDebugRecvQueue : NSObject
{
    NSMutableArray * _recvIntervalList; // +0x8
    unsigned int _currRecvSeq; // +0x10
    unsigned int _prevRecvSeq; // +0x14
    unsigned int _accumulateCount; // +0x18
    id <WARemoteDebugRecvQueueDelegate> _delegate; // +0x20
}
- (id)init;
- (void)mergeMessages:(id)arg1 cmdID:(unsigned int)arg2;
- (void)handleFirstRecvInterval;
- (void)logRecvIntervalList;
- (unsigned int)getCurrRecvSeq;
- (unsigned int)getIntervalRecvCount;
- (void)clearAccumulateCount;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

