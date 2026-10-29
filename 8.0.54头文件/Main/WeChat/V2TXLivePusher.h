@interface V2TXLivePusher : NSObject <V2TXLivePusherObserver, V2TXLivePusher>
{
    unique_ptr<lite_base::Thread, std::default_delete<lite_base::Thread>> _thread; // +0x8
    Pusher * _pusher; // +0x10
    PushNetworkConfig _config; // +0x18
    shared_ptr<liteav::live::V2TXLivePusherObserverImpl> _client; // +0x48
    TXDeviceManager * _deviceManager; // +0x58
    TXBeautyManager * _beautyManager; // +0x60
    TXAudioEffectManager * _audioEffectManager; // +0x68
}
- (id)init;
- (id)initWithLiveMode:(unsigned long long)arg1;
- (void)dealloc;
- (void)setObserver:(id)arg1;
- (long long)setRenderView:(id)arg1;
- (long long)setRenderMirror:(long long)arg1;
- (long long)setEncoderMirror:(BOOL)arg1;
- (long long)setRenderRotation:(long long)arg1;
- (long long)startCamera:(BOOL)arg1;
- (long long)stopCamera;
- (long long)startMicrophone;
- (long long)stopMicrophone;
- (long long)startVirtualCamera:(id)arg1;
- (long long)stopVirtualCamera;
- (long long)startScreenCapture:(id)arg1;
- (long long)stopScreenCapture;
- (long long)pauseAudio;
- (long long)resumeAudio;
- (long long)pauseVideo;
- (long long)resumeVideo;
- (long long)startPush:(id)arg1;
- (long long)stopPush;
- (int)isPushing;
- (long long)setAudioQuality:(long long)arg1;
- (long long)setVideoQuality:(id)arg1;
- (id)getAudioEffectManager;
- (id)getBeautyManager;
- (id)getDeviceManager;
- (long long)snapshot;
- (long long)setWatermark:(id)arg1 x:(float)arg2 y:(float)arg3 scale:(float)arg4;
- (long long)enableVolumeEvaluation:(unsigned long long)arg1;
- (long long)enableCustomVideoProcess:(BOOL)arg1 pixelFormat:(long long)arg2 bufferType:(long long)arg3;
- (long long)enableCustomVideoCapture:(BOOL)arg1;
- (long long)enableCustomAudioCapture:(BOOL)arg1;
- (long long)sendCustomVideoFrame:(id)arg1;
- (long long)sendCustomAudioFrame:(id)arg1;
- (long long)sendSeiMessage:(int)arg1 data:(id)arg2;
- (void)showDebugView:(BOOL)arg1;
- (long long)setProperty:(id)arg1 value:(id)arg2;
- (long long)setMixTranscodingConfig:(id)arg1;
- (long long)enable3A:(id)arg1 value:(id)arg2;
- (int)convertToInnerLiveMixInputType:(long long)arg1;
- (LiveMixStream)convertToInnerLiveMixStream:(id)arg1;
- (LiveTranscodingConfig)convertToInnerMixTranscodingConfig:(id)arg1;
- (unsigned long long)convertToInnerFormat:(long long)arg1;
- (id)convertToInnerFrame:(id)arg1;
- (VideoSize)getVideoSizeWith:(long long)arg1 mode:(long long)arg2;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

