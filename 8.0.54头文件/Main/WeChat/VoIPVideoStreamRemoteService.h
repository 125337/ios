@interface VoIPVideoStreamRemoteService : MMUserService <VoIPCanvasPlugin, VoIPPIPServiceExt, IVOIPExt, VOIPMgrObserver, VoipUIManagerExt, VoIPilinkMgrVideoStreamObserver, MMServiceProtocol>
{
    __CVBuffer * _pixelBuffer; // +0x8
    __CVBuffer * _YMetalTexture; // +0x10
    __CVBuffer * _UVMetalTexture; // +0x18
    BOOL _isWorking; // +0x20
    BOOL _isTalking; // +0x21
    NSRecursiveLock * _releaseRecursiveLock; // +0x28
}
- (void)releasePixelBufferOnBlock:(id /* block */)arg1;
- (void)clearPixelBufferWhenInDealloc:(BOOL)arg1;
- (void)clearPixelBuffer;
- (void)clearTexture;
- (void)clearTextureByCanvasQueueWhenInDealloc:(BOOL)arg1;
- (void)open;
- (void)recievePixelBuffer:(__CVBuffer *)arg1;
- (void)closeWhenInDealloc:(BOOL)arg1;
- (void)close;
- (__CVBuffer *)pixelBuffer;
- (id)init;
- (void)dealloc;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)UIManagerWillOpenWindowWithContact:(id)arg1 isCaller:(BOOL)arg2 monoMsg:(id)arg3 startInApp:(BOOL)arg4 isEarMode:(BOOL)arg5 isAudioMode:(BOOL)arg6 from:(unsigned long long)arg7 isIlink:(BOOL)arg8;
- (void)UIManagerDidClose;
- (void)OnHangup:(id)arg1;
- (void)OnBeHanguped:(id)arg1;
- (void)OnBeginTalk:(id)arg1;
- (void)VoIPPIPServiceWillStartPictureInPicture;
- (void)VoIPPIPServiceDidStartPictureInPicture;
- (void)VoIPPIPServiceDidStopPictureInPicture;
- (void)VoIPPIPServiceEnterForeground:(BOOL)arg1;
- (void)VoIPPIPServiceOnRestoreUserInterfaceForPictureInPictureStop;
- (void)VoIPPIPServiceDidRemoteCaptureSuspend;
- (void)canvasWillRender:(id)arg1;
- (void)canvas:(id)arg1 didRenderWithIsSucceed:(BOOL)arg2;
- (unsigned long long)timesForCustomizingRenderCommandEncoderForCanvas:(id)arg1;
- (void)canvas:(id)arg1 customizeRenderCommandEncoder:(id)arg2 withIndex:(unsigned long long)arg3;
- (void)OnOneWayRemoteEarMode;
- (void)VOIPMgrDidReceiveRemotePixelBuffer:(__CVBuffer *)arg1;
- (void)VOIPMgrDidReceiveLocalPixelBuffer:(__CVBuffer *)arg1;
- (void)VOIPMgrDidCreateFrame:(BOOL)arg1 isRemote:(BOOL)arg2;
- (BOOL)shouldIgnoreDefaultRender;
- (void)voIPilinkMgrDidReceiveLocalFramePixelBuffer:(__CVBuffer *)arg1;
- (void)voIPilinkMgrDidReceiveRemoteFrameYUVData:(char *)arg1 Width:(unsigned int)arg2 Height:(unsigned int)arg3;
- (void)voIPilinkMgrDidReceiveLocalFrameAtFirst;
- (void)voIPilinkMgrDidReceiveRemoteFrameAtFirst;
- (BOOL)isWorking;
- (void)setIsWorking:(BOOL)arg1;
- (BOOL)isTalking;
- (void)setIsTalking:(BOOL)arg1;
- (id)releaseRecursiveLock;
- (void)setReleaseRecursiveLock:(id)arg1;
- (void).cxx_destruct;
@end

