@interface MMFinderSamleHanderSocketManager : NSObject <GCDAsyncSocketDelegate, MMFinderReplayKitVideoEncoderDelegate>
{
    BOOL _connected; // +0x8
    BOOL _needsIFrame; // +0x9
    BOOL _pausedByMainApp; // +0xa
    unsigned short _fps; // +0xc
    id <MMFinderSamleHanderSocketManagerDelegate> _delegate; // +0x10
    NSObject<OS_dispatch_queue> * _videoQueue; // +0x18
    NSObject<OS_dispatch_queue> * _audioQueue; // +0x20
    unsigned long long _frameCount; // +0x28
    unsigned long long _audioFrameCount; // +0x30
    unsigned long long _videoFrameCount; // +0x38
    MMFinderGCDAsyncSocket * _socket; // +0x40
    NSObject<OS_dispatch_queue> * _queue; // +0x48
    unsigned long long _liveState; // +0x50
    NSLock * _sockLock; // +0x58
    NSObject<OS_dispatch_source> * _frameEmitter; // +0x60
    NSObject<OS_dispatch_queue> * _frameEmitterQueue; // +0x68
    opaqueCMSampleBuffer * _sampleBuffer; // +0x70
    MMFinderReplayKitVideoEncoder * _encoder; // +0x78
    NSDictionary * _currentPacketHead; // +0x80
    struct _lastTime; // +0x88
    struct _config; // +0xa0
    _opaque_pthread_mutex_t _mutex; // +0xb8
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
- (void)realWriteDataWithData:(id)arg1 length:(unsigned long long)arg2 msgType:(unsigned long long)arg3 state:(unsigned long long)arg4 curMem:(long long)arg5 customHeadDic:(id)arg6;
- (void)sendAudioBufferToHostApp:(opaqueCMSampleBuffer *)arg1;
- (id)sockLock;
- (BOOL)checkSocket:(unsigned long long)arg1;
- (void)socketDelloc;
- (void)setUpSocket;
- (void)socket:(id)arg1 didConnectToUrl:(id)arg2;
- (void)socket:(id)arg1 didConnectToHost:(id)arg2 port:(unsigned short)arg3;
- (void)socket:(id)arg1 didWriteDataWithTag:(long long)arg2;
- (void)socketDidDisconnect:(id)arg1 withError:(id)arg2;
- (void)enqueueSampleBuffer:(opaqueCMSampleBuffer *)arg1;
- (opaqueCMSampleBuffer *)dequeueSampleBuffer;
- (void)consumeFrameBuffer;
- (void)changeFPS:(unsigned short)arg1;
- (void)didReadDataError:(id)arg1;
- (void)socket:(id)arg1 didReadData:(id)arg2 withTag:(long long)arg3;
- (void)updateConfig:(struct)arg1;
- (void)checkConfig;
- (BOOL)hasConfig:(struct)arg1;
- (void)onReceiveRequestPause;
- (void)onReceiveRequestResume;
- (void)updatePausedByMainApp:(unsigned short)arg1;
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
- (BOOL)connected;
- (void)setConnected:(BOOL)arg1;
- (id)socket;
- (void)setSocket:(id)arg1;
- (id)queue;
- (void)setQueue:(id)arg1;
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
- (id)currentPacketHead;
- (void)setCurrentPacketHead:(id)arg1;
- (BOOL)pausedByMainApp;
- (void)setPausedByMainApp:(BOOL)arg1;
- (void).cxx_destruct;
@end

