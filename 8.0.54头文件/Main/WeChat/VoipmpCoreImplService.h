@interface VoipmpCoreImplService : NSObject
{
    TaskIdConvertor task_id_convertor; // +0x8
    VoipmpCoreImplServiceCppCover cpp_cover; // +0x80
    weak_ptr<voipmp::VoipmpCoreImplServiceDispatcher> cpp_dispatcher; // +0xd0
}
+ (id)buildZidlObjForHolder:(const void *)arg1 svrIdentity:(const void *)arg2 refCntManager:(void *)arg3;
- (shared_ptr<voipmp::VoipmpCoreImplServiceDispatcher>)getDispatcher;
- (void)setDispatcher:(const void *)arg1;
- (id)initForZidlPrivate;
- (id)initWithZidlImpl:(id)arg1;
- (id)init:(id)arg1 createName:(const void *)arg2 svrIdentity:(const void *)arg3;
- (id)zidlObjToHolder;
- (void)audioUIRouteToAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)audioUIRouteToAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)recordStateUpdateToAsync:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)recordStateUpdateToAsync:(BOOL)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)recErrorToAsync:(id /* block */)arg1;
- (void)recErrorToAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)updateAudioMenuAsync:(BOOL)arg1 devices:(id)arg2 completion:(id /* block */)arg3;
- (void)updateAudioMenuAsync:(BOOL)arg1 devices:(id)arg2 on:(id)arg3 completion:(id /* block */)arg4;
- (void)onConfEventAsync:(int)arg1 errCode:(int)arg2 paramsBuf:(id)arg3 bufLen:(int)arg4 completion:(id /* block */)arg5;
- (void)onConfEventAsync:(int)arg1 errCode:(int)arg2 paramsBuf:(id)arg3 bufLen:(int)arg4 on:(id)arg5 completion:(id /* block */)arg6;
- (void)onVideoFrameAsync:(int)arg1 dataPtr:(id)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6 completion:(id /* block */)arg7;
- (void)onVideoFrameAsync:(int)arg1 dataPtr:(id)arg2 dataLen:(int)arg3 width:(int)arg4 height:(int)arg5 format:(int)arg6 on:(id)arg7 completion:(id /* block */)arg8;
- (void)onReportDataAsync:(id /* block */)arg1;
- (void)onReportDataAsync:(id)arg1 completion:(id /* block */)arg2;
- (id)getAvailableDevices;
- (id)getCurrentDevice;
- (void)deviceRouteToAsync:(id)arg1 completion:(id /* block */)arg2;
- (void)deviceRouteToAsync:(id)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)updateAudioScene:(int)arg1;
- (BOOL)startPlay:(BOOL)arg1 sampleRate:(int)arg2 channels:(int)arg3 frameDuration:(int)arg4;
- (BOOL)stopPlay;
- (BOOL)startRecord:(int)arg1 channels:(int)arg2 frameDuration:(int)arg3;
- (BOOL)stopRecord;
- (BOOL)isRecording;
- (BOOL)muteMicrophone;
- (BOOL)unMuteMicroPhone;
- (id)getRenderTexture:(int)arg1;
- (void)updateTextureSize:(int)arg1 newWidth:(int)arg2 newHeight:(int)arg3;
- (void)release:(int)arg1;
- (id)getDeviceInfo;
- (BOOL)canQuickAcceptUseBT;
- (id)getSplitScreenState;
- (void)setSplitScreen:(BOOL)arg1;
- (int)getRingStreamType;
- (BOOL)allowNetWorkChangeToMobileNet;
- (void)markUserNotSupport:(id)arg1 videoCall:(BOOL)arg2;
- (void)setAutoScreenOffEnabled:(BOOL)arg1;
- (void)bindSocketToNetWorkAsync:(int)arg1 completion:(id /* block */)arg2;
- (void)bindSocketToNetWorkAsync:(int)arg1 on:(id)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
@end

