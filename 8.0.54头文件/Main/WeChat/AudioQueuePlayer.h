@interface AudioQueuePlayer : NSObject <AudioPlayerProtocol>
{
    AudioQueuePlayerState * mAqData; // +0x8
    BOOL m_didPrepareToPlay; // +0x10
    id <AudioPlayerDelegate> _delegate; // +0x18
    long long _voiceFormat; // +0x20
    id <AudioCodecProtocol> _codec; // +0x28
    NSString * _filePath; // +0x30
    MMTimer * _meterTimer; // +0x38
}
- (id)init;
- (void)dealloc;
- (BOOL)preparePlayWithFile:(id)arg1;
- (void)asyncPreparePlayWithFile:(id)arg1 finished:(id /* block */)arg2;
- (void)play;
- (void)playAtTime:(unsigned int)arg1;
- (void)asyncPlayAtTime:(unsigned int)arg1;
- (void)pause;
- (void)resume;
- (void)stop;
- (unsigned int)currentTime;
- (int)getCurrentTimeMs;
- (BOOL)isPlaying;
- (void)setProgress:(unsigned int)arg1;
- (int)getCodecTypeFromVoiceFormat:(long long)arg1;
- (BOOL)prepareToPlay;
- (void)initCodec;
- (BOOL)initAudioQueue;
- (float)TimerCheckMeter;
- (void)BeginNotifyOnMainThread:(id)arg1;
- (void)EndNotifyOnMainThread;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)voiceFormat;
- (void)setVoiceFormat:(long long)arg1;
- (id)codec;
- (void)setCodec:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)meterTimer;
- (void)setMeterTimer:(id)arg1;
- (void).cxx_destruct;
@end

