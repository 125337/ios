@interface VoIPMPScreenProjectAudioFrameProcessor : NSObject <FlutterThumbPlayerAudioFrameProcessor>
{
    BOOL _recMixEnabled; // +0x8
    int _sampleRate; // +0xc
    int _channels; // +0x10
    int _streamId; // +0x14
    float _appliedGain; // +0x18
    NSNumber * _playerId; // +0x20
    NSMutableData * _residualBuffer; // +0x28
    unsigned long long _frameCount; // +0x30
    unsigned long long _packetCount; // +0x38
}
- (id)initWithPlayerId:(id)arg1;
- (void)dealloc;
- (void)reset;
- (id)flutterThumbPlayer:(id)arg1 processAudioFrame:(id)arg2;
- (void)flutterThumbPlayerDidResetAudioProcessing:(id)arg1;
- (id)playerId;
- (void)setPlayerId:(id)arg1;
- (id)residualBuffer;
- (void)setResidualBuffer:(id)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (int)channels;
- (void)setChannels:(int)arg1;
- (BOOL)recMixEnabled;
- (void)setRecMixEnabled:(BOOL)arg1;
- (unsigned long long)frameCount;
- (void)setFrameCount:(unsigned long long)arg1;
- (unsigned long long)packetCount;
- (void)setPacketCount:(unsigned long long)arg1;
- (int)streamId;
- (void)setStreamId:(int)arg1;
- (float)appliedGain;
- (void)setAppliedGain:(float)arg1;
- (void).cxx_destruct;
@end
