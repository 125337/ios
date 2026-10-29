@interface WebGLAudioManager : NSObject <TXAudioRawDataDelegate>
{
    id /* block */ audioDataBlock; // +0x8
    int audioSampleRate; // +0x10
    int audioChannels; // +0x14
    unsigned long long _frameNum; // +0x18
    unsigned long long _timeStamp; // +0x20
}
- (id)init;
- (void)setBlock:(id /* block */)arg1;
- (void)onPcmDataAvailable:(id)arg1 pts:(unsigned long long)arg2;
- (void)onAudioInfoChanged:(int)arg1 channels:(int)arg2;
- (unsigned long long)frameNum;
- (void)setFrameNum:(unsigned long long)arg1;
- (unsigned long long)timeStamp;
- (void)setTimeStamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

