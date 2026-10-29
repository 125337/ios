@interface WCReplayKitExt : NSObject <WCLocalSocketClientDelegate, MMFinderReplayKitVideoEncoderDelegate>
{
    BOOL _needsIFrame; // +0x8
    BOOL _pausedByMainApp; // +0x9
    unsigned short _fps; // +0xa
    id <WCReplayKitExtDelegate> _delegate; // +0x10
    NSObject<OS_dispatch_queue> * _videoQueue; // +0x18
    NSObject<OS_dispatch_queue> * _audioQueue; // +0x20
    unsigned long long _frameCount; // +0x28
    unsigned long long _audioFrameCount; // +0x30
    unsigned long long _videoFrameCount; // +0x38
    unsigned long long _liveState; // +0x40
    NSLock * _sockLock; // +0x48
    NSObject<OS_dispatch_source> * _frameEmitter; // +0x50
    NSObject<OS_dispatch_queue> * _frameEmitterQueue; // +0x58
    opaqueCMSampleBuffer * _sampleBuffer; // +0x60
    MMFinderReplayKitVideoEncoder * _encoder; // +0x68
    WCLocalSocketClient * _socketClient; // +0x70
    struct _lastTime; // +0x78
    struct _config; // +0x90
    struct _header; // +0xb0
    _opaque_pthread_mutex_t _mutex; // +0xe0
}
+ (id)sharedManager;
- (id)init;
- (void)dealloc;
- (void)stopRecord;
- (void)sendVideoBufferToHostApp:(opaqueCMSampleBuffer *)arg1;
- (void)sendH264ideoBufferToHostApp:(opaqueCMSampleBuffer *)arg1;
- (void)sendYUVVideoBufferToHostApp:(opaqueCMSampleBuffer *)arg1;
- (void)onEncodeOneFrame:(id)arg1;
- (id)dictionaryToJson:(id)arg1;
- (void)realWriteDataWithData:(id)arg1 header:(struct)arg2;
- (void)sendAudioBufferToHostApp:(opaqueCMSampleBuffer *)arg1;
- (id)sockLock;
- (void)checkSocket:(unsigned long long)arg1;
- (void)checkOther;
- (void)enqueueSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (opaqueCMSampleBuffer *)dequeueSampleBuffer;
- (void)consumeFrameBuffer;
- (void)changeFPS:(unsigned short)arg1;
- (void)didReadData:(id)arg1;
- (void)updateConfig:(struct)arg1;
- (void)checkConfig;
- (BOOL)hasConfig:(struct)arg1;
- (void)onReceiveRequestPause;
- (void)onReceiveRequestResume;
- (void)updatePausedByMainApp:(unsigned short)arg1;
- (id)socketClient;
- (void)didConnectToUrl;
- (void)didConnectToHost;
- (void)resetHeader;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)videoQueue;
- (void)setVideoQueue:(id)arg1;
- (id)audioQueue;
- (void)setAudioQueue:(id)arg1;
- (unsigned long long)frameCount;
- (void)setFrameCount:(unsigned long long)arg1;
- (unsigned long long)audioFrameCount;
- (void)setAudioFrameCount:(unsigned long long)arg1;
- (unsigned long long)videoFrameCount;
- (void)setVideoFrameCount:(unsigned long long)arg1;
- (struct)lastTime;
- (void)setLastTime:(struct)arg1;
- (unsigned long long)liveState;
- (void)setLiveState:(unsigned long long)arg1;
- (void)setSockLock:(id)arg1;
- (id)frameEmitter;
- (void)setFrameEmitter:(id)arg1;
- (id)frameEmitterQueue;
- (void)setFrameEmitterQueue:(id)arg1;
- (unsigned short)fps;
- (void)setFps:(unsigned short)arg1;
- (_opaque_pthread_mutex_t)mutex;
- (void)setMutex:(_opaque_pthread_mutex_t)arg1;
- (opaqueCMSampleBuffer *)sampleBuffer;
- (void)setSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (BOOL)needsIFrame;
- (void)setNeedsIFrame:(BOOL)arg1;
- (id)encoder;
- (void)setEncoder:(id)arg1;
- (struct)config;
- (void)setConfig:(struct)arg1;
- (struct)header;
- (void)setHeader:(struct)arg1;
- (BOOL)pausedByMainApp;
- (void)setPausedByMainApp:(BOOL)arg1;
- (void)setSocketClient:(id)arg1;
- (void).cxx_destruct;
@end
