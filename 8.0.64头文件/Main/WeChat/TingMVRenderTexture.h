@interface TingMVRenderTexture : NSObject <TingFlowPlayerNotification, FlutterTexture>
{
    long long _textureId; // +0x8
    TingTextureInfo * _textureInfo; // +0x10
    NSObject<FlutterTextureRegistry> * _registry; // +0x18
    __CVBuffer * _currentPixelBuffer; // +0x20
    TingMVTextureUpdateListenerApi * _listener; // +0x28
    NSString * _taskId; // +0x30
    NSString * _listenId; // +0x38
}
- (id)getMVTextureInfo;
- (void)releaseTexture;
- (id)initWithTextureRegistry:(id)arg1 listener:(id)arg2 taskId:(id)arg3 listenId:(id)arg4;
- (void)onTextureUnregistered:(id)arg1;
- (__CVBuffer *)copyPixelBuffer;
- (void)flowPlayer:(id)arg1 tingItem:(id)arg2 onDisplayElementFrameBufferOut:(id)arg3;
- (long long)textureId;
- (void)setTextureId:(long long)arg1;
- (id)textureInfo;
- (void)setTextureInfo:(id)arg1;
- (id)registry;
- (__CVBuffer *)currentPixelBuffer;
- (void)setCurrentPixelBuffer:(__CVBuffer *)arg1;
- (id)listener;
- (void)setListener:(id)arg1;
- (id)taskId;
- (void)setTaskId:(id)arg1;
- (id)listenId;
- (void)setListenId:(id)arg1;
- (void).cxx_destruct;
@end
