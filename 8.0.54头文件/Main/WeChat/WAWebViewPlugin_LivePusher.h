@interface WAWebViewPlugin_LivePusher : WAWebViewPlugin_embedView <TXLivePushJSAdapterDelegate, WALivePusherPixelBufferDelegate, MagicBrushCVPixelBufferRTDelegate>
{
    int _curArrayBufferId; // +0x8
    int _lastArrayBufferId; // +0xc
    BOOL _isInBackground; // +0x10
    BOOL _hasPreview; // +0x11
    BOOL _isPublishingWhenEnterBackground; // +0x12
    unsigned int _pusherId; // +0x14
    unsigned int _currentCanvasId; // +0x18
    id <TXLivePushJSAdapterProtocol> _pusher; // +0x20
    UIView * _preview; // +0x28
    id /* block */ _operateCallback; // +0x30
    __CVBuffer * _lastOutputFrameBuffer; // +0x38
}
- (id)init;
- (void)dealloc;
- (void)onWeAppWillEnterBackground;
- (id)minimizationItemInfo;
- (void)onWeAppDidEnterBackground;
- (void)onWeAppEnterForeground;
- (void)onAppWillResignActive:(id)arg1;
- (void)onAppDidBecomeActive:(id)arg1;
- (void)restorePreviewSetting;
- (void)saveAndForceStopPreviewSetting;
- (unsigned int)insertLivePusher:(unsigned int)arg1 parentId:(unsigned int)arg2 pos:(CGRect)arg3 configs:(id)arg4;
- (void)updateLivePusher:(unsigned int)arg1 pos:(CGRect)arg2 configs:(id)arg3;
- (void)updateLivePusher:(unsigned int)arg1 configs:(id)arg2;
- (void)operateLivePusher:(unsigned int)arg1 type:(id)arg2 param:(id)arg3 completion:(id /* block */)arg4;
- (BOOL)removeLivePusher:(unsigned int)arg1;
- (id)getLivePusher;
- (void)stopLivePusher;
- (void)onRecordStateChanged:(BOOL)arg1;
- (void)onCameraStateChanged:(BOOL)arg1;
- (id)getCurrentWebView;
- (void)onPushEvent:(int)arg1 evtMsg:(id)arg2 pusherId:(unsigned int)arg3 param:(id)arg4;
- (void)onLivePusherError:(unsigned int)arg1 errCode:(long long)arg2 errMsg:(id)arg3 data:(id)arg4;
- (void)onPushNetStatus:(id)arg1 pusherId:(unsigned int)arg2;
- (void)onPusherDidTakeSnapshot:(id)arg1 pusherId:(unsigned int)arg2;
- (void)onInsertLogView:(unsigned int)arg1;
- (void)onLivePusherCallBack:(BOOL)arg1 errNo:(long long)arg2 errMsg:(id)arg3;
- (void)onLivePusherBGMStart:(unsigned int)arg1;
- (void)onLivePusherBGMProgress:(unsigned int)arg1 progress:(long long)arg2 duration:(long long)arg3;
- (void)onLivePusherBGMComplete:(unsigned int)arg1 errCode:(long long)arg2;
- (void)onLivePusher:(unsigned int)arg1 audioVolumeEvaluation:(long long)arg2;
- (void)onPusherEvent:(id)arg1;
- (void)sendEvent:(id)arg1 param:(id)arg2 sendWebview:(BOOL)arg3;
- (void)onEnableCustomVideoCapture:(BOOL)arg1 width:(double)arg2 height:(double)arg3;
- (void)liveManager:(id)arg1 didPushVideoSampleBuffer:(opaqueCMSampleBuffer *)arg2 homeRotation:(long long)arg3;
- (__CVBuffer *)getNextOutputPixelBuffer;
- (void)onLivePusherCameraFrameBufferUpdate:(unsigned int)arg1 width:(long long)arg2 height:(long long)arg3;
- (void)onLivePusherCameraFrame:(unsigned int)arg1 deviceOrientationRotation:(long long)arg2;
- (void)sendCustomVideoFrame:(id)arg1;
- (void)setupWebGLCanvas;
- (void)removeLastArrayBufferIfNeeded:(int)arg1;
- (void)createRenderTargetIfNeededWithCanvasId:(unsigned int)arg1;
- (void)onFrameAvailable:(__CVBuffer *)arg1 inRT:(id)arg2;
- (BOOL)handleEvent:(unsigned long long)arg1 userInfo:(id)arg2;
- (void)updateCapsuleView:(BOOL)arg1;
- (id)pusher;
- (void)setPusher:(id)arg1;
- (id)preview;
- (void)setPreview:(id)arg1;
- (unsigned int)pusherId;
- (void)setPusherId:(unsigned int)arg1;
- (id /* block */)operateCallback;
- (void)setOperateCallback:(id /* block */)arg1;
- (BOOL)isInBackground;
- (void)setIsInBackground:(BOOL)arg1;
- (BOOL)hasPreview;
- (void)setHasPreview:(BOOL)arg1;
- (BOOL)isPublishingWhenEnterBackground;
- (void)setIsPublishingWhenEnterBackground:(BOOL)arg1;
- (__CVBuffer *)lastOutputFrameBuffer;
- (void)setLastOutputFrameBuffer:(__CVBuffer *)arg1;
- (unsigned int)currentCanvasId;
- (void)setCurrentCanvasId:(unsigned int)arg1;
- (void).cxx_destruct;
@end

