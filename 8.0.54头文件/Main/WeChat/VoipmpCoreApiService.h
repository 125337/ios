@interface VoipmpCoreApiService : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    VoipmpCoreApiServiceCppCover cpp_cover; // +0x80
    weak_ptr<voipmp::VoipmpCoreApiServiceDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)shareInstance;
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<voipmp::VoipmpCoreApiServiceDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)zidlObjToHolder;
- (void)setVoIPMPCoreDartImplService:(id)arg1;
- (void)setVoIPMPCoreJavaImplService:(id)arg1;
- (void)setVoIPMPCoreOCImplService:(id)arg1;
- (void)initAudioUnitAsync:(BOOL)arg1 isVideoMode:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)initAudioUnitAsync:(BOOL)arg1 isVideoMode:(BOOL)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)onDeviceRemove:(id)arg1;
- (void)onDeviceAdd:(id)arg1;
- (void)onDeviceChange:(id)arg1;
- (void)onRecorderStateUpdate:(BOOL)arg1;
- (void)onRecError;
- (void)updateSceneAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)updateSceneAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)toggleSpeakerAsync:(id /* block */)arg1;
- (void)toggleSpeakerAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)routeToDeviceAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)routeToDeviceAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)getAvailableDevicesAsync:(id /* block */)arg1;
- (void)getAvailableDevicesAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)getCurrentDeviceAsync:(id /* block */)arg1;
- (void)getCurrentDeviceAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)startRecordAsync:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3 completion:(id /* block */)arg4;
- (void)startRecordAsync:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3 on:(id)arg4 completion:(id /* block */)arg5;
- (void)stopRecordAsync:(id /* block */)arg1;
- (void)stopRecordAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)isRecordingAsync:(id /* block */)arg1;
- (void)isRecordingAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)startPlayAsync:(BOOL)arg1 sampleRate:(int)arg2 channels:(int)arg3 frameDuration:(int)arg4 completion:(id /* block */)arg5;
- (void)startPlayAsync:(BOOL)arg1 sampleRate:(int)arg2 channels:(int)arg3 frameDuration:(int)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)stopPlayAsync:(id /* block */)arg1;
- (void)stopPlayAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)unMuteMicrophoneAsync:(id /* block */)arg1;
- (void)unMuteMicrophoneAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)muteMicrophoneAsync:(id /* block */)arg1;
- (void)muteMicrophoneAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)updateTextureInfo:(int)arg1 newRatio:(double)arg2 newRotate:(int)arg3;
- (id)getDeviceInfo;
- (void)initWithTaskIdEnvInfoEnvInfoLengthAsync:(id)arg1 envInfoLength:(int)arg2 completion:(id /* block */)arg3;
- (void)initWithTaskIdEnvInfoEnvInfoLengthAsync:(id)arg1 envInfoLength:(int)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)uninitAsync:(id /* block */)arg1;
- (void)uninitAsync:(id)arg1 completion:(id /* block */)arg2;
- (int)joinRoom:(id)arg1 infoLen:(int)arg2;
- (int)exitRoom:(int)arg1;
- (int)invite:(id)arg1 infoLen:(int)arg2;
- (int)recvNotify:(id)arg1 dataLen:(int)arg2 netType:(int)arg3;
- (int)ack;
- (int)accept:(BOOL)arg1 subCall:(BOOL)arg2;
- (int)add:(id)arg1 infoLen:(int)arg2;
- (int)hangup:(int)arg1 subCall:(BOOL)arg2;
- (int)switchAV:(BOOL)arg1 openVideo:(BOOL)arg2 screenStatus:(int)arg3;
- (int)switchAudio:(BOOL)arg1;
- (int)switchVideo:(BOOL)arg1;
- (int)subscribeVideo:(id)arg1 pbLen:(int)arg2;
- (void)getVoiceActivityAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)getVoiceActivityAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (id)getEngineInfo;
- (int)setAppCmd:(int)arg1 parameter:(id)arg2 len:(int)arg3;
- (int)sendCmdMsg:(id)arg1 dataLen:(int)arg2 targetMid:(int)arg3;
- (int)onNetworkChange:(int)arg1 ispInfo:(id)arg2;
- (int)sendAudioData:(id)arg1 bufferLen:(int)arg2;
- (int)getAudioData:(id)arg1 bufferLen:(int)arg2;
- (int)sendVideoData:(id)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 format:(int)arg5;
- (int)sendVideoDataWithStride:(id)arg1 dataLen:(int)arg2 width:(int)arg3 height:(int)arg4 stride:(int)arg5 format:(int)arg6;
- (int)getVideoData:(int)arg1 buf:(id)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

