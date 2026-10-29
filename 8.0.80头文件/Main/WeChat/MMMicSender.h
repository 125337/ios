@interface MMMicSender : BaseAudioRecorder
{
    long long startByteIndex; // +0x20
    BOOL _needRestartMusic; // +0x28
    BOOL _needRestartAudioTalk; // +0x29
    BOOL _disableSendData; // +0x2a
    float _pcmSampleRate; // +0x2c
    int _channelCount; // +0x30
    id <MMMicReceiver> _receiver; // +0x38
    unsigned long long _firstTimeStamp; // +0x40
    id /* block */ _queueAction; // +0x48
}
- (void)handleQueue:(OpaqueAudioQueue *)arg1 buffer:(AudioQueueBuffer *)arg2 startTime:(const AudioTimeStamp *)arg3 inNumPackets:(unsigned int)arg4 inPacketDesc:(const AudioStreamPacketDescription *)arg5;
- (BOOL)shouldAutoRestartWith:(int)arg1;
- (BOOL)canAutoRestart;
- (void)setDelegate:(id)arg1;
- (BOOL)prepareRecord;
- (void)record;
- (void)cleanResource;
- (void)stop;
- (void)autostop;
- (AudioStreamBasicDescription *)format;
- (void)setDataFormatPCM:(AudioStreamBasicDescription *)arg1;
- (void)prepareBuffers;
- (id)receiver;
- (void)setReceiver:(id)arg1;
- (BOOL)needRestartMusic;
- (void)setNeedRestartMusic:(BOOL)arg1;
- (BOOL)needRestartAudioTalk;
- (void)setNeedRestartAudioTalk:(BOOL)arg1;
- (unsigned long long)firstTimeStamp;
- (void)setFirstTimeStamp:(unsigned long long)arg1;
- (float)pcmSampleRate;
- (void)setPcmSampleRate:(float)arg1;
- (BOOL)disableSendData;
- (void)setDisableSendData:(BOOL)arg1;
- (int)channelCount;
- (void)setChannelCount:(int)arg1;
- (id /* block */)queueAction;
- (void)setQueueAction:(id /* block */)arg1;
- (void).cxx_destruct;
@end
