@interface VoIPPlaybackInjectionManager : NSObject <AUAudioPlaybackInterceptor>
{
    short * _pcmBuffer; // +0x8
    unsigned long long _pcmTotalBytes; // +0x10
    int _pcmSampleRate; // +0x18
    int _pcmChannels; // +0x1c
    float _volume; // +0x20
    atomic<unsigned long> _readOffset; // +0x28
    atomic<int> _state; // +0x30
    atomic<bool> _finished; // +0x34
    atomic<int> _warmupCallbacks; // +0x38
    BOOL _didNotifyCompletion; // +0x3c
    NSObject<OS_dispatch_queue> * _serialQueue; // +0x40
    NSString * _lastPlayedPath; // +0x48
    double _lastPlayedTime; // +0x50
    NSString * _pendingFilePath; // +0x58
    id /* block */ _completion; // +0x60
}
- (id)init;
- (void)dealloc;
- (void)playFile:(id)arg1 volume:(float)arg2 completion:(id /* block */)arg3;
- (void)cancelCurrent;
- (void)resetInternalState;
- (void)forceStopInternal:(BOOL)arg1;
- (void)notifyCompletion:(BOOL)arg1;
- (void)decodeWithProbedSampleRate:(int)arg1 channels:(int)arg2 bytesPerCallback:(unsigned int)arg3;
- (BOOL)loadAndDecodeFile:(id)arg1 sampleRate:(int)arg2 channels:(int)arg3;
- (BOOL)isInterceptingPlayback;
- (BOOL)fillPlaybackBuffer:(void *)arg1 bytes:(unsigned int)arg2 sampleRate:(int)arg3 channels:(int)arg4;
- (void)scheduleFinish:(BOOL)arg1;
- (id)serialQueue;
- (void)setSerialQueue:(id)arg1;
- (id)lastPlayedPath;
- (void)setLastPlayedPath:(id)arg1;
- (double)lastPlayedTime;
- (void)setLastPlayedTime:(double)arg1;
- (id)pendingFilePath;
- (void)setPendingFilePath:(id)arg1;
- (id /* block */)completion;
- (void)setCompletion:(id /* block */)arg1;
- (BOOL)didNotifyCompletion;
- (void)setDidNotifyCompletion:(BOOL)arg1;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
