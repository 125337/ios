@interface AudioUnitPlayer : NSObject <AudioPlayerProtocol>
{
    unsigned int m_playedFrames; // +0x8
    BOOL m_bReadyToPlay; // +0xc
    BOOL m_bStopCallBack; // +0xd
    OpaqueAUGraph * m_graph; // +0x10
    int m_mixerNode; // +0x18
    int m_ioNode; // +0x1c
    id <AudioPlayerDelegate> _delegate; // +0x20
    id <AudioCodecProtocol> _codec; // +0x28
    NSString * _filePath; // +0x30
    MMTimer * _volumeCheckTimer; // +0x38
}
- (void)dealloc;
- (void)initCodec;
- (void)initAudioSession;
- (BOOL)initGraph;
- (BOOL)initAndAddIONode;
- (BOOL)initAndAddMixerNode;
- (BOOL)connectNode;
- (BOOL)configMixerNode;
- (BOOL)configIONode;
- (BOOL)preparePlayWithFile:(id)arg1;
- (void)asyncPreparePlayWithFile:(id)arg1 finished:(id /* block */)arg2;
- (BOOL)preparePlayWithFileInternal:(id)arg1;
- (void)play;
- (void)playAtTime:(unsigned int)arg1;
- (void)asyncPlayAtTime:(unsigned int)arg1;
- (void)pause;
- (void)resume;
- (void)restart;
- (void)stop;
- (void)realStop;
- (unsigned int)currentTime;
- (int)getCurrentTimeMs;
- (BOOL)isPlaying;
- (void)setProgress:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)reset;
- (void)activeVolumeTimer;
- (void)inactiveolumeTimer;
- (void)checkPower;
- (void)doWorkBeforePlay;
- (void)doWorkAfterPlay;
- (void)BeginNotifyOnMainThread:(id)arg1;
- (void)EndNotifyOnMainThread;
- (id)delegate;
- (id)codec;
- (void)setCodec:(id)arg1;
- (id)filePath;
- (void)setFilePath:(id)arg1;
- (id)volumeCheckTimer;
- (void)setVolumeCheckTimer:(id)arg1;
- (void).cxx_destruct;
@end

