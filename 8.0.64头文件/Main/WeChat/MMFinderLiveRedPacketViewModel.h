@interface MMFinderLiveRedPacketViewModel : NSObject <MMFinderLiveRedPacketQueueObserver, MMFinderLiveRedPacketItemObserver>
{
    BOOL _remainingTimeHidden; // +0x8
    BOOL _hidden; // +0x9
    NSString * _observedKey; // +0x10
    MMFinderLiveTaskId * _taskId; // +0x18
    NSString * _senderMicId; // +0x20
    NSString * _remainingTimeString; // +0x28
    unsigned long long _count; // +0x30
    MMFinderLiveRedPacketLogic * _logic; // +0x38
    MMFinderLiveRedPacketQueue * _queue; // +0x40
    MMFinderLiveRedPacketItem * _targetRedPacket; // +0x48
}
- (id)initWithTaskId:(id)arg1 senderMicId:(id)arg2;
- (void)setTargetRedPacket:(id)arg1;
- (void)refreshRemainingTimeHidden:(BOOL)arg1;
- (void)refreshRemainingTimeStringWithTimeInterval:(unsigned int)arg1;
- (void)refreshRedPacketCount:(unsigned long long)arg1;
- (void)refreshHiddenWithRedPacketCount:(unsigned long long)arg1;
- (void)openTargetRedPacket;
- (void)redPacketQueueDidChange:(id)arg1;
- (void)redPacketItem:(id)arg1 remainingTimeDidChange:(unsigned int)arg2;
- (id)observedKey;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)senderMicId;
- (void)setSenderMicId:(id)arg1;
- (BOOL)remainingTimeHidden;
- (void)setRemainingTimeHidden:(BOOL)arg1;
- (id)remainingTimeString;
- (void)setRemainingTimeString:(id)arg1;
- (unsigned long long)count;
- (void)setCount:(unsigned long long)arg1;
- (BOOL)hidden;
- (void)setHidden:(BOOL)arg1;
- (id)logic;
- (void)setLogic:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
- (id)targetRedPacket;
- (void).cxx_destruct;
@end
