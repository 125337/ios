@interface MMFinderLiveRedPacketQueue : NSObject <MMFinderLiveRedPacketItemObserver>
{
    NSString * _observedKey; // +0x8
    MMFinderLiveTaskId * _taskId; // +0x10
    NSString * _senderMicId; // +0x18
    NSMutableArray * _redPackets; // +0x20
}
- (id)initWithTaskId:(id)arg1 senderMicId:(id)arg2;
- (id)init;
- (unsigned long long)count;
- (void)addRedPacket:(id)arg1;
- (void)removeRedPacket:(id)arg1;
- (id)firstRedPacket;
- (id)lastRedPacket;
- (void)willAddRedPacket:(id)arg1;
- (void)willRemoveRedPacket:(id)arg1;
- (void)didAddRedPacket:(id)arg1;
- (void)didRemoveRedPacket:(id)arg1;
- (void)redPacketItem:(id)arg1 statusDidChange:(long long)arg2;
- (id)observedKey;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)senderMicId;
- (void)setSenderMicId:(id)arg1;
- (id)redPackets;
- (void)setRedPackets:(id)arg1;
- (void).cxx_destruct;
@end

