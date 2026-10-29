@interface WANewUniversalAudioEngine : NSObject <WAUniversalAudioEngineProtocol>
{
    BOOL connected; // +0x8
    BOOL _isSessionInterrupted; // +0x9
    BOOL __started; // +0xa
    NSString * _name; // +0x10
    AVAudioEngine * __audioengine; // +0x18
    NSMutableDictionary * _playerPool; // +0x20
    NSObject<OS_dispatch_queue> * _audioQueue; // +0x28
    WAUniversalAudioPlayerCachePool * _cachePool; // +0x30
    NSObject<OS_dispatch_queue> * _fileQueue; // +0x38
    AVAudioMixerNode * _mixerNode; // +0x40
}
- (id)initWithName:(id)arg1 fileQueue:(id)arg2;
- (void)dealloc;
- (void)createPlayerWithAudioID:(id)arg1;
- (void)installTapOnOutputWithBufferSize:(unsigned int)arg1 block:(id /* block */)arg2;
- (void)removeTapOnOutput;
- (void)removeTapOnOutput:(BOOL)arg1;
- (void)operatePlayerWithAudioID:(id)arg1 block:(id /* block */)arg2;
- (BOOL)start;
- (void)pause;
- (void)stop;
- (void)stop:(BOOL)arg1;
- (void)__stop:(BOOL)arg1;
- (BOOL)isStarted;
- (void)playerWillLoad:(id)arg1;
- (void)playerDidLoad:(id)arg1;
- (void)playerDidDestroy:(id)arg1;
- (BOOL)playerCanPlay:(id)arg1 error:(id *)arg2;
- (void)playerDidStop:(id)arg1;
- (void)playerDidPause:(id)arg1;
- (void)playerDidFinishPlaying:(id)arg1;
- (void)playerDidError:(id)arg1 error:(id)arg2;
- (BOOL)playerCanScheduleData:(id)arg1 error:(id *)arg2;
- (void)fixIOCycleCrash;
- (void)connectPlayerIfNeeded:(id)arg1;
- (void)connectMixerIfNeed;
- (BOOL)playerConnected:(id)arg1 engine:(id)arg2;
- (BOOL)startEngineAndReturnError:(id *)arg1;
- (void)makeEngineConnections:(id)arg1;
- (void)disconnectNode:(id)arg1;
- (void)attachNode:(id)arg1;
- (void)detachNode:(id)arg1;
- (void)handleEngineConfigurationChanged:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)handleMediaServicesReset:(id)arg1;
- (void)terminateOldPlayersAndRenew;
- (id)name;
- (void)setName:(id)arg1;
- (id)_audioengine;
- (void)set_audioengine:(id)arg1;
- (id)playerPool;
- (void)setPlayerPool:(id)arg1;
- (id)audioQueue;
- (void)setAudioQueue:(id)arg1;
- (id)cachePool;
- (void)setCachePool:(id)arg1;
- (id)fileQueue;
- (void)setFileQueue:(id)arg1;
- (BOOL)isSessionInterrupted;
- (void)setIsSessionInterrupted:(BOOL)arg1;
- (BOOL)_started;
- (void)set_started:(BOOL)arg1;
- (id)mixerNode;
- (void)setMixerNode:(id)arg1;
- (void).cxx_destruct;
@end

