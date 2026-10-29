@interface VoIPCallAudioRingBuffer : NSObject
{
    NSMutableArray * _packets; // +0x8
}
- (id)init;
- (void)appendPacket:(id)arg1 ptsNs:(unsigned long long)arg2 sampleRate:(unsigned int)arg3 channels:(unsigned int)arg4;
- (id)freezeSnapshot;
- (void)reset;
- (void)p_trimIfExceedsCapacity;
- (id)packets;
- (void)setPackets:(id)arg1;
- (void).cxx_destruct;
@end
